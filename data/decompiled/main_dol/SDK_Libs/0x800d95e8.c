// Function at 0x800d95e8
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800d95e8: stwu     r1, -0x10(r1)
//   0x800d95ec: mflr     r0
//   0x800d95f0: stw      r0, 0x14(r1)
//   0x800d95f4: bl       0x800d262c
//   0x800d95f8: cmpwi    r3, 3
//   0x800d95fc: bne      0x800d9624
//   0x800d9600: lwz      r3, -0x68f4(r13)
//   0x800d9604: li       r0, 0
//   0x800d9608: stb      r0, 0x17(r3)
//   0x800d960c: lwz      r3, -0x68f4(r13)
//   0x800d9610: stw      r0, 0x890(r3)
//   0x800d9614: lwz      r3, -0x68f4(r13)
//   0x800d9618: lwz      r3, 0x10(r3)
//   0x800d961c: bl       0x8010f1a0
//   0x800d9620: b        0x800d9638
//   0x800d9624: lis      r4, -0x7fd9
//   0x800d9628: li       r3, 4
//   0x800d962c: addi     r4, r4, 0x3760
//   0x800d9630: crclr    cr1eq
//   0x800d9634: bl       0x800ccfc8
//

// TODO: Full decompilation requires Ghidra
