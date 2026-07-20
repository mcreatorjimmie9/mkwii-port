// Function at 0x8012e5e4
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8012e5e4: stwu     r1, -0x10(r1)
//   0x8012e5e8: mflr     r0
//   0x8012e5ec: stw      r0, 0x14(r1)
//   0x8012e5f0: rlwinm.  r0, r3, 0, 0, 0
//   0x8012e5f4: stw      r31, 0xc(r1)
//   0x8012e5f8: mr       r31, r3
//   0x8012e5fc: beq      0x8012e608
//   0x8012e600: mtspr    0x3f3, r3
//   0x8012e604: b        0x8012e620
//   0x8012e608: lis      r3, -0x7fd8
//   0x8012e60c: addi     r3, r3, -0x1ca0
//   0x8012e610: crclr    cr1eq
//   0x8012e614: bl       0x801a2530
//   0x8012e618: oris     r31, r31, 0x8000
//   0x8012e61c: mtspr    0x3f3, r31
//   0x8012e620: lwz      r0, 0x14(r1)
//   0x8012e624: lwz      r31, 0xc(r1)
//   0x8012e628: mtlr     r0
//   0x8012e62c: addi     r1, r1, 0x10
//   0x8012e630: blr      
//

// TODO: Full decompilation requires Ghidra
