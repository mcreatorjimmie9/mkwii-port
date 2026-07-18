#!/usr/bin/env python3
"""
GHIRDA: Decompile AIRace and Collision modules from StaticR.rel
"""
import json
import os
import struct
from capstone import Cs, CS_ARCH_PPC, CS_MODE_BIG_ENDIAN, CS_MODE_32

# Constants
REL_PATH = "/tmp/StaticR.rel"
TEXT_OFFSET = 0xD8  # .text section starts at this file offset
BASE_ADDR = 0x8051289C  # Base address of .text in memory

OUTPUT_AI = "/home/z/my-project/mkwii-port-repo/data/decompiled/AIRace"
OUTPUT_COLL = "/home/z/my-project/mkwii-port-repo/data/decompiled/Collision"
SYMBOLS_PATH = "/home/z/my-project/mkwii-port-repo/data/symbols/dolphin_symbols/dolphin_symbols.json"

os.makedirs(OUTPUT_AI, exist_ok=True)
os.makedirs(OUTPUT_COLL, exist_ok=True)

# Initialize Capstone for PowerPC
md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN | CS_MODE_32)
md.detail = True

# Load symbols
with open(SYMBOLS_PATH) as f:
    all_symbols = json.load(f)

# Build address -> name map for all symbols
sym_map = {}
for s in all_symbols:
    addr_str = s.get('address', '')
    name = s.get('name', '')
    if addr_str and name:
        try:
            addr_int = int(addr_str, 16)
            if addr_int not in sym_map:
                sym_map[addr_int] = name
        except:
            pass

# Sort all symbol addresses
all_addrs = sorted(sym_map.keys())

def get_func_end(addr):
    """Find the next symbol after addr to determine function end."""
    for a in all_addrs:
        if a > addr:
            return a
    return addr + 0x1000  # fallback

def demangle(name):
    """Simple C++ demangling for common MKW patterns."""
    if '::' in name:
        return name
    
    if '__ct__' in name:
        rest = name.split('__ct__')[1]
        return demangle_class_method(rest, "<ctor>")
    if '__dt__' in name:
        rest = name.split('__dt__')[1]
        return demangle_class_method(rest, "<dtor>")
    
    parts = name.split('__')
    if len(parts) >= 3:
        func_name = parts[1] if parts[1] else parts[2]
        qual = parts[-1]
        cls = demangle_q(qual)
        if cls:
            return f"{cls}::{func_name}"
    
    return name

def demangle_q(q_str):
    """Demangle a Q-style qualified name."""
    try:
        i = 0
        result = []
        while i < len(q_str):
            c = q_str[i]
            if c == 'Q' and i + 1 < len(q_str) and q_str[i+1].isdigit():
                i += 1
                depth = 0
                while i < len(q_str) and q_str[i].isdigit():
                    depth = depth * 10 + int(q_str[i])
                    i += 1
                parts = []
                for _ in range(depth):
                    if i >= len(q_str):
                        break
                    if q_str[i].isdigit():
                        length = 0
                        while i < len(q_str) and q_str[i].isdigit():
                            length = length * 10 + int(q_str[i])
                            i += 1
                        part = q_str[i:i+length]
                        i += length
                        parts.append(part)
                    else:
                        i += 1
                result.append('::'.join(parts))
            elif c == 'F' or c == 'R' or c == 'C' or c == 'P' or c == 'U' or c == 'b' or c == 'v' or c == 'f' or c == 'l' or c == 'M':
                if c == 'F':
                    break
                i += 1
            else:
                i += 1
        return '::'.join(result) if result else q_str
    except:
        return q_str

def demangle_class_method(q_str, prefix):
    cls = demangle_q(q_str)
    if 'F' in cls:
        cls = cls.split('F')[0]
    return f"{cls}::{prefix}" if cls else prefix

