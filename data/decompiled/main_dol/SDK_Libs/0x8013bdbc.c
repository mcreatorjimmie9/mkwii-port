// Function at 0x8013bdbc
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8013bdbc: stwu     r1, -0x10(r1)
//   0x8013bdc0: mflr     r0
//   0x8013bdc4: cmpwi    r3, 0
//   0x8013bdc8: stw      r0, 0x14(r1)
//   0x8013bdcc: stw      r31, 0xc(r1)
//   0x8013bdd0: stw      r30, 8(r1)
//   0x8013bdd4: mr       r30, r3
//   0x8013bdd8: beq      0x8013bdec
//   0x8013bddc: cmplwi   r3, 1
//   0x8013bde0: beq      0x8013bdec
//   0x8013bde4: li       r3, 5
//   0x8013bde8: b        0x8013be54
//   0x8013bdec: lis      r31, -0x7fcd
//   0x8013bdf0: addi     r31, r31, 0x1ef8
//   0x8013bdf4: lbz      r0, 0x643(r31)
//   0x8013bdf8: rlwinm.  r0, r0, 0, 0x1a, 0x1a
//   0x8013bdfc: bne      0x8013be08
//   0x8013be00: li       r3, 4
//   0x8013be04: b        0x8013be54
//   0x8013be08: lhz      r0, 0x16a6(r31)
//

// TODO: Full decompilation requires Ghidra
