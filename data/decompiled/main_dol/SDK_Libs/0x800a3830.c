// Function at 0x800a3830
// Size: 480 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800a3830: stwu     r1, -0x20(r1)
//   0x800a3834: mflr     r0
//   0x800a3838: stw      r0, 0x24(r1)
//   0x800a383c: stw      r31, 0x1c(r1)
//   0x800a3840: mr       r31, r4
//   0x800a3844: stw      r30, 0x18(r1)
//   0x800a3848: mr       r30, r3
//   0x800a384c: stw      r29, 0x14(r1)
//   0x800a3850: bl       0x800a4490
//   0x800a3854: addi     r3, r3, 0x354
//   0x800a3858: bl       0x801a7e44
//   0x800a385c: lbz      r3, 0x8c(r31)
//   0x800a3860: lwz      r0, 0x48(r31)
//   0x800a3864: add      r3, r3, r0
//   0x800a3868: cmpwi    r3, 0x7f
//   0x800a386c: ble      0x800a3878
//   0x800a3870: li       r29, 0x7f
//   0x800a3874: b        0x800a3880
//   0x800a3878: srawi    r0, r3, 0x1f
//   0x800a387c: andc     r29, r3, r0
//

// TODO: Full decompilation requires Ghidra
