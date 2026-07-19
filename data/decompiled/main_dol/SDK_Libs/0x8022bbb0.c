// Function at 0x8022bbb0
// Size: 360 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8022bbb0: stwu     r1, -0x20(r1)
//   0x8022bbb4: mflr     r0
//   0x8022bbb8: lhz      r5, 0x76(r3)
//   0x8022bbbc: stw      r0, 0x24(r1)
//   0x8022bbc0: clrlwi.  r0, r5, 0x1f
//   0x8022bbc4: stw      r31, 0x1c(r1)
//   0x8022bbc8: mr       r31, r4
//   0x8022bbcc: stw      r30, 0x18(r1)
//   0x8022bbd0: mr       r30, r3
//   0x8022bbd4: beq      0x8022bcf4
//   0x8022bbd8: rlwinm.  r0, r5, 0, 0x19, 0x19
//   0x8022bbdc: beq      0x8022bcf4
//   0x8022bbe0: mr       r3, r31
//   0x8022bbe4: bl       0x800775c0
//   0x8022bbe8: lhz      r0, 0x76(r30)
//   0x8022bbec: rlwinm.  r0, r0, 0, 0x16, 0x16
//   0x8022bbf0: bne      0x8022bc00
//   0x8022bbf4: lwz      r0, 0(r31)
//   0x8022bbf8: ori      r0, r0, 0x10
//   0x8022bbfc: stw      r0, 0(r31)
//

// TODO: Full decompilation requires Ghidra