def find_function_boundary(data, start_offset, rel_addr, max_size=0x2000):
    """Find function end by using next symbol address and looking for 'blr'."""
    # Determine upper bound from next known symbol (at least 4 bytes for PPC)
    upper_bound = max_size
    next_sym_addr = None
    for a in all_addrs:
        if a > rel_addr:
            upper_bound = max(a - rel_addr, 4)
            next_sym_addr = a
            break
    upper_bound = min(upper_bound, max_size)
    
    code = data[start_offset:start_offset+upper_bound]
    if len(code) < 4:
        return upper_bound, []
    instructions = list(md.disasm(code, 0))
    
    if not instructions:
        return upper_bound, []
    
    # For functions with no blr (tail calls, etc.), return all instructions up to next symbol
    has_blr = False
    for insn in instructions:
        if insn.mnemonic == 'blr':
            has_blr = True
            break
    
    if not has_blr:
        # No blr - function likely ends via bctr or similar
        # Return all instructions up to the next symbol
        return instructions[-1].address + instructions[-1].size, instructions
    
    # Find the last blr within the function's address range (before next symbol)
    last_blr_idx = -1
    for i, insn in enumerate(instructions):
        if insn.mnemonic == 'blr':
            actual_rel_addr = rel_addr + insn.address
            # Make sure we haven't passed the next symbol
            if next_sym_addr and actual_rel_addr >= next_sym_addr:
                break
            last_blr_idx = i
    
    if last_blr_idx >= 0:
        return instructions[last_blr_idx].address + instructions[last_blr_idx].size, instructions[:last_blr_idx+1]
    
    return instructions[-1].address + instructions[-1].size, instructions

def generate_pseudocode(instructions, func_name, addr):
    """Generate C pseudocode from PowerPC instructions."""
    lines = []
    lines.append(f"/*")
    lines.append(f" * Address: 0x{BASE_ADDR + addr:08X}")
    lines.append(f" * REL Offset: 0x{addr:08X}")
    lines.append(f" * Function: {func_name}")
    lines.append(f" * Size: {len(instructions)} instructions")
    lines.append(f" * AUTO-GENERATED PSEUDOCODE - Do not edit")
    lines.append(f" */")
    lines.append("")
    
    # Analyze the function to determine characteristics
    has_prologue = False
    has_epilogue = False
    frame_size = 0
    saved_regs = []
    calls = []
    
    for i, insn in enumerate(instructions):
        if insn.mnemonic == 'bl':
            calls.append(f"sub_{insn.op_str}")
        if insn.mnemonic == 'mflr':
            has_prologue = True
        if insn.mnemonic == 'mtlr':
            has_epilogue = True
    
    for insn in instructions:
        if insn.mnemonic == 'stwu' and 'r1' in insn.op_str:
            try:
                parts = insn.op_str.replace(',', '').split()
                if len(parts) == 3:
                    offset_str = parts[1].replace('-', '')
                    frame_size = int(offset_str, 0)
            except:
                pass
    
    for insn in instructions[:15]:
        if insn.mnemonic in ['stw', 'stmw']:
            op = insn.op_str
            for reg in ['r31', 'r30', 'r29', 'r28', 'r27', 'r26']:
                if reg in op and 'r1' in op:
                    saved_regs.append(reg)
    
    saved_regs = list(dict.fromkeys(saved_regs))
    
    r3_used = any('r3' in insn.op_str for insn in instructions[:5] if insn.mnemonic in ['lwz', 'lwzu', 'addi', 'mr', 'lis', 'addis'])
    f1_used = any('f1' in insn.op_str for insn in instructions[:10])
    
    ret_type = "void"
    for insn in instructions[-10:]:
        if insn.mnemonic in ['mr', 'addi', 'addis', 'lis', 'lwz', 'lbz', 'lhz'] and 'r3' in insn.op_str:
            ret_type = "u32 /* or f32 */"
            break
        if insn.mnemonic in ['fmr', 'lfs', 'lfd'] and 'f1' in insn.op_str:
            ret_type = "f32"
            break
    
    is_method = False
    for insn in instructions[:5]:
        if insn.mnemonic in ['lwz', 'stw'] and 'r3' in insn.op_str:
            parts = insn.op_str.replace(',', '').split()
            if len(parts) >= 2 and parts[0] in ['r3'] and 'r1' not in parts[-1]:
                is_method = True
    
    if 'Fv' in func_name:
        param_str = "void"
    elif is_method and '::' in func_name:
        param_str = "void"
    else:
        param_str = "/* unknown params */"
    
    clean_name = func_name.replace('<ctor>', '').replace('<dtor>', '').strip(' :')
    
    lines.append(f"{ret_type} {clean_name}({param_str})")
    lines.append("{")
    
    if frame_size > 0:
        lines.append(f"    // Stack frame: 0x{frame_size:X} bytes")
    if saved_regs:
        lines.append(f"    // Saved registers: {', '.join(saved_regs)}")
    if has_prologue:
        lines.append(f"    // Has prologue (saves LR)")
    
    lines.append("")
    
    local_reg_map = {}
    for reg in saved_regs:
        idx = int(reg[1:])
        local_reg_map[reg] = f"local_{idx}"
    
    for i, insn in enumerate(instructions):
        addr_str = f"    /* 0x{insn.address + addr:04X} */ "
        
        if insn.mnemonic in ['stwu', 'stw', 'lwz', 'lmw'] and 'r1' in insn.op_str:
            if 'r31' in insn.op_str or 'r30' in insn.op_str or 'r29' in insn.op_str:
                lines.append(f"{addr_str}// stack frame setup/save/restore")
                continue
        
        if insn.mnemonic in ['mflr', 'mtlr'] and ('r0' in insn.op_str):
            lines.append(f"{addr_str}// save/restore LR")
            continue
        
        if insn.mnemonic == 'nop':
            lines.append(f"{addr_str}// nop (alignment)")
            continue
        
        pseudocode = translate_instruction(insn, local_reg_map, calls)
        lines.append(f"{addr_str}{pseudocode}")
    
    lines.append("}")
    lines.append("")
    return '\n'.join(lines)

