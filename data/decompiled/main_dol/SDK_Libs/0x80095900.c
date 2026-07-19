// Function at 0x80095900
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80095900: stwu     r1, -0x20(r1)
//   0x80095904: mflr     r0
//   0x80095908: stw      r0, 0x24(r1)
//   0x8009590c: stw      r31, 0x1c(r1)
//   0x80095910: mr       r31, r5
//   0x80095914: stw      r30, 0x18(r1)
//   0x80095918: mr       r30, r4
//   0x8009591c: stw      r29, 0x14(r1)
//   0x80095920: mr       r29, r3
//   0x80095924: bl       0x801a650c
//   0x80095928: lwz      r5, 0(r29)
//   0x8009592c: add      r4, r30, r31
//   0x80095930: b        0x8009595c
//   0x80095934: nop      
//   0x80095938: cmplw    r30, r5
//   0x8009593c: bgt      0x80095954
//   0x80095940: cmplw    r5, r4
//   0x80095944: bge      0x80095954
//   0x80095948: lwz      r0, 0(r5)
//   0x8009594c: stw      r0, 0(r29)
//

// TODO: Full decompilation requires Ghidra
