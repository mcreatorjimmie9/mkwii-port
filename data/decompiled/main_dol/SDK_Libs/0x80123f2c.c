// Function at 0x80123f2c
// Size: 228 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80123f2c: stwu     r1, -0x10(r1)
//   0x80123f30: mflr     r0
//   0x80123f34: stw      r0, 0x14(r1)
//   0x80123f38: stw      r31, 0xc(r1)
//   0x80123f3c: mr       r31, r4
//   0x80123f40: stw      r30, 8(r1)
//   0x80123f44: mr       r30, r3
//   0x80123f48: bl       0x801a650c
//   0x80123f4c: lis      r7, -0x3400
//   0x80123f50: srwi     r5, r30, 0x10
//   0x80123f54: lhz      r6, 0x5030(r7)
//   0x80123f58: clrlwi   r4, r30, 0x10
//   0x80123f5c: rlwinm   r0, r31, 0x1b, 0x10, 0x1f
//   0x80123f60: rlwinm   r6, r6, 0, 0, 0x12
//   0x80123f64: or       r5, r6, r5
//   0x80123f68: sth      r5, 0x5030(r7)
//   0x80123f6c: lhz      r5, 0x5032(r7)
//   0x80123f70: rlwinm   r5, r5, 0, 0x1b, 0xf
//   0x80123f74: or       r4, r5, r4
//   0x80123f78: sth      r4, 0x5032(r7)
//

// TODO: Full decompilation requires Ghidra
