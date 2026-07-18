// GHIRDA Auto-Decompiled
// Address: 0x80577fc4 (section offset: 0x065728)
// Size: 344 bytes, 86 instructions
// Module: StaticR.rel | Class: Physics

void PlayerSub10_ctor(void* arg0) {
    // Allocate stack frame: 0x20 bytes
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = r3; // mr
    *(uint32_t*)(0x18(r1)) = r30; // stw
    *(uint32_t*)(0x14(r1)) = r29; // stw
    r29 = 0x0 << 16; // lis
    r29 = r29 + 0; // addi
    *(uint32_t*)(0x10(r1)) = r28; // stw
    // Call 0x0005d930
    int var_1 = sub_0x0005d930(...);
    float f1 = *(float*)(4(r29)); // lfs
    r3 = 0x0 << 16; // lis
    /* li r30, 0 */ // 0x3bc00000
    float f0 = *(float*)(0xc(r29)); // lfs
    r4 = 0x0 << 16; // lis
    r3 = r3 + 0; // addi
    r4 = r4 + 0; // addi
    r28 = r31 + 0x130; // addi
    *(uint32_t*)(0xc(r31)) = r3; // stw
    r3 = r28; // mr
    *(uint32_t*)(0x108(r31)) = r4; // stw
    *(uint32_t*)(0x118(r31)) = r30; // sth
    *(uint32_t*)(0x10c(r31)) = r30; // sth
    *(uint32_t*)(0x10e(r31)) = r30; // sth
    *(uint32_t*)(0x110(r31)) = r30; // sth
    *(uint32_t*)(0x112(r31)) = r30; // sth
    *(uint32_t*)(0x114(r31)) = r30; // sth
    *(uint32_t*)(0x116(r31)) = r30; // sth
    *(uint32_t*)(0x11c(r31)) = f1; // stfs
    *(uint32_t*)(0x120(r31)) = f1; // stfs
    *(uint32_t*)(0x128(r31)) = f0; // stfs
    // Call 0x0005d930
    int var_2 = sub_0x0005d930(...);
    float f0 = *(float*)(4(r29)); // lfs
    r3 = 0x0 << 16; // lis
    float f1 = *(float*)(0(r29)); // lfs
    r3 = r3 + 0; // addi
    r29 = r31 + 0x264; // addi
    *(uint32_t*)(0xc(r28)) = r3; // stw
    r3 = r29; // mr
    *(uint32_t*)(0x10(r28)) = f1; // stfs
    *(uint32_t*)(0x164(r31)) = f0; // stfs
    *(uint32_t*)(0x168(r31)) = f0; // stfs
    *(uint32_t*)(0x16c(r31)) = f0; // stfs
    *(uint32_t*)(0x170(r31)) = f0; // stfs
    *(uint32_t*)(0x174(r31)) = f0; // stfs
    *(uint32_t*)(0x178(r31)) = f0; // stfs
    *(uint32_t*)(0x184(r31)) = f0; // stfs
    *(uint32_t*)(0x250(r31)) = r30; // stw
    *(uint32_t*)(0x254(r31)) = r30; // sth
    // Call 0x0005d930
    int var_3 = sub_0x0005d930(...);
    r4 = 0x0 << 16; // lis
    r3 = 0x0 << 16; // lis
    r4 = r4 + 0; // addi
    *(uint32_t*)(0xc(r29)) = r4; // stw
    r5 = 0x0 << 16; // lis
    r3 = r3 + 0; // addi
    uint32_t r4 = *(uint32_t*)(0(r5)); // lwz
    uint32_t r0 = *(uint32_t*)(0xb6c(r4)); // lwz
    /* slwi r0, r0, 2 */ // 0x5400103a
    float f0 = *(float*)(r3); // lfsx
    *(uint32_t*)(0x10(r31)) = f0; // stfs
    uint32_t r3 = *(uint32_t*)(0(r5)); // lwz
    uint32_t r3 = *(uint32_t*)(0xb70(r3)); // lwz
    r0 = r3 + -3; // addi
    // Compare r0 cmplwi 7
    if (/* bgt 0x65848 */) {
    // branch to 0x065848
        /* li r3, 1 */ // 0x38600001
        r0 = r3 << r0; // slw
        r0 = r0 andi 0xc1;
        if (/* beq 0x65848 */) {
        // branch to 0x065848
            r30 = r3; // mr
            // Compare r30 cmpwi 0
            if (/* beq 0x6585c */) {
            // branch to 0x06585c
                r3 = 0x0 << 16; // lis
                float f0 = *(float*)(0(r3)); // lfs
                *(uint32_t*)(0x10(r31)) = f0; // stfs
                r3 = r31; // mr
                uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
                uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
                uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
                uint32_t r28 = *(uint32_t*)(0x10(r1)); // lwz
                uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
                /* mtlr r0 */ // SPR operation
                r1 = r1 + 0x20; // addi
                // Restore stack (addi r1, r1, 0x20)
                // Restore LR (lwz r0, N(r1); mtlr r0)
                return;
            }
        }
    }
}
