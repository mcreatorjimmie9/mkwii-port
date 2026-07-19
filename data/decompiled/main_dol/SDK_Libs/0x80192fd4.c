// Function at 0x80192fd4
// Size: 600 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x2e0 bytes
//
// Disassembly (first 20 instructions):
//   0x80192fd4: stwu     r1, -0x2e0(r1)
//   0x80192fd8: mflr     r0
//   0x80192fdc: li       r3, 2
//   0x80192fe0: stw      r0, 0x2e4(r1)
//   0x80192fe4: stw      r31, 0x2dc(r1)
//   0x80192fe8: stw      r30, 0x2d8(r1)
//   0x80192fec: mr       r30, r4
//   0x80192ff0: stw      r29, 0x2d4(r1)
//   0x80192ff4: stw      r28, 0x2d0(r1)
//   0x80192ff8: bl       0x80192f70
//   0x80192ffc: cmpwi    r3, 0
//   0x80193000: beq      0x8019320c
//   0x80193004: addis    r31, r3, -0x8000
//   0x80193008: li       r3, 1
//   0x8019300c: bl       0x80192f70
//   0x80193010: rlwinm   r0, r3, 0, 0x1a, 0x1b
//   0x80193014: li       r3, 1
//   0x80193018: ori      r4, r0, 4
//   0x8019301c: bl       0x80192f80
//   0x80193020: lis      r0, 0x4000
//

// TODO: Full decompilation requires Ghidra
