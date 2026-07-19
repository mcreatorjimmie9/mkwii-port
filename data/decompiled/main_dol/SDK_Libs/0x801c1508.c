// Function at 0x801c1508
// Size: 196 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801c1508: stwu     r1, -0x10(r1)
//   0x801c150c: mflr     r0
//   0x801c1510: lis      r4, -0x7fcb
//   0x801c1514: stw      r0, 0x14(r1)
//   0x801c1518: slwi     r0, r3, 2
//   0x801c151c: addi     r4, r4, -0x3a50
//   0x801c1520: stw      r31, 0xc(r1)
//   0x801c1524: lwzx     r31, r4, r0
//   0x801c1528: bl       0x801a650c
//   0x801c152c: lbz      r0, 0x8c8(r31)
//   0x801c1530: cntlzw   r0, r0
//   0x801c1534: rlwinm   r0, r0, 0x1b, 0x18, 0x1f
//   0x801c1538: mulli    r0, r0, 0x60
//   0x801c153c: add      r6, r31, r0
//   0x801c1540: lhz      r4, 0xa0(r6)
//   0x801c1544: clrlwi   r0, r4, 0x1e
//   0x801c1548: cmpwi    r0, 3
//   0x801c154c: bne      0x801c1558
//   0x801c1550: rlwinm   r0, r4, 0, 0x1f, 0x1d
//   0x801c1554: sth      r0, 0xa0(r6)
//

// TODO: Full decompilation requires Ghidra
