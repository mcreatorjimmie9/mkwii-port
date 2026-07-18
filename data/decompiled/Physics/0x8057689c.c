// GHIRDA Auto-Decompiled
// Address: 0x8057689c (section offset: 0x064000)
// Size: 248 bytes, 62 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrickBike_startInner(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    // Compare r4 cmpwi 1
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0; // addi
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    if (/* blt 0x64084 */) {
    // branch to 0x064084
        uint8_t r0 = *(uint8_t*)(0x18(r3)); // lbz
        /* li r4, 1 */ // 0x38800001
        r0 = sign_extend(r0); // extsb
        *(uint32_t*)(0x10(r3)) = r0; // stw
        // Compare r0 cmpwi 4
        if (/* beq 0x6404c */) {
        // branch to 0x06404c
            // Compare r0 cmpwi 2
            if (/* beq 0x6404c */) {
            // branch to 0x06404c
                /* li r4, 0 */ // 0x38800000
                // Compare r4 cmpwi 0
                if (/* beq 0x6405c */) {
                // branch to 0x06405c
                    float f0 = *(float*)(0x88(r31)); // lfs
                    goto label_0x064060;
                    float f0 = *(float*)(0x80(r31)); // lfs
                    *(uint32_t*)(0x1c(r3)) = f0; // stfs
                    r3 = r30; // mr
                    // Call 0x00063bc4
                    int var_1 = sub_0x00063bc4(...);
                    uint32_t r3 = *(uint32_t*)(0(r30)); // lwz
                    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                    uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                    r0 = r0 oris 0x40;
                    *(uint32_t*)(8(r3)) = r0; // stw
                    goto label_0x0640e0;
                    uint8_t r4 = *(uint8_t*)(0x18(r3)); // lbz
                    r0 = r4 + -3; // addi
                    /* clrlwi r0, r0, 0x18 */ // 0x5400063e
                    // Compare r0 cmplwi 1
                    if (/* bgt 0x640e0 */) {
                    // branch to 0x0640e0
                        r0 = sign_extend(r4); // extsb
                        /* li r4, 6 */ // 0x38800006
                        // Compare r0 cmpwi 4
                        *(uint32_t*)(0x10(r3)) = r4; // stw
                        if (/* bne 0x640b4 */) {
                        // branch to 0x0640b4
                            float f0 = *(float*)(0x88(r31)); // lfs
                            goto label_0x0640b8;
                            float f0 = *(float*)(0x80(r31)); // lfs
                            *(uint32_t*)(0x1c(r3)) = f0; // stfs
                            r3 = r30; // mr
                            // Call 0x00063bc4
                            int var_2 = sub_0x00063bc4(...);
                            float f0 = *(float*)(0xa0(r31)); // lfs
                            *(uint32_t*)(0x34(r30)) = f0; // stfs
                            uint32_t r3 = *(uint32_t*)(0(r30)); // lwz
                            uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                            uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                            r0 = r0 oris 0x40;
                            *(uint32_t*)(8(r3)) = r0; // stw
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
            }
        }
    }
}
