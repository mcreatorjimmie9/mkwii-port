// Function at 0x8012dddc
// Size: 900 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x200 bytes
//
// Disassembly (first 20 instructions):
//   0x8012dddc: stwu     r1, -0x200(r1)
//   0x8012dde0: mflr     r0
//   0x8012dde4: stw      r0, 0x204(r1)
//   0x8012dde8: stfd     f31, 0x1f0(r1)
//   0x8012ddec: xxsel    vs31, vs1, vs0, v7
//   0x8012ddf0: addi     r11, r1, 0x1f0
//   0x8012ddf4: bl       0x80020a38
//   0x8012ddf8: lwz      r0, 0x90(r4)
//   0x8012ddfc: mr       r27, r4
//   0x8012de00: cmpwi    r0, 0
//   0x8012de04: beq      0x8012de14
//   0x8012de08: rlwinm   r0, r0, 0, 0x1f, 0x1d
//   0x8012de0c: stw      r0, 0x90(r4)
//   0x8012de10: b        0x8012e140
//   0x8012de14: lwz      r8, 0xa4(r4)
//   0x8012de18: lwz      r7, 0(r3)
//   0x8012de1c: lwz      r6, 4(r3)
//   0x8012de20: cmpwi    r8, 0
//   0x8012de24: lwz      r5, 8(r3)
//   0x8012de28: lwz      r0, 0xc(r3)
//

// TODO: Full decompilation requires Ghidra
