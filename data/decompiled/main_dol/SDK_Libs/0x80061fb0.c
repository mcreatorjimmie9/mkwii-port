// Function at 0x80061fb0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80061fb0: stwu     r1, -0x10(r1)
//   0x80061fb4: mflr     r0
//   0x80061fb8: stw      r0, 0x14(r1)
//   0x80061fbc: lwz      r0, 0(r3)
//   0x80061fc0: cmpwi    r0, 0
//   0x80061fc4: beq      0x80062010
//   0x80061fc8: bl       0x80050af0
//   0x80061fcc: lwz      r0, -0x6aa8(r13)
//   0x80061fd0: clrlwi.  r0, r0, 0x1f
//   0x80061fd4: beq      0x80061fec
//   0x80061fd8: addi     r4, r13, -0x6aa8
//   0x80061fdc: clrlwi   r0, r3, 0x18
//   0x80061fe0: lbz      r4, 4(r4)
//   0x80061fe4: cmplw    r4, r0
//   0x80061fe8: beq      0x80062010
//   0x80061fec: lwz      r0, -0x6aa8(r13)
//   0x80061ff0: addi     r4, r13, -0x6aa8
//   0x80061ff4: stb      r3, 4(r4)
//   0x80061ff8: clrlwi   r3, r3, 0x18
//   0x80061ffc: ori      r0, r0, 1
//

// TODO: Full decompilation requires Ghidra
