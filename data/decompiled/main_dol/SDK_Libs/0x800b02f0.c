// Function at 0x800b02f0
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b02f0: stwu     r1, -0x10(r1)
//   0x800b02f4: mflr     r0
//   0x800b02f8: stw      r0, 0x14(r1)
//   0x800b02fc: stw      r31, 0xc(r1)
//   0x800b0300: stw      r30, 8(r1)
//   0x800b0304: mr       r30, r3
//   0x800b0308: lwz      r6, 0x18(r3)
//   0x800b030c: lwz      r8, 0x14(r3)
//   0x800b0310: add      r7, r6, r5
//   0x800b0314: addi     r7, r7, 0x1f
//   0x800b0318: addi     r0, r8, 0x1f
//   0x800b031c: rlwinm   r7, r7, 0, 0, 0x1a
//   0x800b0320: rlwinm   r0, r0, 0, 0, 0x1a
//   0x800b0324: cmplw    r7, r0
//   0x800b0328: ble      0x800b0338
//   0x800b032c: subf     r5, r6, r8
//   0x800b0330: addi     r0, r5, 0x1f
//   0x800b0334: rlwinm   r5, r0, 0, 0, 0x1a
//   0x800b0338: lwz      r7, 0x68(r3)
//   0x800b033c: addi     r3, r3, 0x28
//

// TODO: Full decompilation requires Ghidra
