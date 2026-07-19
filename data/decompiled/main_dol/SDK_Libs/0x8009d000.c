// Function at 0x8009d000
// Size: 480 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x8009d000: stwu     r1, -0x60(r1)
//   0x8009d004: mflr     r0
//   0x8009d008: stw      r0, 0x64(r1)
//   0x8009d00c: addi     r11, r1, 0x60
//   0x8009d010: bl       0x80020a1c
//   0x8009d014: clrlwi.  r0, r7, 0x1f
//   0x8009d018: mr       r28, r3
//   0x8009d01c: mr       r29, r4
//   0x8009d020: mr       r30, r5
//   0x8009d024: mr       r31, r8
//   0x8009d028: beq      0x8009d034
//   0x8009d02c: lfs      f0, -0x6dec(r2)
//   0x8009d030: stfs     f0, 0(r8)
//   0x8009d034: rlwinm.  r0, r7, 0, 0x1c, 0x1c
//   0x8009d038: beq      0x8009d048
//   0x8009d03c: lwz      r0, 0x1c(r4)
//   0x8009d040: neg      r0, r0
//   0x8009d044: stw      r0, 0x18(r8)
//   0x8009d048: lwz      r0, 0xc(r4)
//   0x8009d04c: cmplwi   r0, 1
//

// TODO: Full decompilation requires Ghidra
