// Function at 0x80233034
// Size: 404 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80233034: stwu     r1, -0x20(r1)
//   0x80233038: mflr     r0
//   0x8023303c: stw      r0, 0x24(r1)
//   0x80233040: stmw     r26, 8(r1)
//   0x80233044: mr       r30, r4
//   0x80233048: mr       r31, r9
//   0x8023304c: lhz      r0, 0(r5)
//   0x80233050: cmpwi    r0, 0
//   0x80233054: beq      0x80233074
//   0x80233058: cmplwi   r0, 0x7ff
//   0x8023305c: bgt      0x80233074
//   0x80233060: lhz      r0, 2(r5)
//   0x80233064: cmpwi    r0, 0
//   0x80233068: beq      0x80233074
//   0x8023306c: cmplwi   r0, 0x7ff
//   0x80233070: ble      0x80233080
//   0x80233074: lis      r3, -0x8000
//   0x80233078: addi     r3, r3, 1
//   0x8023307c: b        0x802331b4
//   0x80233080: cmplwi   r6, 0x64
//

// TODO: Full decompilation requires Ghidra