def translate_instruction(insn, local_map, calls):
    """Translate a single PPC instruction to C pseudocode."""
    mn = insn.mnemonic
    op = insn.op_str
    
    for reg, local in local_map.items():
        op = op.replace(reg, local)
    
    if mn == 'blr':
        return "return;"
    if mn == 'b':
        try:
            target = int(op, 16)
            return f"goto loc_0x{target:04X};"
        except:
            return f"goto {op};"
    if mn == 'beq':
        try:
            target = int(op.split(',')[-1].strip(), 16)
            cr = op.split(',')[0].strip()
            return f"if ({cr} == 0) goto loc_0x{target:04X};"
        except:
            return f"// beq {op}"
    if mn == 'bne':
        try:
            target = int(op.split(',')[-1].strip(), 16)
            cr = op.split(',')[0].strip()
            return f"if ({cr} != 0) goto loc_0x{target:04X};"
        except:
            return f"// bne {op}"
    if mn in ['bge', 'bgt', 'ble', 'blt', 'bge-', 'bgt-', 'ble-', 'blt-']:
        cmp_op = mn.rstrip('-')
        cmp = {'bge': '>=', 'bgt': '>', 'ble': '<=', 'blt': '<'}[cmp_op]
        try:
            target = int(op.split(',')[-1].strip(), 16)
            cr = op.split(',')[0].strip()
            return f"if ({cr} {cmp} 0) goto loc_0x{target:04X};"
        except:
            return f"// {mn} {op}"
    if mn == 'bctrl' or mn == 'bclr':
        return f"// {mn} {op}"
    
    if mn == 'bl':
        try:
            target = int(op, 16)
            return f"sub_0x{target:08X}();"
        except:
            return f"{op}();"
    
    if mn in ['cmpw', 'cmpwi', 'cmplw', 'cmplwi', 'fcmpu', 'fcmpo']:
        return f"// {mn} {op}"
    if mn.startswith('cr') and mn not in ['creqv', 'crand', 'cror', 'crxor', 'crnor', 'crnand', 'crandc', 'crorc']:
        if mn in ['crclr', 'crset', 'creqv', 'crand', 'cror', 'crxor', 'crnor', 'crnand', 'crandc', 'crorc', 'mcrf', 'mtcrf', 'mfcr']:
            return f"// {mn} {op}"
    
    if mn == 'mcrf' or mn == 'mtcrf' or mn == 'mfcr' or mn == 'crclr' or mn == 'crset':
        return f"// {mn} {op}"
    if mn in ['creqv', 'crand', 'cror', 'crxor', 'crnor', 'crnand', 'crandc', 'crorc']:
        return f"// {mn} {op}"
    
    if mn.startswith('b') and 'lr' in op:
        return f"// conditional return: {mn} {op}"
    
    if mn == 'lwz':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            if offset == 0:
                return f"{parts[0]} = *({base});"
            return f"{parts[0]} = *(u32*)({base} + 0x{offset:X});"
        return f"// {mn} {op}"
    if mn == 'lwzu':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            return f"{parts[0]} = *(u32*)({base} + 0x{offset:X}); {base} += 0x{offset:X};"
        return f"// {mn} {op}"
    if mn == 'lhz':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            return f"{parts[0]} = *(u16*)({base} + 0x{offset:X});"
        return f"// {mn} {op}"
    if mn == 'lbz':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            return f"{parts[0]} = *(u8*)({base} + 0x{offset:X});"
        return f"// {mn} {op}"
    if mn == 'lfs':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            return f"{parts[0]} = *(f32*)({base} + 0x{offset:X});"
        return f"// {mn} {op}"
    if mn == 'lfd':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            return f"{parts[0]} = *(f64*)({base} + 0x{offset:X});"
        return f"// {mn} {op}"
    if mn == 'lwzx' or mn == 'lhax' or mn == 'lhzx' or mn == 'lbzx' or mn == 'lfdux' or mn == 'lfsx' or mn == 'lfdx':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = *(u32*)({parts[1]} + {parts[2]});"
        return f"// {mn} {op}"
    if mn == 'stwx' or mn == 'sthx' or mn == 'stbx' or mn == 'stfsx' or mn == 'stfdx':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"*(u32*)({parts[2]} + {parts[1]}) = {parts[0]};"
        return f"// {mn} {op}"
    
    if mn == 'stw':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            if offset == 0:
                return f"*({base}) = {parts[0]};"
            return f"*(u32*)({base} + 0x{offset:X}) = {parts[0]};"
        return f"// {mn} {op}"
    if mn == 'sth':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            return f"*(u16*)({base} + 0x{offset:X}) = {parts[0]};"
        return f"// {mn} {op}"
    if mn == 'stb':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            return f"*(u8*)({base} + 0x{offset:X}) = {parts[0]};"
        return f"// {mn} {op}"
    if mn == 'stfs':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2 and '(' in parts[1]:
            base_off = parts[1].replace(')', '').split('(')
            offset = int(base_off[0], 0) if base_off[0] else 0
            base = base_off[1]
            return f"*(f32*)({base} + 0x{offset:X}) = {parts[0]};"
        return f"// {mn} {op}"
    
    if mn == 'add':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} + {parts[2]};"
    if mn in ['addi', 'addis']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            try:
                imm = int(parts[2], 0)
                return f"{parts[0]} = {parts[1]} + 0x{imm:X};"
            except:
                return f"{parts[0]} = {parts[1]} + {parts[2]};"
    if mn == 'addc' or mn == 'adde':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} + {parts[2]}; // with carry"
    if mn == 'subf' or mn == 'subfc' or mn == 'subfe':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[2]} - {parts[1]};"
    if mn == 'sub':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} - {parts[2]};"
    if mn == 'subfic':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[2]} - {parts[1]}; // subfic"
    if mn in ['mulhw', 'mulhwu', 'mullw', 'mulli']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} * {parts[2]};"
    if mn in ['divw', 'divwu']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} / {parts[2]};"
    
    if mn in ['and', 'andi.', 'andis.', 'andc']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} & {parts[2]};"
    if mn in ['or', 'orc']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            try:
                imm = int(parts[2], 0)
                return f"{parts[0]} = {parts[1]} | 0x{imm:X};"
            except:
                return f"{parts[0]} = {parts[1]} | {parts[2]};"
    if mn in ['ori', 'oris']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            try:
                imm = int(parts[2], 0)
                return f"{parts[0]} = {parts[1]} | 0x{imm:X};"
            except:
                return f"{parts[0]} = {parts[1]} | {parts[2]};"
    if mn in ['xor', 'xori']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} ^ {parts[2]};"
    if mn == 'nor':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = ~({parts[1]} | {parts[2]});"
    if mn == 'nand':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = ~({parts[1]} & {parts[2]});"
    if mn == 'neg':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = -{parts[1]};"
    if mn == 'not':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = ~{parts[1]};"
    if mn in ['extsh', 'extsb', 'extlh', 'extlh.']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = sign_extend({parts[1]}); // {mn}"
    if mn in ['extlwi', 'extrwi']:
        return f"// {mn} {op}"
    if mn == 'cntlzw':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = __builtin_clz({parts[1]});"
    if mn == 'cntlzw.':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = __builtin_clz({parts[1]}); // set CR"
    
    if mn in ['slw', 'slw.']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} << {parts[2]};"
    if mn in ['srw', 'srw.']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} >> {parts[2]};"
    if mn == 'sraw' or mn == 'srawi':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) >= 2:
            return f"{parts[0]} = (s32){parts[1]} >> {parts[2] if len(parts) > 2 else '5'};"
    if mn == 'rlwinm':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 5:
            return f"{parts[0]} = ROTL({parts[1]}, {parts[2]}) & MASK({parts[3]}, {parts[4]});"
        return f"// {mn} {op}"
    if mn == 'rlwimi':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 5:
            return f"ROTLIMI({parts[0]}, {parts[1]}, {parts[2]}, {parts[3]}, {parts[4]});"
        return f"// {mn} {op}"
    if mn == 'rlwnm':
        return f"// {mn} {op}"
    
    if mn == 'mr':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = {parts[1]};"
    if mn == 'li':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            try:
                imm = int(parts[1], 0)
                return f"{parts[0]} = 0x{imm:X} /* {imm} */;"
            except:
                return f"{parts[0]} = {parts[1]};"
    if mn == 'lis':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            try:
                imm = int(parts[1], 0)
                return f"{parts[0]} = 0x{imm:X}0000;"
            except:
                return f"{parts[0]} = {parts[1]} << 16;"
    
    if mn == 'fmr':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = {parts[1]};"
    if mn in ['fadd', 'fadds']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} + {parts[2]};"
    if mn in ['fsub', 'fsubs']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} - {parts[2]};"
    if mn in ['fmul', 'fmuls']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} * {parts[2]};"
    if mn in ['fdiv', 'fdivs']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 3:
            return f"{parts[0]} = {parts[1]} / {parts[2]};"
    if mn in ['fmadd', 'fmadds']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 4:
            return f"{parts[0]} = {parts[1]} + {parts[2]} * {parts[3]};"
    if mn in ['fmsub', 'fmsubs']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 4:
            return f"{parts[0]} = {parts[1]} - {parts[2]} * {parts[3]};"
    if mn in ['fnmadd', 'fnmadds']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 4:
            return f"{parts[0]} = -({parts[1]} + {parts[2]} * {parts[3]});"
    if mn in ['fnmsub', 'fnmsubs']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 4:
            return f"{parts[0]} = -({parts[1]} - {parts[2]} * {parts[3]});"
    if mn == 'frsp':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = (f32){parts[1]};"
    if mn in ['fctiwz', 'fctiw', 'fctidz', 'fctid']:
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = (int){parts[1]};"
    if mn == 'fabs':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = fabsf({parts[1]});"
    if mn == 'fneg':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = -{parts[1]};"
    if mn == 'fsel':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 4:
            return f"{parts[0]} = ({parts[1]} >= 0.0f) ? {parts[2]} : {parts[3]};"
    if mn == 'frsqrte':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = __frsqrte({parts[1]});"
    if mn == 'fres':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = __fres({parts[1]});"
    if mn == 'fmrx':
        parts = [p.strip() for p in op.split(',')]
        if len(parts) == 2:
            return f"{parts[0]} = {parts[1]}; // FPSCR"
    
    if mn in ['sync', 'isync', 'dcbst', 'dcbt', 'dcbtst', 'dcbi', 'icbi', 'dcbz', 'dcbz_l']:
        return f"// {mn} {op}"
    if mn in ['tw', 'twi', 'trap']:
        return f"// TRAP: {mn} {op}"
    if mn in ['eieio', 'lwarx', 'stwcx.']:
        return f"// {mn} {op}"
    if mn in ['mfmsr', 'mtmsr', 'mfspr', 'mtspr', 'mfctr', 'mtctr']:
        return f"// {mn} {op}"
    if mn == 'nop':
        return "// nop"
    if mn == 'b':
        return f"// unreachable b {op}"
    
    return f"// {mn} {op}"


