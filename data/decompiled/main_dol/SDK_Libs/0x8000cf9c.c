// Function at 0x8000cf9c
// Size: 416 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000cf9c: stwu     r1, -0x10(r1)
//   0x8000cfa0: mflr     r0
//   0x8000cfa4: stw      r0, 0x14(r1)
//   0x8000cfa8: stw      r31, 0xc(r1)
//   0x8000cfac: lha      r31, 2(r3)
//   0x8000cfb0: stw      r30, 8(r1)
//   0x8000cfb4: mr       r30, r4
//   0x8000cfb8: mr       r3, r30
//   0x8000cfbc: bl       0x8000ce38
//   0x8000cfc0: lbz      r0, 5(r30)
//   0x8000cfc4: cmplwi   r0, 9
//   0x8000cfc8: bgt      0x8000d124
//   0x8000cfcc: cmpwi    r31, 0x24
//   0x8000cfd0: ble      0x8000cfd8
//   0x8000cfd4: li       r31, 0x24
//   0x8000cfd8: cmpwi    r31, 0
//   0x8000cfdc: ble      0x8000d0c4
//   0x8000cfe0: lbz      r0, 4(r30)
//   0x8000cfe4: cmpw     r31, r0
//   0x8000cfe8: bge      0x8000d0c4
//

// TODO: Full decompilation requires Ghidra
