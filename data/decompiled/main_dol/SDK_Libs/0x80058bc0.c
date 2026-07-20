// Function at 0x80058bc0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80058bc0: stwu     r1, -0x10(r1)
//   0x80058bc4: mflr     r0
//   0x80058bc8: stw      r0, 0x14(r1)
//   0x80058bcc: stw      r31, 0xc(r1)
//   0x80058bd0: li       r31, 0
//   0x80058bd4: stw      r30, 8(r1)
//   0x80058bd8: mr       r30, r3
//   0x80058bdc: b        0x80058bfc
//   0x80058be0: lwz      r12, 0(r30)
//   0x80058be4: mr       r3, r30
//   0x80058be8: mr       r4, r31
//   0x80058bec: lwz      r12, 0x40(r12)
//   0x80058bf0: mtctr    r12
//   0x80058bf4: bctrl    
//   0x80058bf8: addi     r31, r31, 1
//   0x80058bfc: lwz      r0, 0x18(r30)
//   0x80058c00: cmpw     r31, r0
//   0x80058c04: blt      0x80058be0
//   0x80058c08: lwz      r0, 0x14(r1)
//   0x80058c0c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
