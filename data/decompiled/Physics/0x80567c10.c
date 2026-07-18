// GHIRDA Auto-Decompiled
// Address: 0x80567c10 (section offset: 0x055374)
// Size: 120 bytes, 30 instructions
// Module: StaticR.rel | Class: Physics

void sub_80567c10(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    // Compare r3 cmpwi 0
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r4; // mr
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    if (/* beq 0x553d0 */) {
    // branch to 0x0553d0
        uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
        r4 = 0x0 << 16; // lis
        r4 = r4 + 0; // addi
        *(uint32_t*)(0(r3)) = r4; // stw
        // Compare r0 cmpwi 0
        if (/* beq 0x553c0 */) {
        // branch to 0x0553c0
            r3 = r0; // mr
            // Call 0x00053358
            int var_1 = sub_0x00053358(...);
            /* li r0, 0 */ // 0x38000000
            *(uint32_t*)(8(r30)) = r0; // stw
            // Compare r31 cmpwi 0
            if (/* ble 0x553d0 */) {
            // branch to 0x0553d0
                r3 = r30; // mr
                // Call 0x00053358
                int var_2 = sub_0x00053358(...);
                r3 = r30; // mr
                uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
                uint32_t r30 = *(uint32_t*)(8(r1)); // lwz
                uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
                /* mtlr r0 */ // SPR operation
                r1 = r1 + 0x10; // addi
                // Restore stack (addi r1, r1, 0x10)
                // Restore LR (lwz r0, N(r1); mtlr r0)
                return;
            }
        }
    }
}
