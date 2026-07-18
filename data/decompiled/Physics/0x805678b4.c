// GHIRDA Auto-Decompiled
// Address: 0x805678b4 (section offset: 0x055018)
// Size: 108 bytes, 27 instructions
// Module: StaticR.rel | Class: Physics

void sub_805678b4(void* arg0) {
    // Allocate stack frame: 0x20 bytes
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    *(uint32_t*)(0x18(r1)) = r30; // stw
    /* li r30, 0 */ // 0x3bc00000
    *(uint32_t*)(0x14(r1)) = r29; // stw
    /* li r29, 3 */ // 0x3ba00003
    goto label_0x05504c;
    uint32_t r3 = *(uint32_t*)(0x10(r3)); // lwz
    // Call 0x000565a0
    int var_1 = sub_0x000565a0(...);
    r29 = r3; // mr
    r4 = r30; // mr
    r3 = r31 + 0; // addi
    // Call 0x00053358
    int var_2 = sub_0x00053358(...);
    // Compare r3 cmpwi 0
    r30 = r3; // mr
    while (/* bne 0x55040 */) {
        uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
        r3 = r29; // mr
        uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
        uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
        uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
        /* mtlr r0 */ // SPR operation
        r1 = r1 + 0x20; // addi
        // Restore stack (addi r1, r1, 0x20)
        // Restore LR (lwz r0, N(r1); mtlr r0)
        return;
    }
}
