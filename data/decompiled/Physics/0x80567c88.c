// GHIRDA Auto-Decompiled
// Address: 0x80567c88 (section offset: 0x0553ec)
// Size: 120 bytes, 30 instructions
// Module: StaticR.rel | Class: Physics

void sub_80567c88(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    // Compare r5 cmpwi 0
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r5; // mr
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    *(uint32_t*)(4(r3)) = r4; // stw
    if (/* bne 0x5541c */) {
    // branch to 0x05541c
        r4 = 0x0 << 16; // lis
        uint32_t r31 = *(uint32_t*)(0(r4)); // lwz
        uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
        r4 = r31; // mr
        /* li r5, 4 */ // 0x38a00004
        /* slwi r3, r0, 2 */ // 0x5403103a
        // Call 0x00053358
        int var_1 = sub_0x00053358(...);
        *(uint32_t*)(8(r30)) = r3; // stw
        r3 = r30; // mr
        r4 = r31; // mr
        uint32_t r12 = *(uint32_t*)(0(r30)); // lwz
        uint32_t r12 = *(uint32_t*)(0x14(r12)); // lwz
        /* mtctr r12 */ // SPR operation
        /* bctrl  */ // indirect call/branch
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
