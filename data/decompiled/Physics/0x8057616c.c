// GHIRDA Auto-Decompiled
// Address: 0x8057616c (section offset: 0x0638d0)
// Size: 196 bytes, 49 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrick_startInner(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    // Compare r4 cmpwi 1
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    if (/* blt 0x63978 */) {
    // branch to 0x063978
        uint8_t r4 = *(uint8_t*)(0x18(r3)); // lbz
        r0 = r4 + -1; // addi
        /* clrlwi r0, r0, 0x18 */ // 0x5400063e
        // Compare r0 cmplwi 1
        if (/* bgt 0x63930 */) {
        // branch to 0x063930
            r0 = sign_extend(r4); // extsb
            /* li r4, 5 */ // 0x38800005
            // Compare r0 cmpwi 1
            *(uint32_t*)(0x10(r3)) = r4; // stw
            if (/* bne 0x63920 */) {
            // branch to 0x063920
                r4 = 0x0 << 16; // lis
                float f0 = *(float*)(0(r4)); // lfs
                goto label_0x063928;
                r4 = 0x0 << 16; // lis
                float f0 = *(float*)(0(r4)); // lfs
                *(uint32_t*)(0x1c(r3)) = f0; // stfs
                goto label_0x063958;
                r0 = sign_extend(r4); // extsb
                *(uint32_t*)(0x10(r3)) = r0; // stw
                // Compare r0 cmpwi 4
                if (/* bne 0x6394c */) {
                // branch to 0x06394c
                    r4 = 0x0 << 16; // lis
                    float f0 = *(float*)(0(r4)); // lfs
                    goto label_0x063954;
                    r4 = 0x0 << 16; // lis
                    float f0 = *(float*)(0(r4)); // lfs
                    *(uint32_t*)(0x1c(r3)) = f0; // stfs
                    r3 = r31; // mr
                    // Call 0x00063bc4
                    int var_1 = sub_0x00063bc4(...);
                    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
                    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                    uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                    r0 = r0 oris 0x40;
                    *(uint32_t*)(8(r3)) = r0; // stw
                    goto label_0x063980;
                    /* li r0, 0 */ // 0x38000000
                    *(uint32_t*)(0x10(r3)) = r0; // stw
                    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
                    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
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
