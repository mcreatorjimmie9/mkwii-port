// GHIRDA Auto-Decompiled
// Address: 0x80567594 (section offset: 0x054cf8)
// Size: 100 bytes, 25 instructions
// Module: StaticR.rel | Class: Physics

void sub_80567594(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
    // Compare r3 cmpwi 0
    if (/* beq 0x54d3c */) {
    // branch to 0x054d3c
        // Call 0x00053544
        int var_1 = sub_0x00053544(...);
        uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
        // Call 0x000536c0
        int var_2 = sub_0x000536c0(...);
        uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
        uint32_t r3 = *(uint32_t*)(0x34(r3)); // lwz
        uint32_t r12 = *(uint32_t*)(0x18(r3)); // lwz
        uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
        /* mtctr r12 */ // SPR operation
        /* bctrl  */ // indirect call/branch
        r3 = 0x0 << 16; // lis
        /* li r0, 1 */ // 0x38000001
        *(uint32_t*)(0(r3)) = r0; // stw
        uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
        uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
        /* mtlr r0 */ // SPR operation
        r1 = r1 + 0x10; // addi
        // Restore stack (addi r1, r1, 0x10)
        // Restore LR (lwz r0, N(r1); mtlr r0)
        return;
    }
}