# ===== SELECT FUNCTIONS FOR EACH MODULE =====

ai_selection = [
    ("0x00215c28", "__ct__Q25Enemy2AIFb"),
    ("0x00215cd4", "__dt__Q25Enemy2AIFv"),
    ("0x00215d5c", "init__Q25Enemy2AIFv"),
    ("0x00215e04", "update__Q25Enemy2AIFv"),
    ("0x00215e50", "getStick__Q25Enemy2AIFv"),
    ("0x00215e98", "isCPU__Q25Enemy2AIFv"),
    ("0x00215edc", "isRealLocal__Q25Enemy2AIFv"),
    ("0x00215f1c", "isRealLocalAndCPU__Q25Enemy2AIFv"),
    ("0x00215f84", "isAICPU__Q25Enemy2AIFv"),
    ("0x00215f88", "isGhost__Q25Enemy2AIFv"),
    ("0x00215fcc", "isSameTeam__Q25Enemy2AIFPQ25Enemy2AI"),
    ("0x00215ff4", "endRace__Q25Enemy2AIFv"),
    ("0x00215ffc", "onOutOfBounds__Q25Enemy2AIFRCQ26System17MapdataJugemPoint"),
    ("0x00216010", "forceRecalculation__Q25Enemy2AIFb"),
    ("0x00216018", "handleBump__Q25Enemy2AIFRCQ23EGG8Vector3fRCQ25Enemy2AI"),
    ("0x00216134", "isOnGround__Q25Enemy2AIFv"),
    ("0x00216148", "isAllWheelsCollision__Q25Enemy2AIFv"),
    ("0x0021615c", "isDriftingOnGround__Q25Enemy2AIFv"),
    ("0x00216170", "isHopping__Q25Enemy2AIFv"),
    ("0x00216184", "isAutoDrift__Q25Enemy2AIFv"),
    ("0x00216198", "isInBullet__Q25Enemy2AIFv"),
    ("0x002199e8", "__ct__Q25Enemy13AIControlBaseFRCQ25Enemy6AIInfo"),
    ("0x00219b64", "__dt__Q25Enemy13AIControlBaseFv"),
    ("0x00219d34", "init__Q25Enemy13AIControlBaseFv"),
    ("0x00219e68", "initAfterManager__Q25Enemy13AIControlBaseFv"),
    ("0x00219ef4", "onOutOfBoundsInner__Q25Enemy13AIControlBaseFRCQ26System17MapdataJugemPoint"),
    ("0x00219f34", "onForceRecalculation__Q25Enemy13AIControlBaseFRCQ23EGG8Vector3f"),
    ("0x00219f3c", "onPlayerGoal__Q25Enemy13AIControlBaseFv"),
    ("0x00219f44", "onCpuGoal__Q25Enemy13AIControlBaseFv"),
    ("0x00219f5c", "setStartDashTypeToKart__Q25Enemy13AIControlBaseFv"),
    ("0x00219fc8", "setBasicDriveInfo___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo"),
    ("0x0021a1bc", "doUpdate___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo"),
    ("0x00217e58", "setDoNotSelectBackward__Q25Enemy13AIControlBaseFv"),
    ("0x00217e60", "getAIProbability__Q25Enemy13AIControlBaseFv"),
    ("0x00218214", "setBattleType__Q25Enemy13AIControlBaseFv"),
    ("0x0021a4d8", "isAllStopAfterGoal__Q25Enemy13AIControlBaseFv"),
    ("0x0021a4e0", "setAIRankTopOfPlayer__Q25Enemy13AIControlBaseFv"),
    ("0x0021a4ec", "getAIRank__Q25Enemy13AIControlBaseFv"),
    ("0x0021a4f4", "onRaceStart__Q25Enemy13AIControlBaseFv"),
    ("0x0021a29c", "__ct__Q25Enemy16AIAirtimeTrackerFRCQ25Enemy6AIInfo"),
    ("0x0021a300", "init__Q25Enemy16AIAirtimeTrackerFl"),
    ("0x0021a328", "update__Q25Enemy16AIAirtimeTrackerFv"),
    ("0x0021a38c", "__ct__Q25Enemy12AIPowAvoiderFRCQ25Enemy6AIInfo"),
    ("0x0021a3e0", "init__Q25Enemy12AIPowAvoiderFv"),
    ("0x0021a3ec", "update__Q25Enemy12AIPowAvoiderFv"),
    ("0x0021a490", "isSameTeam__Q25Enemy12AIPowAvoiderFl"),
    ("0x002222c4", "update__Q25Enemy8AIEngineFPCQ26System24MapdataEnemyPathAccessor"),
    ("0x002222d4", "forceRecalculation__Q25Enemy8AIEngineFb"),
    ("0x002222dc", "endRace__Q25Enemy8AIEngineFv"),
    ("0x00222e00", "__ct__Q25Enemy12AIEngineBikeFRCQ25Enemy2AI"),
    ("0x00222ef0", "__ct__Q25Enemy12AIEngineKartFRCQ25Enemy2AI"),
    ("0x00224f44", "avoidPow__Q25Enemy14AITrickHandlerFv"),
    ("0x00224f54", "allowTricking__Q25Enemy14AITrickHandlerFv"),
    ("0x00224f94", "shouldTrick__Q25Enemy14AITrickHandlerFv"),
    ("0x0022509c", "calc__Q25Enemy14AITrickHandlerFv"),
    ("0x002250b0", "update__Q25Enemy14AITrickHandlerFv"),
    ("0x000115f8", "setInputState__Q26System6KPadAIFPQ26System18KPadRaceInputState"),
    ("0x000130ec", "__ct__Q26System6KPadAIFv"),
    ("0x000146a4", "calcInner__Q26System16KPadAIControllerFPQ26System18KPadRaceInputStatePQ26System16KPadUIInputState"),
]

