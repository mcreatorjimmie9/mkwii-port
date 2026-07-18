// GHIRDA Auto-Decompiled
// Address: 0x805763e4 (section offset: 0x063b48)
// Size: 280 bytes, 70 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrick_update(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    uint16_t r4 = *(uint16_t*)(0x38(r3)); // lha
    r0 = r4 + -1; // addi
    *(uint32_t*)(0x38(r3)) = r0; // sth
    /* extsh. r0, r0 */ // 0x7c000735
    if (/* bge 0x63b78 */) {
    // branch to 0x063b78
        /* li r0, 0 */ // 0x38000000
        *(uint32_t*)(0x38(r3)) = r0; // sth
        uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
        uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
        /* rlwinm. r0, r0, 0, 9, 9 */ // 0x54000253
        if (/* beq 0x63ba0 */) {
        // branch to 0x063ba0
            uint32_t r12 = *(uint32_t*)(0xc(r31)); // lwz
            r3 = r31; // mr
            uint32_t r12 = *(uint32_t*)(0x14(r12)); // lwz
            /* mtctr r12 */ // SPR operation
            /* bctrl  */ // indirect call/branch
            r3 = r31; // mr
            // Call 0x0006329c
            int var_1 = sub_0x0006329c(...);
            r3 = r31; // mr
            // Call 0x000633d0
            int var_2 = sub_0x000633d0(...);
            uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
            uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
            /* mtlr r0 */ // SPR operation
            r1 = r1 + 0x10; // addi
            // Restore stack (addi r1, r1, 0x10)
            // Restore LR (lwz r0, N(r1); mtlr r0)
            return;
            uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
            r5 = 0x0 << 16; // lis
            r5 = r5 + 0; // addi
            // Compare r0 cmpwi 1
            if (/* bne 0x63bec */) {
            // branch to 0x063bec
                float f0 = *(float*)(0x98(r5)); // lfs
                r0 = r5 + 8; // addi
                *(uint32_t*)(0x20(r3)) = r0; // stw
                *(uint32_t*)(0x34(r3)) = f0; // stfs
                goto label_0x063c2c;
                // Compare r0 cmpwi 2
                if (/* bne 0x63c0c */) {
                // branch to 0x063c0c
                    r4 = r5 + 8; // addi
                    float f0 = *(float*)(0x9c(r5)); // lfs
                    r0 = r4 + 0x10; // addi
                    *(uint32_t*)(0x20(r3)) = r0; // stw
                    *(uint32_t*)(0x34(r3)) = f0; // stfs
                    goto label_0x063c2c;
                    uint32_t r0 = *(uint32_t*)(0x10(r3)); // lwz
                    // Compare r0 cmpwi 6
                    if (/* bne 0x63c2c */) {
                    // branch to 0x063c2c
                        r4 = r5 + 8; // addi
                        float f0 = *(float*)(0xa0(r5)); // lfs
                        r0 = r4 + 0x20; // addi
                        *(uint32_t*)(0x20(r3)) = r0; // stw
                        *(uint32_t*)(0x34(r3)) = f0; // stfs
                        uint32_t r4 = *(uint32_t*)(0x20(r3)); // lwz
                        float f2 = *(float*)(0(r5)); // lfs
                        float f0 = *(float*)(0(r4)); // lfs
                        *(uint32_t*)(0x28(r3)) = f0; // stfs
                        /* fmr f3, f2 */ // 0xfc601090
                        float f1 = *(float*)(0x80(r5)); // lfs
                        /* fmr f4, f2 */ // 0xfc801090
                        float f0 = *(float*)(0xc(r4)); // lfs
                        *(uint32_t*)(0x30(r3)) = f0; // stfs
                        *(uint32_t*)(0x24(r3)) = f2; // stfs
                        *(uint32_t*)(0x2c(r3)) = f1; // stfs
                        r3 = r3 + 0x3c; // addi
                        continue; // loop back to 0x063358
                    }
                }
            }
        }
    }
}
