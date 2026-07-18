// GHIRDA Auto-Decompiled
// Address: 0x805685b4 (section offset: 0x055d18)
// Size: 176 bytes, 44 instructions
// Module: StaticR.rel | Class: Physics

void sub_805685b4(void* arg0) {
    // Allocate stack frame: 0x30 bytes
    *(uint32_t*)(0x2c(r1)) = r31; // stw
    r31 = r5; // mr
    *(uint32_t*)(0x28(r1)) = r30; // stw
    r30 = r4; // mr
    *(uint32_t*)(0x24(r1)) = r29; // stw
    r29 = r3; // mr
    /* li r3, 5 */ // 0x38600005
    // Call 0x00055134
    int var_1 = sub_0x00055134(...);
    uint32_t r0 = *(uint32_t*)(4(r29)); // lwz
    r3 = 0x0 << 16; // lis
    float f0 = *(float*)(0(r3)); // lfs
    // Compare r31 cmpw r0
    *(uint32_t*)(0(r29)) = r30; // stw
    *(uint32_t*)(8(r1)) = f0; // stfs
    *(uint32_t*)(0xc(r1)) = f0; // stfs
    *(uint32_t*)(0x10(r1)) = f0; // stfs
    *(uint32_t*)(0x28(r29)) = f0; // stfs
    *(uint32_t*)(0x2c(r29)) = f0; // stfs
    *(uint32_t*)(0x30(r29)) = f0; // stfs
    if (/* beq 0x55d84 */) {
    // branch to 0x055d84
        uint16_t r0 = *(uint16_t*)(0x34(r29)); // lhz
        *(uint32_t*)(4(r29)) = r31; // stw
        r0 = r0 ori 1;
        *(uint32_t*)(0x34(r29)) = r0; // sth
        uint32_t r12 = *(uint32_t*)(0x38(r29)); // lwz
        r3 = r29; // mr
        uint32_t r12 = *(uint32_t*)(0xc(r12)); // lwz
        /* mtctr r12 */ // SPR operation
        /* bctrl  */ // indirect call/branch
        uint32_t r3 = *(uint32_t*)(0x6c(r29)); // lwz
        uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
        uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
        /* mtctr r12 */ // SPR operation
        /* bctrl  */ // indirect call/branch
        uint32_t r0 = *(uint32_t*)(0x34(r1)); // lwz
        uint32_t r31 = *(uint32_t*)(0x2c(r1)); // lwz
        uint32_t r30 = *(uint32_t*)(0x28(r1)); // lwz
        uint32_t r29 = *(uint32_t*)(0x24(r1)); // lwz
        /* mtlr r0 */ // SPR operation
        r1 = r1 + 0x30; // addi
        // Restore stack (addi r1, r1, 0x30)
        // Restore LR (lwz r0, N(r1); mtlr r0)
        return;
    }
}
