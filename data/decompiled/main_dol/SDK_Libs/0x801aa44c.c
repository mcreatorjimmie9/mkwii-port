// Function at 0x801aa44c
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801aa44c: stwu     r1, -0x10(r1)
//   0x801aa450: mflr     r0
//   0x801aa454: stw      r0, 0x14(r1)
//   0x801aa458: stw      r31, 0xc(r1)
//   0x801aa45c: stw      r30, 8(r1)
//   0x801aa460: mr       r30, r3
//   0x801aa464: bl       0x801a650c
//   0x801aa468: lhz      r0, 0x2c8(r30)
//   0x801aa46c: mr       r31, r3
//   0x801aa470: lhz      r4, 0x2ca(r30)
//   0x801aa474: cmplwi   r0, 8
//   0x801aa478: ori      r3, r4, 1
//   0x801aa47c: sth      r3, 0x2ca(r30)
//   0x801aa480: bne      0x801aa4c4
//   0x801aa484: lwz      r4, 0x2fc(r30)
//   0x801aa488: lwz      r5, 0x300(r30)
//   0x801aa48c: cmpwi    r4, 0
//   0x801aa490: bne      0x801aa4a0
//   0x801aa494: lis      r3, -0x8000
//   0x801aa498: stw      r5, 0xe0(r3)
//

// TODO: Full decompilation requires Ghidra
