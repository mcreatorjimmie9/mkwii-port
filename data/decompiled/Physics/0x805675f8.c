// GHIRDA Auto-Decompiled
// Address: 0x805675f8 (section offset: 0x054d5c)
// Size: 80 bytes, 20 instructions
// Module: StaticR.rel | Class: Physics

void sub_805675f8(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    r5 = 0x0 << 16; // lis
    r0 = r4 * 0xc; // mulli
    r5 = r5 + 0; // addi
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r4; // mr
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    r4 = r30; // mr
    r3 = r5 + r0; // add
    // Call 0x00053358
    int var_1 = sub_0x00053358(...);
    *(uint32_t*)(0x14(r30)) = r31; // stw
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(8(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR operation
    r1 = r1 + 0x10; // addi
    // Restore stack (addi r1, r1, 0x10)
    // Restore LR (lwz r0, N(r1); mtlr r0)
    return;
}
