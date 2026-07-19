// Function at 0x801f134c
// Size: 500 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801f134c: stwu     r1, -0x10(r1)
//   0x801f1350: mflr     r0
//   0x801f1354: stw      r0, 0x14(r1)
//   0x801f1358: stw      r31, 0xc(r1)
//   0x801f135c: mr       r31, r4
//   0x801f1360: stw      r30, 8(r1)
//   0x801f1364: mr       r30, r3
//   0x801f1368: lhz      r0, 0x12(r4)
//   0x801f136c: cmpwi    r0, 0
//   0x801f1370: beq      0x801f1380
//   0x801f1374: lwz      r0, 0(r4)
//   0x801f1378: rlwinm.  r0, r0, 0, 0x1a, 0x1a
//   0x801f137c: beq      0x801f1468
//   0x801f1380: lwz      r4, 4(r4)
//   0x801f1384: mr       r3, r30
//   0x801f1388: lwz      r12, 8(r4)
//   0x801f138c: mtctr    r12
//   0x801f1390: bctrl    
//   0x801f1394: cmpwi    r3, 0
//   0x801f1398: mr       r4, r3
//

// TODO: Full decompilation requires Ghidra
