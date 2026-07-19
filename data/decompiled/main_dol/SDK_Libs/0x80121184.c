// Function at 0x80121184
// Size: 432 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80121184: stwu     r1, -0x40(r1)
//   0x80121188: mflr     r0
//   0x8012118c: stw      r0, 0x44(r1)
//   0x80121190: addi     r11, r1, 0x40
//   0x80121194: bl       0x80020a34
//   0x80121198: cmpwi    r5, 5
//   0x8012119c: mr       r24, r3
//   0x801211a0: mr       r25, r4
//   0x801211a4: mr       r26, r5
//   0x801211a8: bge      0x801211b4
//   0x801211ac: li       r3, 4
//   0x801211b0: b        0x8012131c
//   0x801211b4: blt      0x801211fc
//   0x801211b8: lbz      r31, 0(r4)
//   0x801211bc: addi     r3, r1, 0x10
//   0x801211c0: li       r5, 4
//   0x801211c4: addi     r4, r4, 1
//   0x801211c8: bl       0x80005f34
//   0x801211cc: rlwinm.  r0, r31, 0, 0x1b, 0x1b
//   0x801211d0: beq      0x801211f4
//

// TODO: Full decompilation requires Ghidra
