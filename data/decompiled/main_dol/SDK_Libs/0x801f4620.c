// Function at 0x801f4620
// Size: 640 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801f4620: stwu     r1, -0x30(r1)
//   0x801f4624: mflr     r0
//   0x801f4628: stw      r0, 0x34(r1)
//   0x801f462c: addi     r11, r1, 0x30
//   0x801f4630: bl       0x80020a38
//   0x801f4634: stw      r5, 0(r4)
//   0x801f4638: cmplwi   r9, 1
//   0x801f463c: lhz      r0, 0(r3)
//   0x801f4640: srawi    r0, r0, 9
//   0x801f4644: mullw    r12, r0, r8
//   0x801f4648: bne      0x801f4658
//   0x801f464c: divwu    r0, r7, r12
//   0x801f4650: cmplwi   r0, 1
//   0x801f4654: blt      0x801f466c
//   0x801f4658: cmpwi    r9, 0
//   0x801f465c: bne      0x801f4674
//   0x801f4660: divwu    r0, r7, r12
//   0x801f4664: cmplwi   r0, 2
//   0x801f4668: bge      0x801f4674
//   0x801f466c: li       r3, 0x1e
//

// TODO: Full decompilation requires Ghidra
