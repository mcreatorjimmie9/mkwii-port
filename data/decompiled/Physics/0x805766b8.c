// GHIRDA Auto-Decompiled
// Address: 0x805766b8 (section offset: 0x063e1c)
// Size: 160 bytes, 40 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrick_end(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    uint32_t r4 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
    /* rlwinm. r0, r0, 0, 9, 9 */ // 0x54000253
    if (/* beq 0x63e50 */) {
    // branch to 0x063e50
        // Call 0x0005db50
        int var_1 = sub_0x0005db50(...);
        r4 = r31 + 0x3c; // addi
        // Call 0x0006a074
        int var_2 = sub_0x0006a074(...);
        uint32_t r5 = *(uint32_t*)(0(r31)); // lwz
        /* li r0, 0 */ // 0x38000000
        r3 = r31; // mr
        /* li r4, 5 */ // 0x38800005
        uint32_t r8 = *(uint32_t*)(4(r5)); // lwz
        /* li r5, 0 */ // 0x38a00000
        /* li r6, 1 */ // 0x38c00001
        uint32_t r7 = *(uint32_t*)(8(r8)); // lwz
        r7 = ROTATE_AND_MASK(r7, 0); // rlwinm
        *(uint32_t*)(8(r8)) = r7; // stw
        uint32_t r7 = *(uint32_t*)(0(r31)); // lwz
        uint32_t r8 = *(uint32_t*)(4(r7)); // lwz
        uint32_t r7 = *(uint32_t*)(8(r8)); // lwz
        r7 = ROTATE_AND_MASK(r7, 0); // rlwinm
        *(uint32_t*)(8(r8)) = r7; // stw
        *(uint32_t*)(0x3a(r31)) = r0; // stb
        // Call 0x0005e7f4
        int var_3 = sub_0x0005e7f4(...);
        uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
        uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
        /* mtlr r0 */ // SPR operation
        r1 = r1 + 0x10; // addi
        // Restore stack (addi r1, r1, 0x10)
        // Restore LR (lwz r0, N(r1); mtlr r0)
        return;
        // Compare r4 cmpwi 0
        /* li r3, 0 */ // 0x38600000
        if (/* blelr  */) {
        // branch to 0x063ed0
            /* li r3, 1 */ // 0x38600001
            // Restore stack (addi r1, r1, 0x10)
            // Restore LR (lwz r0, N(r1); mtlr r0)
            return;
        }
    }
}
