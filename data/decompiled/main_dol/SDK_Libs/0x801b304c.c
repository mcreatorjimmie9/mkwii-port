// Function at 0x801b304c
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b304c: stwu     r1, -0x10(r1)
//   0x801b3050: mflr     r0
//   0x801b3054: stw      r0, 0x14(r1)
//   0x801b3058: slwi     r0, r4, 8
//   0x801b305c: stw      r31, 0xc(r1)
//   0x801b3060: slwi     r31, r3, 0x10
//   0x801b3064: or       r31, r31, r0
//   0x801b3068: bl       0x801a650c
//   0x801b306c: lis      r5, -0x7fd6
//   0x801b3070: lis      r4, -0x3300
//   0x801b3074: addi     r5, r5, -0x73f0
//   0x801b3078: lwz      r0, 4(r5)
//   0x801b307c: rlwinm   r0, r0, 0, 0x18, 5
//   0x801b3080: or       r31, r0, r31
//   0x801b3084: stw      r31, 4(r5)
//   0x801b3088: stw      r31, 0x6430(r4)
//   0x801b308c: bl       0x801a6534
//   0x801b3090: mr       r3, r31
//   0x801b3094: lwz      r31, 0xc(r1)
//   0x801b3098: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
