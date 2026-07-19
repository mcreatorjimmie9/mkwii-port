// Function at 0x802269c8
// Size: 132 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x802269c8: stwu     r1, -0x10(r1)
//   0x802269cc: mflr     r0
//   0x802269d0: stw      r0, 0x14(r1)
//   0x802269d4: stw      r31, 0xc(r1)
//   0x802269d8: stw      r30, 8(r1)
//   0x802269dc: mr       r30, r3
//   0x802269e0: lwz      r3, 0x10(r3)
//   0x802269e4: bl       0x801992b8
//   0x802269e8: addi     r31, r3, 0x38
//   0x802269ec: cmplwi   r31, 0x38
//   0x802269f0: ble      0x80226a20
//   0x802269f4: lwz      r3, 0x18(r30)
//   0x802269f8: cmpwi    r3, 0
//   0x802269fc: beq      0x80226a20
//   0x80226a00: lwz      r12, 0(r3)
//   0x80226a04: mr       r5, r31
//   0x80226a08: lwz      r4, 0x14(r30)
//   0x80226a0c: lwz      r12, 0x20(r12)
//   0x80226a10: mtctr    r12
//   0x80226a14: bctrl    
//

// TODO: Full decompilation requires Ghidra
