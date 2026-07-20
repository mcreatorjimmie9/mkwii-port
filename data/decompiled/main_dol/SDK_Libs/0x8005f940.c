// Function at 0x8005f940
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005f940: stwu     r1, -0x20(r1)
//   0x8005f944: mflr     r0
//   0x8005f948: stw      r0, 0x24(r1)
//   0x8005f94c: stw      r31, 0x1c(r1)
//   0x8005f950: mr       r31, r3
//   0x8005f954: mr       r3, r4
//   0x8005f958: lwz      r12, 0(r4)
//   0x8005f95c: addi     r4, r1, 8
//   0x8005f960: lwz      r12, 0x80(r12)
//   0x8005f964: mtctr    r12
//   0x8005f968: bctrl    
//   0x8005f96c: lwz      r4, 0(r3)
//   0x8005f970: lwz      r3, 4(r3)
//   0x8005f974: clrlwi.  r0, r4, 0x1f
//   0x8005f978: bne      0x8005f984
//   0x8005f97c: li       r0, -0x100
//   0x8005f980: or       r3, r3, r0
//   0x8005f984: rlwinm.  r0, r4, 0, 0x1e, 0x1e
//   0x8005f988: bne      0x8005f990
//   0x8005f98c: ori      r3, r3, 0xff
//

// TODO: Full decompilation requires Ghidra
