// Function at 0x80124190
// Size: 168 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x2e0 bytes
//
// Disassembly (first 20 instructions):
//   0x80124190: stwu     r1, -0x2e0(r1)
//   0x80124194: mflr     r0
//   0x80124198: lis      r6, -0x3400
//   0x8012419c: stw      r0, 0x2e4(r1)
//   0x801241a0: li       r0, -0xa1
//   0x801241a4: addi     r3, r1, 8
//   0x801241a8: stw      r31, 0x2dc(r1)
//   0x801241ac: mr       r31, r4
//   0x801241b0: lhz      r5, 0x500a(r6)
//   0x801241b4: and      r0, r5, r0
//   0x801241b8: ori      r0, r0, 8
//   0x801241bc: sth      r0, 0x500a(r6)
//   0x801241c0: bl       0x801a1ff8
//   0x801241c4: addi     r3, r1, 8
//   0x801241c8: bl       0x801a1dd0
//   0x801241cc: lwz      r3, -0x6780(r13)
//   0x801241d0: cmpwi    r3, 0
//   0x801241d4: beq      0x80124214
//   0x801241d8: lwz      r0, -0x67b4(r13)
//   0x801241dc: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
