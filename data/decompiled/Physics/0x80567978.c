// GHIRDA Auto-Decompiled
// Address: 0x80567978 (section offset: 0x0550dc)
// Size: 88 bytes, 22 instructions
// Module: StaticR.rel | Class: Physics

void sub_80567978(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    *(uint32_t*)(8(r1)) = r30; // stw
    /* li r30, 0 */ // 0x3bc00000
    goto label_0x055104;
    uint32_t r3 = *(uint32_t*)(0x10(r3)); // lwz
    // Call 0x0005646c
    int var_1 = sub_0x0005646c(...);
    r4 = r30; // mr
    r3 = r31 + 0; // addi
    // Call 0x00053358
    int var_2 = sub_0x00053358(...);
    // Compare r3 cmpwi 0
    r30 = r3; // mr
    while (/* bne 0x550fc */) {
        uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
        uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
        uint32_t r30 = *(uint32_t*)(8(r1)); // lwz
        /* mtlr r0 */ // SPR operation
        r1 = r1 + 0x10; // addi
        // Restore stack (addi r1, r1, 0x10)
        // Restore LR (lwz r0, N(r1); mtlr r0)
        return;
    }
}
