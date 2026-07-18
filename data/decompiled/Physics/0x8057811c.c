// GHIRDA Auto-Decompiled
// Address: 0x8057811c (section offset: 0x065880)
// Size: 64 bytes, 16 instructions
// Module: StaticR.rel | Class: Physics

void PlayerBoost_dtor(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    // Compare r3 cmpwi 0
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    if (/* beq 0x658a8 */) {
    // branch to 0x0658a8
        // Compare r4 cmpwi 0
        if (/* ble 0x658a8 */) {
        // branch to 0x0658a8
            // Call 0x00063358
            int var_1 = sub_0x00063358(...);
            r3 = r31; // mr
            uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
            uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
            /* mtlr r0 */ // SPR operation
            r1 = r1 + 0x10; // addi
            // Restore stack (addi r1, r1, 0x10)
            // Restore LR (lwz r0, N(r1); mtlr r0)
            return;
        }
    }
}
