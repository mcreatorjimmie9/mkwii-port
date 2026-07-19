// Function at 0x80082600
// Size: 752 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80082600: stwu     r1, -0x10(r1)
//   0x80082604: mflr     r0
//   0x80082608: cmpwi    r3, 0
//   0x8008260c: stw      r0, 0x14(r1)
//   0x80082610: stw      r31, 0xc(r1)
//   0x80082614: mr       r31, r3
//   0x80082618: beq      0x80082628
//   0x8008261c: cmpwi    r4, 0
//   0x80082620: ble      0x80082628
//   0x80082624: bl       0x80229a90
//   0x80082628: mr       r3, r31
//   0x8008262c: lwz      r31, 0xc(r1)
//   0x80082630: lwz      r0, 0x14(r1)
//   0x80082634: mtlr     r0
//   0x80082638: addi     r1, r1, 0x10
//   0x8008263c: blr      
//   0x80082640: cmplwi   r4, 1
//   0x80082644: beq      0x80082658
//   0x80082648: lfs      f0, 0(r3)
//

// TODO: Full decompilation requires Ghidra
