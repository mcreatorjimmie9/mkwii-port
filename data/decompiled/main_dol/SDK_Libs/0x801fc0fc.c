// Function at 0x801fc0fc
// Size: 60 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801fc0fc: stwu     r1, -0x10(r1)
//   0x801fc100: mflr     r0
//   0x801fc104: li       r5, 0
//   0x801fc108: stw      r0, 0x14(r1)
//   0x801fc10c: lhz      r0, 0(r4)
//   0x801fc110: rlwinm   r0, r0, 0, 0x1e, 0x1e
//   0x801fc114: cmpwi    r0, 2
//   0x801fc118: bne      0x801fc124
//   0x801fc11c: bl       0x801f5ddc
//   0x801fc120: mr       r5, r3
//   0x801fc124: lwz      r0, 0x14(r1)
//   0x801fc128: mr       r3, r5
//   0x801fc12c: mtlr     r0
//   0x801fc130: addi     r1, r1, 0x10
//   0x801fc134: blr      
//

// TODO: Full decompilation requires Ghidra
