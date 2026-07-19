// Function at 0x80104504
// Size: 164 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80104504: stwu     r1, -0x10(r1)
//   0x80104508: mflr     r0
//   0x8010450c: li       r7, 0
//   0x80104510: stw      r0, 0x14(r1)
//   0x80104514: stw      r31, 0xc(r1)
//   0x80104518: mr       r31, r4
//   0x8010451c: lwz      r0, 0(r4)
//   0x80104520: cmplwi   r0, 6
//   0x80104524: bgt      0x80104584
//   0x80104528: lis      r6, -0x7fd9
//   0x8010452c: slwi     r0, r0, 2
//   0x80104530: addi     r6, r6, 0x7904
//   0x80104534: lwzx     r6, r6, r0
//   0x80104538: mtctr    r6
//   0x8010453c: bctr     
//   0x80104540: bl       0x8010095c
//   0x80104544: mr       r7, r3
//   0x80104548: b        0x80104584
//   0x8010454c: bl       0x80105e5c
//   0x80104550: mr       r7, r3
//

// TODO: Full decompilation requires Ghidra
