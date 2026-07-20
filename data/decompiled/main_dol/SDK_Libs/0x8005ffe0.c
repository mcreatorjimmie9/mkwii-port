// Function at 0x8005ffe0
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005ffe0: stwu     r1, -0x10(r1)
//   0x8005ffe4: mflr     r0
//   0x8005ffe8: addi     r3, r3, 0x20
//   0x8005ffec: stw      r0, 0x14(r1)
//   0x8005fff0: bl       0x80056a50
//   0x8005fff4: cmpwi    r3, 0
//   0x8005fff8: li       r4, 0
//   0x8005fffc: beq      0x80060010
//   0x80060000: lwz      r0, 0x1c(r3)
//   0x80060004: rlwinm.  r0, r0, 0, 0x1c, 0x1c
//   0x80060008: beq      0x80060010
//   0x8006000c: li       r4, 1
//   0x80060010: lwz      r0, 0x14(r1)
//   0x80060014: mr       r3, r4
//   0x80060018: mtlr     r0
//   0x8006001c: addi     r1, r1, 0x10
//   0x80060020: blr      
//

// TODO: Full decompilation requires Ghidra
