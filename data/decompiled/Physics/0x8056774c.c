// GHIRDA Auto-Decompiled
// Address: 0x8056774c (section offset: 0x054eb0)
// Size: 128 bytes, 32 instructions
// Module: StaticR.rel | Class: Physics

void sub_8056774c(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    r5 = 0x0 << 16; // lis
    r5 = r5 + 0; // addi
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    r4 = r31; // mr
    r3 = r5 + 0xc; // addi
    // Call 0x00053358
    int var_1 = sub_0x00053358(...);
    /* li r0, 1 */ // 0x38000001
    *(uint32_t*)(0x14(r31)) = r0; // stw
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR operation
    r1 = r1 + 0x10; // addi
    // Restore stack (addi r1, r1, 0x10)
    // Restore LR (lwz r0, N(r1); mtlr r0)
    return;
    r0 = r4 * 0xc; // mulli
    r5 = 0x0 << 16; // lis
    r4 = r3; // mr
    r5 = r5 + 0; // addi
    r3 = r5 + r0; // add
    continue; // loop back to 0x053358
    r5 = 0x0 << 16; // lis
    r4 = r3; // mr
    r3 = r5 + 0; // addi
    continue; // loop back to 0x053358
    r5 = 0x0 << 16; // lis
    r4 = r3; // mr
    r5 = r5 + 0; // addi
    r3 = r5 + 0xc; // addi
    continue; // loop back to 0x053358
}
