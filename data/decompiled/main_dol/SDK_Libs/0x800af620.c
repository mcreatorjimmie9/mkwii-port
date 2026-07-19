// Function at 0x800af620
// Size: 496 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x800af620: stwu     r1, -0x60(r1)
//   0x800af624: mflr     r0
//   0x800af628: stw      r0, 0x64(r1)
//   0x800af62c: stfd     f31, 0x50(r1)
//   0x800af630: xscmpgtdp vs31, f1, f0
//   0x800af634: stfd     f30, 0x40(r1)
//   0x800af638: xsmaddmsp f30, f1, f0
//   0x800af63c: addi     r11, r1, 0x40
//   0x800af640: bl       0x80020a40
//   0x800af644: cmpwi    r5, 0xa
//   0x800af648: mr       r27, r4
//   0x800af64c: mr       r28, r6
//   0x800af650: beq      0x800af660
//   0x800af654: cmpwi    r5, 9
//   0x800af658: beq      0x800af6e8
//   0x800af65c: b        0x800af7d8
//   0x800af660: lwz      r30, 0(r6)
//   0x800af664: lfs      f0, 0x2c(r30)
//   0x800af668: stfs     f0, 8(r4)
//   0x800af66c: lfs      f0, 0x30(r30)
//

// TODO: Full decompilation requires Ghidra
