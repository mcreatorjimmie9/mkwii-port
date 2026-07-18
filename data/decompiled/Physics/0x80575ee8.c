// GHIRDA Auto-Decompiled
// Address: 0x80575ee8 (section offset: 0x06364c)
// Size: 304 bytes, 76 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrick_start(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r4; // mr
    uint32_t r12 = *(uint32_t*)(0xc(r3)); // lwz
    uint32_t r4 = *(uint32_t*)(0x14(r3)); // lwz
    uint32_t r12 = *(uint32_t*)(0x10(r12)); // lwz
    /* mtctr r12 */ // SPR operation
    /* bctrl  */ // indirect call/branch
    uint32_t r5 = *(uint32_t*)(0x14(r31)); // lwz
    r3 = r31; // mr
    r4 = r30; // mr
    // Call 0x00063994
    int var_1 = sub_0x00063994(...);
    r3 = r31; // mr
    // Call 0x0005e1e4
    int var_2 = sub_0x0005e1e4(...);
    uint32_t r12 = *(uint32_t*)(0x20(r3)); // lwz
    uint8_t r5 = *(uint8_t*)(0x18(r31)); // lbz
    uint32_t r12 = *(uint32_t*)(0x1c(r12)); // lwz
    r5 = sign_extend(r5); // extsb
    uint32_t r4 = *(uint32_t*)(0x14(r31)); // lwz
    /* mtctr r12 */ // SPR operation
    /* bctrl  */ // indirect call/branch
    r3 = r31; // mr
    /* li r4, 0xb */ // 0x3880000b
    // Call 0x0005df54
    int var_3 = sub_0x0005df54(...);
    uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
    /* li r3, 5 */ // 0x38600005
    /* li r0, 0 */ // 0x38000000
    uint32_t r5 = *(uint32_t*)(4(r4)); // lwz
    uint32_t r4 = *(uint32_t*)(8(r5)); // lwz
    r4 = r4 ori 0x40;
    *(uint32_t*)(8(r5)) = r4; // stw
    *(uint32_t*)(0x38(r31)) = r3; // sth
    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    *(uint32_t*)(0xa6(r3)) = r0; // sth
    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r4 = *(uint32_t*)(0x38(r3)); // lwz
    // Compare r4 cmpwi 0
    if (/* beq 0x63708 */) {
    // branch to 0x063708
        uint32_t r3 = *(uint32_t*)(0x10(r4)); // lwz
        r0 = r3 + 1; // addi
        *(uint32_t*)(0x10(r4)) = r0; // stw
        r3 = r31; // mr
        /* li r4, 3 */ // 0x38800003
        /* li r5, 0 */ // 0x38a00000
        /* li r6, 1 */ // 0x38c00001
        // Call 0x0005e7e8
        int var_4 = sub_0x0005e7e8(...);
        uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
        uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
        /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x5400077b
        if (/* beq 0x63764 */) {
        // branch to 0x063764
            uint32_t r0 = *(uint32_t*)(0x14(r31)); // lwz
            r3 = r31; // mr
            r30 = sign_extend(r0); // extsb
            // Call 0x0005ebe4
            int var_5 = sub_0x0005ebe4(...);
            *(uint32_t*)(0x54(r3)) = r30; // stb
            r3 = r31; // mr
            uint8_t r0 = *(uint8_t*)(0x18(r31)); // lbz
            r30 = sign_extend(r0); // extsb
            // Call 0x0005ebe4
            int var_6 = sub_0x0005ebe4(...);
            *(uint32_t*)(0x55(r3)) = r30; // stb
            r3 = r31; // mr
            /* li r4, 9 */ // 0x38800009
            // Call 0x0005ef98
            int var_7 = sub_0x0005ef98(...);
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
}
