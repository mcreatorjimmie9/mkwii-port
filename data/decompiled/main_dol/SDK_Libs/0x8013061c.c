// Function at 0x8013061c
// Size: 472 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8013061c: stwu     r1, -0x20(r1)
//   0x80130620: mflr     r0
//   0x80130624: stw      r0, 0x24(r1)
//   0x80130628: addi     r11, r1, 0x20
//   0x8013062c: bl       0x80020a40
//   0x80130630: lhz      r5, 0(r4)
//   0x80130634: mr       r27, r4
//   0x80130638: lhz      r0, 4(r4)
//   0x8013063c: cmplwi   r5, 0x2100
//   0x80130640: add      r3, r4, r0
//   0x80130644: addi     r6, r3, 8
//   0x80130648: bne      0x80130654
//   0x8013064c: li       r28, 2
//   0x80130650: b        0x80130670
//   0x80130654: cmplwi   r5, 0x2200
//   0x80130658: bne      0x80130664
//   0x8013065c: li       r28, 3
//   0x80130660: b        0x80130670
//   0x80130664: cmplwi   r5, 0x2000
//   0x80130668: bne      0x80130670
//

// TODO: Full decompilation requires Ghidra
