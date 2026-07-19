// GHIRDA Auto-Decompiled
// Address: 0x80568284 (section offset: 0x0559e8)
// Size: 232 bytes, 58 instructions
// Module: StaticR.rel | Class: Physics

void sub_80568284(void* arg0) {
    // Allocate stack frame: 0x40 bytes
    *(uint32_t*)(0x30(r1)) = f31; // stfd
    /* xxsel vs31, vs1, vs0, v0 */ // 0xf3e10038
    *(uint32_t*)(0x20(r1)) = f30; // stfd
    /* gekko_0x3c 0xf3c10028 */ // 0xf3c10028
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = r4; // mr
    *(uint32_t*)(0x18(r1)) = r30; // stw
    r30 = r3; // mr
    /* li r3, 4 */ // 0x38600004
    // Call 0x00055134
    int var_1 = sub_0x00055134(...);
    uint32_t r0 = *(uint32_t*)(4(r30)); // lwz
    r3 = 0x0 << 16; // lis
    float f0 = *(float*)(0(r3)); // lfs
    // Compare r31 cmpw r0
    *(uint32_t*)(8(r1)) = f0; // stfs
    float f31 = *(float*)(0x18(r30)); // lfs
    *(uint32_t*)(0xc(r1)) = f0; // stfs
    float f30 = *(float*)(0x1c(r30)); // lfs
    *(uint32_t*)(0x10(r1)) = f0; // stfs
    *(uint32_t*)(0x28(r30)) = f0; // stfs
    *(uint32_t*)(0x2c(r30)) = f0; // stfs
    *(uint32_t*)(0x30(r30)) = f0; // stfs
    if (/* beq 0x55a60 */) {
    // branch to 0x055a60
        uint16_t r0 = *(uint16_t*)(0x34(r30)); // lhz
        *(uint32_t*)(4(r30)) = r31; // stw
        r0 = r0 ori 1;
        *(uint32_t*)(0x34(r30)) = r0; // sth
        float f0 = *(float*)(0x100(r30)); // lfs
        /* li r0, 0 */ // 0x38000000
        float f1 = *(float*)(0x104(r30)); // lfs
        r3 = r30; // mr
        *(uint32_t*)(0x18(r30)) = f0; // stfs
        *(uint32_t*)(0x1c(r30)) = f1; // stfs
        *(uint32_t*)(0(r30)) = r0; // stw
        uint32_t r12 = *(uint32_t*)(0x38(r30)); // lwz
        uint32_t r12 = *(uint32_t*)(0xc(r12)); // lwz
        /* mtctr r12 */ // SPR operation
        /* bctrl  */ // indirect call/branch
        *(uint32_t*)(0x18(r30)) = f31; // stfs
        r3 = r30 + 0x70; // addi
        *(uint32_t*)(0x1c(r30)) = f30; // stfs
        uint32_t r12 = *(uint32_t*)(0x70(r30)); // lwz
        uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
        /* mtctr r12 */ // SPR operation
        /* bctrl  */ // indirect call/branch
        /* gekko_0x38 0xe3e10038 */ // 0xe3e10038
        float f31 = *(float*)(0x30(r1)); // lfd
        /* gekko_0x38 0xe3c10028 */ // 0xe3c10028
        float f30 = *(float*)(0x20(r1)); // lfd
        uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
        uint32_t r0 = *(uint32_t*)(0x44(r1)); // lwz
        uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
        /* mtlr r0 */ // SPR operation
        r1 = r1 + 0x40; // addi
        // Restore stack (addi r1, r1, 0x40)
        // Restore LR (lwz r0, N(r1); mtlr r0)
        return;
    }
}
