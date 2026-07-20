// Function at 0x801bda84
// Size: 2988 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801bda84: stwu     r1, -0x20(r1)
//   0x801bda88: mflr     r0
//   0x801bda8c: stw      r0, 0x24(r1)
//   0x801bda90: addi     r11, r1, 0x20
//   0x801bda94: bl       0x80020a40
//   0x801bda98: lwz      r6, 0x8b8(r3)
//   0x801bda9c: lbz      r8, 0x8c2(r3)
//   0x801bdaa0: cmplwi   r6, 2
//   0x801bdaa4: bgt      0x801bdcb8
//   0x801bdaa8: lbz      r0, 0x29(r4)
//   0x801bdaac: lhz      r8, 0(r4)
//   0x801bdab0: lhz      r7, 0(r5)
//   0x801bdab4: extsb.   r0, r0
//   0x801bdab8: subf     r6, r8, r7
//   0x801bdabc: subf     r0, r7, r8
//   0x801bdac0: or       r0, r6, r0
//   0x801bdac4: srwi     r0, r0, 0x1f
//   0x801bdac8: bne      0x801be614
//   0x801bdacc: lbz      r6, 0x29(r5)
//   0x801bdad0: extsb.   r6, r6
//

// TODO: Full decompilation requires Ghidra
