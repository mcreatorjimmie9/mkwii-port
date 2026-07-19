// Function at 0x80148504
// Size: 332 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80148504: stwu     r1, -0x20(r1)
//   0x80148508: mflr     r0
//   0x8014850c: stw      r0, 0x24(r1)
//   0x80148510: stw      r31, 0x1c(r1)
//   0x80148514: mr       r31, r3
//   0x80148518: stw      r30, 0x18(r1)
//   0x8014851c: stw      r29, 0x14(r1)
//   0x80148520: lis      r29, -0x7fcd
//   0x80148524: addi     r29, r29, 0x4bb8
//   0x80148528: stw      r28, 0x10(r1)
//   0x8014852c: lwz      r0, 0x10(r3)
//   0x80148530: clrlwi   r0, r0, 0x18
//   0x80148534: mulli    r0, r0, 0x34
//   0x80148538: add      r28, r29, r0
//   0x8014853c: lbz      r0, 0x10(r28)
//   0x80148540: cmpwi    r0, 0
//   0x80148544: bne      0x801485e8
//   0x80148548: li       r5, 0
//   0x8014854c: li       r0, 0x100
//   0x80148550: sth      r5, 0x14(r28)
//

// TODO: Full decompilation requires Ghidra
