// GHIRDA Auto-Decompiled
// Address: 0x805677cc (section offset: 0x054f30)
// Size: 232 bytes, 58 instructions
// Module: StaticR.rel | Class: Physics

void sub_805677cc(void* arg0) {
    // Allocate stack frame: 0x20 bytes
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0; // addi
    *(uint32_t*)(0x18(r1)) = r30; // stw
    r30 = r4; // mr
    *(uint32_t*)(0x14(r1)) = r29; // stw
    r29 = r3; // mr
    r4 = r29; // mr
    *(uint32_t*)(0x28(r31)) = r3; // stw
    r3 = r31 + 0; // addi
    // Call 0x00053358
    int var_1 = sub_0x00053358(...);
    // Compare r30 cmpwi 0
    if (/* beq 0x54fc8 */) {
    // branch to 0x054fc8
        uint32_t r3 = *(uint32_t*)(0x10(r29)); // lwz
        /* li r4, 0 */ // 0x38800000
        uint32_t r30 = *(uint32_t*)(0x68(r3)); // lwz
        // Compare r30 cmpwi 0
        if (/* blt 0x54f98 */) {
        // branch to 0x054f98
            r3 = r31 + 0x38; // addi
            uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
            // Compare r30 cmpw r0
            if (/* bge 0x54f98 */) {
            // branch to 0x054f98
                /* li r4, 1 */ // 0x38800001
                // Compare r4 cmpwi 0
                if (/* bne 0x54fb4 */) {
                // branch to 0x054fb4
                    r3 = r31 + 0x38; // addi
                    uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
                    uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
                    /* mtctr r12 */ // SPR operation
                    /* bctrl  */ // indirect call/branch
                    r3 = r31 + 0x38; // addi
                    /* slwi r0, r30, 2 */ // 0x57c0103a
                    uint32_t r3 = *(uint32_t*)(8(r3)); // lwz
                    uint32_t r4 = *(uint32_t*)(0x10(r29)); // lwz
                    /* stwx r4, r3, r0 */ // 0x7c83012e
                    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
                    uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
                    uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
                    uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
                    /* mtlr r0 */ // SPR operation
                    r1 = r1 + 0x20; // addi
                    // Restore stack (addi r1, r1, 0x20)
                    // Restore LR (lwz r0, N(r1); mtlr r0)
                    return;
                    r5 = 0x0 << 16; // lis
                    /* slwi r6, r4, 2 */ // 0x5486103a
                    r5 = r5 + 0; // addi
                    uint32_t r0 = *(uint32_t*)(r5); // lwzx
                    // Compare r0 cmpwi 0
                    if (/* bnelr  */) {
                    // branch to 0x055018
                        // Compare r4 cmpwi 1
                        /* stwx r3, r5, r6 */ // 0x7c65312e
                        if (/* bnelr  */) {
                        // branch to 0x055024
                            uint16_t r0 = *(uint16_t*)(0x40(r3)); // lhz
                            r0 = r0 ori 2;
                            *(uint32_t*)(0x40(r3)) = r0; // sth
                            // Restore stack (addi r1, r1, 0x20)
                            // Restore LR (lwz r0, N(r1); mtlr r0)
                            return;
                        }
                    }
                }
            }
        }
    }
}
