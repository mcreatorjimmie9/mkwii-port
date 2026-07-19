// Function at 0x801402f0
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801402f0: stwu     r1, -0x10(r1)
//   0x801402f4: mflr     r0
//   0x801402f8: lis      r3, -0x7fcd
//   0x801402fc: stw      r0, 0x14(r1)
//   0x80140300: addi     r3, r3, 0x1ef8
//   0x80140304: lbz      r0, 0x1978(r3)
//   0x80140308: cmplwi   r0, 3
//   0x8014030c: bne      0x80140320
//   0x80140310: li       r3, 1
//   0x80140314: bl       0x80146188
//   0x80140318: li       r3, 1
//   0x8014031c: bl       0x801461fc
//   0x80140320: lwz      r0, 0x14(r1)
//   0x80140324: mtlr     r0
//   0x80140328: addi     r1, r1, 0x10
//   0x8014032c: blr      
//

// TODO: Full decompilation requires Ghidra
