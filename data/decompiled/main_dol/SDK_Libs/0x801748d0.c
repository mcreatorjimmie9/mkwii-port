// Function at 0x801748d0
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801748d0: stwu     r1, -0x10(r1)
//   0x801748d4: mflr     r0
//   0x801748d8: stw      r0, 0x14(r1)
//   0x801748dc: stw      r31, 0xc(r1)
//   0x801748e0: li       r31, 0
//   0x801748e4: stw      r30, 8(r1)
//   0x801748e8: mr       r30, r3
//   0x801748ec: b        0x80174914
//   0x801748f0: addi     r3, r30, 8
//   0x801748f4: clrlwi   r4, r31, 0x10
//   0x801748f8: bl       0x8018cb3c
//   0x801748fc: lwz      r3, 4(r3)
//   0x80174900: lwz      r12, 0(r3)
//   0x80174904: lwz      r12, 0x18(r12)
//   0x80174908: mtctr    r12
//   0x8017490c: bctrl    
//   0x80174910: addi     r31, r31, 1
//   0x80174914: lhz      r0, 0x10(r30)
//   0x80174918: cmplw    r31, r0
//   0x8017491c: blt      0x801748f0
//

// TODO: Full decompilation requires Ghidra
