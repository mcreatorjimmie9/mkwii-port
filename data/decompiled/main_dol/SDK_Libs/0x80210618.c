// Function at 0x80210618
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80210618: stwu     r1, -0x10(r1)
//   0x8021061c: mflr     r0
//   0x80210620: cmpwi    r6, 1
//   0x80210624: mr       r8, r5
//   0x80210628: stw      r0, 0x14(r1)
//   0x8021062c: li       r0, 0
//   0x80210630: beq      0x80210648
//   0x80210634: cmpwi    r6, 2
//   0x80210638: beq      0x80210660
//   0x8021063c: cmpwi    r6, 3
//   0x80210640: beq      0x80210678
//   0x80210644: b        0x80210694
//   0x80210648: lwz      r12, 0(r3)
//   0x8021064c: lwz      r12, 0x10(r12)
//   0x80210650: mtctr    r12
//   0x80210654: bctrl    
//   0x80210658: mr       r0, r3
//   0x8021065c: b        0x80210694
//   0x80210660: lwz      r12, 0(r3)
//   0x80210664: lwz      r12, 0x14(r12)
//

// TODO: Full decompilation requires Ghidra
