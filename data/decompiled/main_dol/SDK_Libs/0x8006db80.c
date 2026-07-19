// Function at 0x8006db80
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006db80: stwu     r1, -0x10(r1)
//   0x8006db84: mflr     r0
//   0x8006db88: cmplwi   r4, 3
//   0x8006db8c: mr       r6, r3
//   0x8006db90: stw      r0, 0x14(r1)
//   0x8006db94: bge      0x8006dbc8
//   0x8006db98: cmpwi    r4, 0
//   0x8006db9c: bne      0x8006dbac
//   0x8006dba0: lwz      r0, 0xcc(r3)
//   0x8006dba4: clrlwi   r0, r0, 1
//   0x8006dba8: stw      r0, 0xcc(r3)
//   0x8006dbac: mulli    r0, r4, 0x30
//   0x8006dbb0: mr       r3, r5
//   0x8006dbb4: add      r4, r6, r0
//   0x8006dbb8: addi     r4, r4, 0xc
//   0x8006dbbc: bl       0x80199c90
//   0x8006dbc0: li       r3, 1
//   0x8006dbc4: b        0x8006dbcc
//   0x8006dbc8: li       r3, 0
//   0x8006dbcc: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
