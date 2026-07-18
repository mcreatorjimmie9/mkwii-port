// GHIRDA Auto-Decompiled
// Address: 0x80567bac (section offset: 0x055310)
// Size: 100 bytes, 25 instructions
// Module: StaticR.rel | Class: Physics

void sub_80567bac(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    r5 = 0x0 << 16; // lis
    r4 = 0x0 << 16; // lis
    r5 = r5 + 0; // addi
    r4 = r4 + 0; // addi
    *(uint32_t*)(0xc(r1)) = r31; // stw
    /* li r31, 0 */ // 0x3be00000
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = 0x0 << 16; // lis
    r30 = r30 + 0; // addi
    r3 = r30 + 0x38; // addi
    *(uint32_t*)(0x38(r30)) = r5; // stw
    r5 = r30 + 0x2c; // addi
    *(uint32_t*)(4(r3)) = r31; // stw
    *(uint32_t*)(8(r3)) = r31; // stw
    // Call 0x0004eecc
    int var_1 = sub_0x0004eecc(...);
    *(uint32_t*)(0x44(r30)) = r31; // stw
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(8(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR operation
    r1 = r1 + 0x10; // addi
    // Restore stack (addi r1, r1, 0x10)
    // Restore LR (lwz r0, N(r1); mtlr r0)
    return;
}
