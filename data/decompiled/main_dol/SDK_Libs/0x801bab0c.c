// Function at 0x801bab0c
// Size: 156 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801bab0c: stwu     r1, -0x10(r1)
//   0x801bab10: mflr     r0
//   0x801bab14: stw      r0, 0x14(r1)
//   0x801bab18: stw      r31, 0xc(r1)
//   0x801bab1c: bl       0x801a650c
//   0x801bab20: lis      r5, -0x3400
//   0x801bab24: lhz      r0, 0x202c(r5)
//   0x801bab28: clrlwi   r6, r0, 0x15
//   0x801bab2c: lhz      r4, 0x202e(r5)
//   0x801bab30: mr       r7, r6
//   0x801bab34: lhz      r0, 0x202c(r5)
//   0x801bab38: clrlwi   r8, r4, 0x15
//   0x801bab3c: clrlwi   r6, r0, 0x15
//   0x801bab40: cmplw    r7, r6
//   0x801bab44: bne      0x801bab2c
//   0x801bab48: lwz      r7, -0x6054(r13)
//   0x801bab4c: addi     r4, r6, -1
//   0x801bab50: slwi     r6, r4, 1
//   0x801bab54: addi     r5, r8, -1
//   0x801bab58: lhz      r0, 0x1a(r7)
//

// TODO: Full decompilation requires Ghidra
