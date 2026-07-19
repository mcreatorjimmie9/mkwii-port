// Function at 0x801744fc
// Size: 148 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801744fc: stwu     r1, -0x10(r1)
//   0x80174500: mflr     r0
//   0x80174504: stw      r0, 0x14(r1)
//   0x80174508: stw      r31, 0xc(r1)
//   0x8017450c: li       r31, 0
//   0x80174510: stw      r30, 8(r1)
//   0x80174514: mr       r30, r3
//   0x80174518: b        0x80174540
//   0x8017451c: addi     r3, r30, 8
//   0x80174520: clrlwi   r4, r31, 0x10
//   0x80174524: bl       0x8018cb3c
//   0x80174528: lwz      r3, 4(r3)
//   0x8017452c: lwz      r12, 0(r3)
//   0x80174530: lwz      r12, 0xc(r12)
//   0x80174534: mtctr    r12
//   0x80174538: bctrl    
//   0x8017453c: addi     r31, r31, 1
//   0x80174540: lhz      r0, 0x10(r30)
//   0x80174544: cmplw    r31, r0
//   0x80174548: blt      0x8017451c
//

// TODO: Full decompilation requires Ghidra
