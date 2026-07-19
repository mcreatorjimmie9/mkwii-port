// Function at 0x801a691c
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801a691c: stwu     r1, -0x20(r1)
//   0x801a6920: mflr     r0
//   0x801a6924: stw      r0, 0x24(r1)
//   0x801a6928: stw      r31, 0x1c(r1)
//   0x801a692c: mr       r31, r3
//   0x801a6930: stw      r30, 0x18(r1)
//   0x801a6934: stw      r29, 0x14(r1)
//   0x801a6938: bl       0x801a650c
//   0x801a693c: lis      r4, -0x8000
//   0x801a6940: mr       r30, r3
//   0x801a6944: lwz      r29, 0xc4(r4)
//   0x801a6948: lwz      r5, 0xc8(r4)
//   0x801a694c: or       r0, r29, r5
//   0x801a6950: and      r3, r31, r0
//   0x801a6954: andc     r31, r29, r31
//   0x801a6958: stw      r31, 0xc4(r4)
//   0x801a695c: or       r31, r31, r5
//   0x801a6960: b        0x801a696c
//   0x801a6964: mr       r4, r31
//   0x801a6968: bl       0x801a6640
//

// TODO: Full decompilation requires Ghidra
