// Function at 0x80070030
// Size: 896 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80070030: stwu     r1, -0x30(r1)
//   0x80070034: mflr     r0
//   0x80070038: stw      r0, 0x34(r1)
//   0x8007003c: addi     r11, r1, 0x30
//   0x80070040: bl       0x80020a3c
//   0x80070044: lis      r6, 0x6666
//   0x80070048: stw      r5, 8(r1)
//   0x8007004c: mr       r28, r3
//   0x80070050: mr       r29, r4
//   0x80070054: addi     r31, r6, 0x6667
//   0x80070058: subf     r0, r28, r29
//   0x8007005c: srawi    r0, r0, 2
//   0x80070060: addze    r7, r0
//   0x80070064: cmpwi    r7, 1
//   0x80070068: ble      0x80070398
//   0x8007006c: cmpwi    r7, 0x14
//   0x80070070: bgt      0x800700ec
//   0x80070074: cmplw    r28, r29
//   0x80070078: beq      0x80070398
//   0x8007007c: addi     r30, r29, -4
//

// TODO: Full decompilation requires Ghidra
