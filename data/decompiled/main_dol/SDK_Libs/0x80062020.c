// Function at 0x80062020
// Size: 624 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80062020: stwu     r1, -0x30(r1)
//   0x80062024: mflr     r0
//   0x80062028: stw      r0, 0x34(r1)
//   0x8006202c: addi     r11, r1, 0x30
//   0x80062030: bl       0x80020a34
//   0x80062034: lwz      r4, 0(r3)
//   0x80062038: neg      r0, r4
//   0x8006203c: or       r0, r0, r4
//   0x80062040: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x80062044: beq      0x80062270
//   0x80062048: lis      r3, -0x7fd5
//   0x8006204c: lis      r25, -0x7fd5
//   0x80062050: stw      r4, 8(r1)
//   0x80062054: addi     r31, r3, 0x3d40
//   0x80062058: addi     r26, r25, 0x3ccc
//   0x8006205c: li       r28, 0
//   0x80062060: li       r27, 0
//   0x80062064: li       r30, 1
//   0x80062068: mr       r4, r28
//   0x8006206c: addi     r3, r1, 8
//

// TODO: Full decompilation requires Ghidra
