// Function at 0x801ab0d0
// Size: 1280 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x801ab0d0: stwu     r1, -0x40(r1)
//   0x801ab0d4: mflr     r0
//   0x801ab0d8: stw      r0, 0x44(r1)
//   0x801ab0dc: addi     r11, r1, 0x40
//   0x801ab0e0: bl       0x80020a24
//   0x801ab0e4: lis      r4, 0x2aab
//   0x801ab0e8: lwz      r5, 0x10(r3)
//   0x801ab0ec: addi     r0, r4, -0x5555
//   0x801ab0f0: mulhw    r0, r0, r5
//   0x801ab0f4: srawi    r0, r0, 1
//   0x801ab0f8: srwi     r4, r0, 0x1f
//   0x801ab0fc: add      r6, r0, r4
//   0x801ab100: mulli    r0, r6, 0xc
//   0x801ab104: subf.    r4, r0, r5
//   0x801ab108: bge      0x801ab114
//   0x801ab10c: addi     r4, r4, 0xc
//   0x801ab110: addi     r6, r6, -1
//   0x801ab114: lwz      r0, 0x14(r3)
//   0x801ab118: add      r9, r0, r6
//   0x801ab11c: cmpwi    r9, 1
//

// TODO: Full decompilation requires Ghidra
