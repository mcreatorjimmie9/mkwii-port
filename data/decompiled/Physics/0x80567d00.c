// GHIRDA Auto-Decompiled
// Address: 0x80567d00 (section offset: 0x055464)
// Size: 684 bytes, 171 instructions
// Module: StaticR.rel | Class: Physics

void sub_80567d00(void* arg0) {
    // Allocate stack frame: 0x30 bytes
    r0 = 0x0x4330 << 16; // lis
    *(uint32_t*)(0x2c(r1)) = r31; // stw
    r31 = r5; // mr
    *(uint32_t*)(0x28(r1)) = r30; // stw
    r30 = r3; // mr
    *(uint32_t*)(0x24(r1)) = r29; // stw
    r29 = r4; // mr
    // Call 0x00053358
    int var_1 = sub_0x00053358(...);
    r3 = 0x0 << 16; // lis
    /* li r0, 0 */ // 0x38000000
    r3 = r3 + 0; // addi
    *(uint32_t*)(0x38(r30)) = r3; // stw
    r3 = r30 + 0x70; // addi
    *(uint32_t*)(0x68(r30)) = r31; // stw
    *(uint32_t*)(0x6c(r30)) = r0; // stw
    // Call 0x00053358
    int var_2 = sub_0x00053358(...);
    r31 = 0x0 << 16; // lis
    r4 = 0x0 << 16; // lis
    float f1 = *(float*)(0(r31)); // lfs
    r3 = r30 + 0x70; // addi
    float f0 = *(float*)(0(r4)); // lfs
    *(uint32_t*)(0x100(r30)) = f1; // stfs
    *(uint32_t*)(0x104(r30)) = f0; // stfs
    *(uint32_t*)(0x108(r30)) = r29; // stw
    uint32_t r12 = *(uint32_t*)(0x70(r30)); // lwz
    uint32_t r12 = *(uint32_t*)(0x14(r12)); // lwz
    /* mtctr r12 */ // SPR operation
    /* bctrl  */ // indirect call/branch
    r3 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(0x58(r3)); // lwz
    // Compare r0 cmpwi 0
    if (/* bne 0x555f8 */) {
    // branch to 0x0555f8
        /* li r3, 0 */ // 0x38600000
        // Call 0x00053358
        int var_3 = sub_0x00053358(...);
        uint32_t r0 = *(uint32_t*)(0x108(r30)); // lwz
        // Compare r0 cmpwi 0
        if (/* beq 0x5551c */) {
        // branch to 0x05551c
            // Compare r0 cmpwi 1
            if (/* beq 0x55580 */) {
            // branch to 0x055580
            } else {
                goto label_0x055594;
                r3 = 0x0 << 16; // lis
                r4 = 0x0 << 16; // lis
                uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
                r3 = 0x0 << 16; // lis
                uint16_t r0 = *(uint16_t*)(0x34(r30)); // lhz
                r4 = r4 + 0; // addi
                r5 = r5 * 0xc; // mulli
                float f2 = *(float*)(0(r3)); // lfd
                float f3 = *(float*)(0(r31)); // lfs
                r0 = r0 ori 1;
                r3 = r4 + r5; // add
                /* lhzx r4, r4, r5 */ // 0x7c842a2e
                uint16_t r3 = *(uint16_t*)(2(r3)); // lhz
                *(uint32_t*)(0xc(r1)) = r4; // stw
                *(uint32_t*)(0x14(r1)) = r3; // stw
                float f1 = *(float*)(8(r1)); // lfd
                float f0 = *(float*)(0x10(r1)); // lfd
                f1 = fsubs(f1, f2); // fsubs
                *(uint32_t*)(0x40(r30)) = f3; // stfs
                f0 = fsubs(f0, f2); // fsubs
                *(uint32_t*)(0x44(r30)) = f3; // stfs
                *(uint32_t*)(8(r30)) = f1; // stfs
                *(uint32_t*)(0x34(r30)) = r0; // sth
                *(uint32_t*)(0xc(r30)) = f0; // stfs
                goto label_0x0556f0;
                r4 = 0x0 << 16; // lis
                r3 = r30; // mr
                uint32_t r4 = *(uint32_t*)(0(r4)); // lwz
                // Call 0x00056a80
                int var_4 = sub_0x00056a80(...);
                goto label_0x0556f0;
                r3 = 0x0 << 16; // lis
                r4 = 0x0 << 16; // lis
                uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
                r3 = 0x0 << 16; // lis
                uint16_t r0 = *(uint16_t*)(0x34(r30)); // lhz
                r4 = r4 + 0; // addi
                r5 = r5 * 0xc; // mulli
                float f2 = *(float*)(0(r3)); // lfd
                float f3 = *(float*)(0(r31)); // lfs
                r0 = r0 ori 1;
                r3 = r4 + r5; // add
                /* lhzx r4, r4, r5 */ // 0x7c842a2e
                uint16_t r3 = *(uint16_t*)(2(r3)); // lhz
                *(uint32_t*)(0xc(r1)) = r4; // stw
                *(uint32_t*)(0x14(r1)) = r3; // stw
                float f1 = *(float*)(8(r1)); // lfd
                float f0 = *(float*)(0x10(r1)); // lfd
                f1 = fsubs(f1, f2); // fsubs
                *(uint32_t*)(0x40(r30)) = f3; // stfs
                f0 = fsubs(f0, f2); // fsubs
                *(uint32_t*)(0x44(r30)) = f3; // stfs
                *(uint32_t*)(8(r30)) = f1; // stfs
                *(uint32_t*)(0x34(r30)) = r0; // sth
                *(uint32_t*)(0xc(r30)) = f0; // stfs
                goto label_0x0556f0;
                /* li r3, 1 */ // 0x38600001
                // Call 0x00053358
                int var_5 = sub_0x00053358(...);
                uint32_t r0 = *(uint32_t*)(0x108(r30)); // lwz
                // Compare r0 cmpwi 0
                if (/* beq 0x55618 */) {
                // branch to 0x055618
                    // Compare r0 cmpwi 1
                    if (/* beq 0x5567c */) {
                    // branch to 0x05567c
                    } else {
                        goto label_0x055690;
                        r3 = 0x0 << 16; // lis
                        r4 = 0x0 << 16; // lis
                        uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
                        r3 = 0x0 << 16; // lis
                        uint16_t r0 = *(uint16_t*)(0x34(r30)); // lhz
                        r4 = r4 + 0; // addi
                        r5 = r5 * 0xc; // mulli
                        float f2 = *(float*)(0(r3)); // lfd
                        float f3 = *(float*)(0(r31)); // lfs
                        r0 = r0 ori 1;
                        r3 = r4 + r5; // add
                        /* lhzx r4, r4, r5 */ // 0x7c842a2e
                        uint16_t r3 = *(uint16_t*)(2(r3)); // lhz
                        *(uint32_t*)(0xc(r1)) = r4; // stw
                        *(uint32_t*)(0x14(r1)) = r3; // stw
                        float f1 = *(float*)(8(r1)); // lfd
                        float f0 = *(float*)(0x10(r1)); // lfd
                        f1 = fsubs(f1, f2); // fsubs
                        *(uint32_t*)(0x40(r30)) = f3; // stfs
                        f0 = fsubs(f0, f2); // fsubs
                        *(uint32_t*)(0x44(r30)) = f3; // stfs
                        *(uint32_t*)(8(r30)) = f1; // stfs
                        *(uint32_t*)(0x34(r30)) = r0; // sth
                        *(uint32_t*)(0xc(r30)) = f0; // stfs
                        goto label_0x0556f0;
                        r4 = 0x0 << 16; // lis
                        r3 = r30; // mr
                        uint32_t r4 = *(uint32_t*)(0(r4)); // lwz
                        // Call 0x00056a80
                        int var_6 = sub_0x00056a80(...);
                        goto label_0x0556f0;
                        r3 = 0x0 << 16; // lis
                        r4 = 0x0 << 16; // lis
                        uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
                        r3 = 0x0 << 16; // lis
                        uint16_t r0 = *(uint16_t*)(0x34(r30)); // lhz
                        r4 = r4 + 0; // addi
                        r5 = r5 * 0xc; // mulli
                        float f2 = *(float*)(0(r3)); // lfd
                        float f3 = *(float*)(0(r31)); // lfs
                        r0 = r0 ori 1;
                        r3 = r4 + r5; // add
                        /* lhzx r4, r4, r5 */ // 0x7c842a2e
                        uint16_t r3 = *(uint16_t*)(2(r3)); // lhz
                        *(uint32_t*)(0xc(r1)) = r4; // stw
                        *(uint32_t*)(0x14(r1)) = r3; // stw
                        float f1 = *(float*)(8(r1)); // lfd
                        float f0 = *(float*)(0x10(r1)); // lfd
                        f1 = fsubs(f1, f2); // fsubs
                        *(uint32_t*)(0x40(r30)) = f3; // stfs
                        f0 = fsubs(f0, f2); // fsubs
                        *(uint32_t*)(0x44(r30)) = f3; // stfs
                        *(uint32_t*)(8(r30)) = f1; // stfs
                        *(uint32_t*)(0x34(r30)) = r0; // sth
                        *(uint32_t*)(0xc(r30)) = f0; // stfs
                        r3 = r30; // mr
                        uint32_t r31 = *(uint32_t*)(0x2c(r1)); // lwz
                        uint32_t r30 = *(uint32_t*)(0x28(r1)); // lwz
                        uint32_t r29 = *(uint32_t*)(0x24(r1)); // lwz
                        uint32_t r0 = *(uint32_t*)(0x34(r1)); // lwz
                        /* mtlr r0 */ // SPR operation
                        r1 = r1 + 0x30; // addi
                        // Restore stack (addi r1, r1, 0x30)
                        // Restore LR (lwz r0, N(r1); mtlr r0)
                        return;
                    }
                }
            }
        }
    }
}
