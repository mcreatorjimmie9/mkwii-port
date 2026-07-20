// Function at 0x801814fc
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801814fc: stwu     r1, -0x10(r1)
//   0x80181500: mflr     r0
//   0x80181504: cmpwi    r3, 0
//   0x80181508: stw      r0, 0x14(r1)
//   0x8018150c: stw      r31, 0xc(r1)
//   0x80181510: mr       r31, r3
//   0x80181514: beq      0x80181524
//   0x80181518: cmpwi    r4, 0
//   0x8018151c: ble      0x80181524
//   0x80181520: bl       0x80229a90
//   0x80181524: mr       r3, r31
//   0x80181528: lwz      r31, 0xc(r1)
//   0x8018152c: lwz      r0, 0x14(r1)
//   0x80181530: mtlr     r0
//   0x80181534: addi     r1, r1, 0x10
//   0x80181538: blr      
//

// TODO: Full decompilation requires Ghidra
