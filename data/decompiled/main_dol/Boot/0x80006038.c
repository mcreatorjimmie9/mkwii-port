// Function at 0x80006038
// Size: 616 bytes
// Category: Boot
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80006038: stwu     r1, -0x10(r1)
//   0x8000603c: mflr     r0
//   0x80006040: stw      r0, 0x14(r1)
//   0x80006044: stw      r31, 0xc(r1)
//   0x80006048: mr       r31, r3
//   0x8000604c: bl       0x80005f84
//   0x80006050: mr       r3, r31
//   0x80006054: lwz      r31, 0xc(r1)
//   0x80006058: lwz      r0, 0x14(r1)
//   0x8000605c: mtlr     r0
//   0x80006060: addi     r1, r1, 0x10
//   0x80006064: blr      
//   0x80006068: lis      r3, -0x8000
//   0x8000606c: lhz      r0, 0x30e4(r3)
//   0x80006070: andi.    r0, r0, 0xeef
//   0x80006074: cmpwi    r0, 0xeef
//   0x80006078: bnelr    
//   0x8000607c: li       r3, 0
//   0x80006080: li       r4, 0
//   0x80006084: li       r5, 0
//

// TODO: Full decompilation requires Ghidra
