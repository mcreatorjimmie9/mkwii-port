// sub_805a6418
// Address: 0x805a6418
// Total size: 128 bytes (code: 72, data: 56)
// Instructions: 18
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a6418(void) {
    // stack: 0x10
    // 5 FP ops

    // prologue: sp -= 0x10
    // save lr
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    /* li r31, 0 */
    *(u32*)(8(r1)) = r30
    r30 = r3
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x14(r12))
    ctr = r12
    call_indirect(ctr)
    /* lis r4, 0 */
    r3 = *(u32*)(0(r3))
    f1 = *(f32*)(0xc(r30))
    f0 = *(f32*)(0(r4))
    f2 = *(f32*)(0x44(r3))
    f0 = f1 + f0
    *(f32*)(0xc(r30)) = f0
}

// === Raw Disassembly ===
    /* 0x805a6418 */ stwu r1, -0x10(r1)
    /* 0x805a641c */ mflr r0
    /* 0x805a6420 */ stw r0, 0x14(r1)
    /* 0x805a6424 */ stw r31, 0xc(r1)
    /* 0x805a6428 */ li r31, 0
    /* 0x805a642c */ stw r30, 8(r1)
    /* 0x805a6430 */ mr r30, r3
    /* 0x805a6434 */ lwz r12, 0(r3)
    /* 0x805a6438 */ lwz r12, 0x14(r12)
    /* 0x805a643c */ mtctr r12
    /* 0x805a6440 */ bctrl
    /* 0x805a6444 */ lis r4, 0
    /* 0x805a6448 */ lwz r3, 0(r3)
    /* 0x805a644c */ lfs f1, 0xc(r30)
    /* 0x805a6450 */ lfs f0, 0(r4)
    /* 0x805a6454 */ lfs f2, 0x44(r3)
    /* 0x805a6458 */ fadds f0, f1, f0
    /* 0x805a645c */ stfs f0, 0xc(r30)

// === Embedded Data (56 bytes at 0x805a6460) ===
    /* 0x805a6460 */ 0xfc001040  // -2.65977e+36f
    /* 0x805a6464 */ 0x4c411382  // 5.06138e+07f
    /* 0x805a6468 */ 0x40820014  // 4.06251f
    /* 0x805a646c */ 0x3c600000  // 0.0136719f
    /* 0x805a6470 */ 0x3be00001  // 0.00683594f
    /* 0x805a6474 */ 0xc0030000  // -2.04688f
    /* 0x805a6478 */ 0xd01e000c  // -1.06032e+10f
    /* 0x805a647c */ 0x7fe3fb78  // nanf
    /* 0x805a6480 */ 0x83e1000c  // -1.32243e-36f
    /* 0x805a6484 */ 0x83c10008  // -1.13435e-36f
    /* 0x805a6488 */ 0x80010014  // -9.18635e-41f
    /* 0x805a648c */ 0x7c0803a6  // 2.82491e+36f
    /* 0x805a6490 */ 0x38210010  // 3.83854e-05f
    /* 0x805a6494 */ 0x4e800020  // 1.07375e+09f
