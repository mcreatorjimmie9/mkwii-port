// Function at 0x80243014
// Size: 100 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80243014: stwu     r1, -0x10(r1)
//   0x80243018: mflr     r0
//   0x8024301c: stw      r0, 0x14(r1)
//   0x80243020: bl       0x801bac38
//   0x80243024: addi     r0, r3, -1
//   0x80243028: cmplwi   r0, 1
//   0x8024302c: bgt      0x80243038
//   0x80243030: lfs      f2, -0x5ec8(r2)
//   0x80243034: b        0x8024303c
//   0x80243038: lfs      f2, -0x5ec4(r2)
//   0x8024303c: lis      r3, -0x8000
//   0x80243040: lis      r0, 0x4330
//   0x80243044: lwz      r3, 0xf8(r3)
//   0x80243048: stw      r0, 8(r1)
//   0x8024304c: srwi     r0, r3, 2
//   0x80243050: lfd      f1, -0x5ed0(r2)
//   0x80243054: stw      r0, 0xc(r1)
//   0x80243058: lfd      f0, 8(r1)
//   0x8024305c: fsubs    f0, f0, f1
//   0x80243060: fdivs    f1, f0, f2
//

// TODO: Full decompilation requires Ghidra
