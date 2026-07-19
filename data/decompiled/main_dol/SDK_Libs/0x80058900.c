// Function at 0x80058900
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80058900: stwu     r1, -0x10(r1)
//   0x80058904: mflr     r0
//   0x80058908: cmpwi    r3, 0
//   0x8005890c: stw      r0, 0x14(r1)
//   0x80058910: stw      r31, 0xc(r1)
//   0x80058914: mr       r31, r3
//   0x80058918: beq      0x80058928
//   0x8005891c: beq      0x80058928
//   0x80058920: li       r4, 0
//   0x80058924: bl       0x800602c0
//   0x80058928: mr       r3, r31
//   0x8005892c: lwz      r31, 0xc(r1)
//   0x80058930: lwz      r0, 0x14(r1)
//   0x80058934: mtlr     r0
//   0x80058938: addi     r1, r1, 0x10
//   0x8005893c: blr      
//

// TODO: Full decompilation requires Ghidra