coll_selection = [
    ("0x0005e1b8", "__ct__Q24Kart11KartCollideFv"),
    ("0x0005e270", "init__Q24Kart11KartCollideFv"),
    ("0x0005e358", "updateBbox__Q24Kart11KartCollideFv"),
    ("0x0005e3b0", "processBody__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl"),
    ("0x0005e520", "processWheels__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl"),
    ("0x0005e57c", "processMovingWater__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoPUl"),
    ("0x0005e650", "processFloor__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUlb"),
    ("0x0005ea70", "updateHitboxes__Q24Kart11KartCollideFv"),
    ("0x0005edd0", "processWall__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ25Field7ColInfoPUl"),
    ("0x0005eeb8", "checkNeighborhood__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfo"),
    ("0x0005f0dc", "processCannon__Q24Kart11KartCollideFPUl"),
    ("0x00063c3c", "__dt__Q24Kart11KartCollideFv"),
    ("0x0005f43c", "PlayerSub18_checkPlayerCollision"),
    ("0x000621c8", "PlayerSub18_checkItemCollision"),
    ("0x0006286c", "PlayerSub18_findCollision"),
    ("0x00062d20", "PlayerSub18_initHitboxes"),
    ("0x00062dbc", "PlayerSub18_handleNoopCollision"),
    ("0x00062dc4", "PlayerSub18_handleBananaCollision"),
    ("0x00062ddc", "PlayerSub18_handleShellCollision"),
    ("0x00062dfc", "PlayerSub18_handleBlueShellCollision"),
    ("0x00062e14", "PlayerSub18_handleBombCollision"),
    ("0x00062e2c", "PlayerSub18_handleMushroomCollision"),
    ("0x00062e70", "PlayerSub18_handleStarCollision"),
    ("0x00062ea8", "PlayerSub18_handleFibCollision"),
    ("0x000a6370", "PlayerSub18_findCollisionInner"),
    ("0x0006ad54", "PlayerSub10_computeWallCollisionSpeedFactor"),
    ("0x00073f80", "PlayerSub10_doRespawn"),
    ("0x000a7b94", "__ct__Q24Kart6HitboxFv"),
    ("0x000a7bd0", "reset__Q24Kart6HitboxFv"),
    ("0x000a7c08", "update__Q24Kart6HitboxFRCQ23EGG8Vector3fRCQ23EGG5QuatfRCQ23EGG8Vector3fff"),
    ("0x000a7da4", "create__Q24Kart6HitboxFRCQ23EGG8Vector3ff"),
    ("0x000a7e1c", "setScale__Q24Kart6HitboxFf"),
    ("0x000a7f08", "__ct__Q24Kart11HitboxGroupFv"),
    ("0x000a7f7c", "reset__Q24Kart11HitboxGroupFv"),
    ("0x000a8024", "setHitboxScale__Q24Kart11HitboxGroupFf"),
    ("0x000a806c", "createHitboxes__Q24Kart11HitboxGroupFl"),
    ("0x000a810c", "initHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitboxPvl"),
    ("0x000a82f4", "setHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitbox"),
    ("0x000a83a8", "createSingleHitbox__Q24Kart11HitboxGroupFRCQ23EGG8Vector3ff"),
    ("0x000a8488", "computeCollisionLimits__Q24Kart11HitboxGroupFv"),
    ("0x00089120", "setBsp__Q24Kart16KartWheelPhysicsFv"),
    ("0x000892dc", "calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f"),
    ("0x00089b20", "__ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel"),
    ("0x00089ba0", "reset__Q24Kart14KartSusPhysicsFv"),
    ("0x00089ec4", "calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff"),
    ("0x000a4a10", "setBspParams__Q24Kart12KartDynamicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3fbf"),
    ("0x000a7574", "applySomeFloorMoment__Q24Kart11KartCollideFPQ24Kart12KartDynamicsPQ24Kart11HitboxGroupRCQ23EGG8Vector3fRCQ23EGG8Vector3fRCQ23EGG8Vector3fffbbb"),
]

