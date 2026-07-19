// Function at 0x800776f0
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800776f0: stwu     r1, -0x10(r1)
//   0x800776f4: mflr     r0
//   0x800776f8: stw      r0, 0x14(r1)
//   0x800776fc: stw      r31, 0xc(r1)
//   0x80077700: mr       r31, r3
//   0x80077704: addi     r3, r3, 4
//   0x80077708: bl       0x8016fe80
//   0x8007770c: lwz      r0, 0(r31)
//   0x80077710: rlwinm   r0, r0, 0, 0x1f, 0x1d
//   0x80077714: ori      r0, r0, 1
//   0x80077718: stw      r0, 0(r31)
//   0x8007771c: lwz      r31, 0xc(r1)
//   0x80077720: lwz      r0, 0x14(r1)
//   0x80077724: mtlr     r0
//   0x80077728: addi     r1, r1, 0x10
//   0x8007772c: blr      
//

// TODO: Full decompilation requires Ghidra
