// Function at 0x80023040
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80023040: stwu     r1, -0x10(r1)
//   0x80023044: mflr     r0
//   0x80023048: stw      r0, 0x14(r1)
//   0x8002304c: stw      r31, 0xc(r1)
//   0x80023050: mr       r31, r3
//   0x80023054: bl       0x801a650c
//   0x80023058: lhz      r4, 0x10(r31)
//   0x8002305c: lhz      r0, 0xc(r31)
//   0x80023060: subf.    r4, r4, r0
//   0x80023064: bge      0x80023070
//   0x80023068: lhz      r0, 6(r31)
//   0x8002306c: add      r4, r4, r0
//   0x80023070: lhz      r0, 0xe(r31)
//   0x80023074: clrlwi   r4, r4, 0x10
//   0x80023078: cmpwi    r0, 0
//   0x8002307c: beq      0x80023088
//   0x80023080: addi     r0, r4, 1
//   0x80023084: clrlwi   r4, r0, 0x10
//   0x80023088: lwz      r0, 0x14(r31)
//   0x8002308c: add      r31, r0, r4
//

// TODO: Full decompilation requires Ghidra