# Read the REL binary
with open(REL_PATH, 'rb') as f:
    rel_data = f.read()

print(f"REL size: {len(rel_data)} bytes")

def process_functions(selection, output_dir, module_name):
    """Process a list of functions: disassemble and generate pseudocode."""
    manifest = {
        "module": module_name,
        "source": "StaticR.rel",
        "text_offset": TEXT_OFFSET,
        "base_address": f"0x{BASE_ADDR:08X}",
        "function_count": 0,
        "functions": []
    }
    
    success_count = 0
    
    for addr_str, name in selection:
        addr = int(addr_str, 16)
        file_offset = TEXT_OFFSET + addr
        
        if file_offset >= len(rel_data):
            print(f"  SKIP {name} @ 0x{addr_str}: file offset 0x{file_offset:X} beyond file size")
            continue
        
        end_addr, instructions = find_function_boundary(rel_data, file_offset, addr, 0x1000)
        func_size = end_addr
        
        if len(instructions) == 0:
            print(f"  SKIP {name} @ 0x{addr_str}: no instructions")
            continue
        
        clean_name = name
        if '__' in name:
            clean_name = demangle(name)
        
        pseudocode = generate_pseudocode(instructions, clean_name, addr)
        
        out_filename = f"0x{BASE_ADDR + addr:08X}.c"
        out_path = os.path.join(output_dir, out_filename)
        with open(out_path, 'w') as f:
            f.write(pseudocode)
        
        manifest["functions"].append({
            "name": name,
            "clean_name": clean_name,
            "address": f"0x{addr:08X}",
            "absolute_address": f"0x{BASE_ADDR + addr:08X}",
            "size_bytes": func_size,
            "instruction_count": len(instructions),
            "output_file": out_filename
        })
        
        success_count += 1
        print(f"  OK   {clean_name} @ 0x{addr:08X} ({len(instructions)} insns, {func_size} bytes) -> {out_filename}")
    
    manifest["function_count"] = success_count
    
    manifest_path = os.path.join(output_dir, "_manifest.json")
    with open(manifest_path, 'w') as f:
        json.dump(manifest, f, indent=2)
    
    return manifest

