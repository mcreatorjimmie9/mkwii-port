// Function at 0x80050900
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80050900: stwu     r1, -0x10(r1)
//   0x80050904: mflr     r0
//   0x80050908: cmplwi   r4, 8
//   0x8005090c: stw      r0, 0x14(r1)
//   0x80050910: stw      r31, 0xc(r1)
//   0x80050914: bge      0x80050964
//   0x80050918: mulli    r0, r4, 0x34
//   0x8005091c: lwz      r3, 0(r3)
//   0x80050920: cmpwi    r5, 0
//   0x80050924: add      r31, r3, r0
//   0x80050928: beq      0x80050948
//   0x8005092c: mr       r3, r5
//   0x80050930: addi     r4, r31, 0xac
//   0x80050934: bl       0x80199c90
//   0x80050938: lbz      r0, 0xab(r31)
//   0x8005093c: rlwinm   r0, r0, 0, 0x18, 0x1e
//   0x80050940: stb      r0, 0xab(r31)
//   0x80050944: b        0x8005095c
//   0x80050948: addi     r3, r31, 0xac
//   0x8005094c: bl       0x80199c64
//

// TODO: Full decompilation requires Ghidra
