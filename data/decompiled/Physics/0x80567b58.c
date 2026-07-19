// GHIRDA Auto-Decompiled
// Address: 0x80567b58 (section offset: 0x0552bc)
// Size: 84 bytes, 21 instructions
// Module: StaticR.rel | Class: Physics

void sub_80567b58(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    *(uint32_t*)(4(r3)) = r4; // stw
    /* slwi r3, r4, 2 */ // 0x5483103a
    // Call 0x00053358
    int var_1 = sub_0x00053358(...);
    *(uint32_t*)(8(r31)) = r3; // stw
    r3 = r31; // mr
    /* li r4, 0 */ // 0x38800000
    uint32_t r12 = *(uint32_t*)(0(r31)); // lwz
    uint32_t r12 = *(uint32_t*)(0x14(r12)); // lwz
    /* mtctr r12 */ // SPR operation
    /* bctrl  */ // indirect call/branch
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    /* mtlr r0 */ // SPR operation
    r1 = r1 + 0x10; // addi
    // Restore stack (addi r1, r1, 0x10)
    // Restore LR (lwz r0, N(r1); mtlr r0)
    return;
    // Restore stack (addi r1, r1, 0x10)
    // Restore LR (lwz r0, N(r1); mtlr r0)
    return;
}
