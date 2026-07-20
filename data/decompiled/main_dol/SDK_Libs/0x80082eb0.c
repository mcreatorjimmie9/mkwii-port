// Function at 0x80082eb0
// Size: 480 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80082eb0: stwu     r1, -0x60(r1)
//   0x80082eb4: mflr     r0
//   0x80082eb8: stw      r0, 0x64(r1)
//   0x80082ebc: stfd     f31, 0x50(r1)
//   0x80082ec0: xscmpgtdp vs31, f1, f0
//   0x80082ec4: stfd     f30, 0x40(r1)
//   0x80082ec8: xsmaddmsp f30, f1, f0
//   0x80082ecc: addi     r11, r1, 0x40
//   0x80082ed0: bl       0x80020a2c
//   0x80082ed4: lwz      r6, 0xc(r3)
//   0x80082ed8: slwi     r4, r4, 2
//   0x80082edc: lfs      f31, -0x714c(r2)
//   0x80082ee0: mr       r24, r3
//   0x80082ee4: lwz      r0, 0x10(r6)
//   0x80082ee8: mr       r25, r5
//   0x80082eec: addi     r31, r1, 8
//   0x80082ef0: li       r26, 0
//   0x80082ef4: add      r0, r6, r0
//   0x80082ef8: lwzx     r0, r4, r0
//   0x80082efc: add      r30, r6, r0
//

// TODO: Full decompilation requires Ghidra
