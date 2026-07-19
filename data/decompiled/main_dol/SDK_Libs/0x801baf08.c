// Function at 0x801baf08
// Size: 312 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801baf08: stwu     r1, -0x10(r1)
//   0x801baf0c: mflr     r0
//   0x801baf10: stw      r0, 0x14(r1)
//   0x801baf14: stw      r31, 0xc(r1)
//   0x801baf18: stw      r30, 8(r1)
//   0x801baf1c: lwz      r30, -0x6030(r13)
//   0x801baf20: stw      r3, -0x6030(r13)
//   0x801baf24: bl       0x801a650c
//   0x801baf28: lwz      r31, -0x6058(r13)
//   0x801baf2c: cmplwi   r31, 8
//   0x801baf30: bgt      0x801baf58
//   0x801baf34: lis      r4, -0x7fd6
//   0x801baf38: slwi     r0, r31, 2
//   0x801baf3c: addi     r4, r4, -0x66f4
//   0x801baf40: lwzx     r4, r4, r0
//   0x801baf44: mtctr    r4
//   0x801baf48: bctr     
//   0x801baf4c: li       r31, 0
//   0x801baf50: b        0x801baf58
//   0x801baf54: li       r31, 1
//

// TODO: Full decompilation requires Ghidra
