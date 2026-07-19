// Function at 0x801a950c
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801a950c: stwu     r1, -0x10(r1)
//   0x801a9510: mflr     r0
//   0x801a9514: stw      r0, 0x14(r1)
//   0x801a9518: stw      r31, 0xc(r1)
//   0x801a951c: stw      r30, 8(r1)
//   0x801a9520: mr       r30, r3
//   0x801a9524: bl       0x801a650c
//   0x801a9528: cmpwi    r30, 0
//   0x801a952c: lwz      r31, -0x7120(r13)
//   0x801a9530: beq      0x801a9538
//   0x801a9534: b        0x801a9540
//   0x801a9538: lis      r30, -0x7fe5
//   0x801a953c: addi     r30, r30, -0x6af8
//   0x801a9540: stw      r30, -0x7120(r13)
//   0x801a9544: bl       0x801a6534
//   0x801a9548: lis      r3, -0x7fe5
//   0x801a954c: addi     r3, r3, -0x6af8
//   0x801a9550: cmplw    r31, r3
//   0x801a9554: bne      0x801a9560
//   0x801a9558: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
