// Function at 0x801ae4ec
// Size: 76 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801ae4ec: stwu     r1, -0x10(r1)
//   0x801ae4f0: mflr     r0
//   0x801ae4f4: stw      r0, 0x14(r1)
//   0x801ae4f8: stw      r31, 0xc(r1)
//   0x801ae4fc: lis      r31, -0x7fdc
//   0x801ae500: addi     r31, r31, 0x4e00
//   0x801ae504: b        0x801ae514
//   0x801ae508: mtctr    r12
//   0x801ae50c: bctrl    
//   0x801ae510: addi     r31, r31, 4
//   0x801ae514: lwz      r12, 0(r31)
//   0x801ae518: cmpwi    r12, 0
//   0x801ae51c: bne      0x801ae508
//   0x801ae520: bl       0x8012e504
//   0x801ae524: lwz      r0, 0x14(r1)
//   0x801ae528: lwz      r31, 0xc(r1)
//   0x801ae52c: mtlr     r0
//   0x801ae530: addi     r1, r1, 0x10
//   0x801ae534: blr      
//

// TODO: Full decompilation requires Ghidra
