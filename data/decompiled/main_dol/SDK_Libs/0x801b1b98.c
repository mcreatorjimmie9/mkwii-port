// Function at 0x801b1b98
// Size: 116 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1b98: stwu     r1, -0x10(r1)
//   0x801b1b9c: mflr     r0
//   0x801b1ba0: li       r4, 5
//   0x801b1ba4: stw      r0, 0x14(r1)
//   0x801b1ba8: addi     r3, r1, 8
//   0x801b1bac: bl       0x801b1310
//   0x801b1bb0: cmpwi    r3, 0
//   0x801b1bb4: bne      0x801b1bc4
//   0x801b1bb8: li       r0, 0
//   0x801b1bbc: stb      r0, 8(r1)
//   0x801b1bc0: b        0x801b1bf0
//   0x801b1bc4: lbz      r0, 8(r1)
//   0x801b1bc8: extsb    r0, r0
//   0x801b1bcc: cmpwi    r0, -0x20
//   0x801b1bd0: bge      0x801b1be0
//   0x801b1bd4: li       r0, -0x20
//   0x801b1bd8: stb      r0, 8(r1)
//   0x801b1bdc: b        0x801b1bf0
//   0x801b1be0: cmpwi    r0, 0x20
//   0x801b1be4: ble      0x801b1bf0
//

// TODO: Full decompilation requires Ghidra
