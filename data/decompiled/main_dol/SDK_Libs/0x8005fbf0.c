// Function at 0x8005fbf0
// Size: 352 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x90 bytes
//
// Disassembly (first 20 instructions):
//   0x8005fbf0: stwu     r1, -0x90(r1)
//   0x8005fbf4: mflr     r0
//   0x8005fbf8: stw      r0, 0x94(r1)
//   0x8005fbfc: stw      r31, 0x8c(r1)
//   0x8005fc00: stw      r30, 0x88(r1)
//   0x8005fc04: mr       r30, r4
//   0x8005fc08: addi     r4, r1, 0x4c
//   0x8005fc0c: lwz      r12, 0(r3)
//   0x8005fc10: lwz      r12, 0x8c(r12)
//   0x8005fc14: mtctr    r12
//   0x8005fc18: bctrl    
//   0x8005fc1c: lwz      r0, 0(r3)
//   0x8005fc20: mr       r31, r3
//   0x8005fc24: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x8005fc28: bne      0x8005fc34
//   0x8005fc2c: li       r3, 0
//   0x8005fc30: b        0x8005fd2c
//   0x8005fc34: lwz      r0, 4(r3)
//   0x8005fc38: cmpwi    r0, 0
//   0x8005fc3c: beq      0x8005fc4c
//

// TODO: Full decompilation requires Ghidra
