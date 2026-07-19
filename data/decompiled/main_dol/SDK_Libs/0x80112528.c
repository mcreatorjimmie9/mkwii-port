// Function at 0x80112528
// Size: 268 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80112528: stwu     r1, -0x20(r1)
//   0x8011252c: mflr     r0
//   0x80112530: stw      r0, 0x24(r1)
//   0x80112534: addi     r11, r1, 0x20
//   0x80112538: bl       0x80020a40
//   0x8011253c: lwz      r6, -0x687c(r13)
//   0x80112540: li       r3, 0
//   0x80112544: lwz      r0, -0x6880(r13)
//   0x80112548: mr       r5, r6
//   0x8011254c: mtctr    r0
//   0x80112550: cmpwi    r0, 0
//   0x80112554: ble      0x80112578
//   0x80112558: lwz      r4, 0(r5)
//   0x8011255c: lwz      r0, 0(r4)
//   0x80112560: cmpwi    r0, 0
//   0x80112564: bne      0x8011256c
//   0x80112568: b        0x8011261c
//   0x8011256c: addi     r5, r5, 4
//   0x80112570: addi     r3, r3, 1
//   0x80112574: bdnz     0x80112558
//

// TODO: Full decompilation requires Ghidra