print("\n===== PROCESSING AIRace MODULE =====\n")
ai_manifest = process_functions(ai_selection, OUTPUT_AI, "AIRace")

print("\n===== PROCESSING Collision MODULE =====\n")
coll_manifest = process_functions(coll_selection, OUTPUT_COLL, "Collision")

print("\n" + "="*60)
print("DECOMPILATION SUMMARY")
print("="*60)
print(f"\nAIRace Module:")
print(f"  Functions: {ai_manifest['function_count']}")
if ai_manifest['functions']:
    addrs = [int(f['address'], 16) for f in ai_manifest['functions']]
    print(f"  Address Range: 0x{min(addrs):08X} - 0x{max(addrs):08X}")
    print(f"  Size Range: {min(f['size_bytes'] for f in ai_manifest['functions'])} - {max(f['size_bytes'] for f in ai_manifest['functions'])} bytes")

print(f"\nCollision Module:")
print(f"  Functions: {coll_manifest['function_count']}")
if coll_manifest['functions']:
    addrs = [int(f['address'], 16) for f in coll_manifest['functions']]
    print(f"  Address Range: 0x{min(addrs):08X} - 0x{max(addrs):08X}")
    print(f"  Size Range: {min(f['size_bytes'] for f in coll_manifest['functions'])} - {max(f['size_bytes'] for f in coll_manifest['functions'])} bytes")

print(f"\nTotal: {ai_manifest['function_count'] + coll_manifest['function_count']} functions")