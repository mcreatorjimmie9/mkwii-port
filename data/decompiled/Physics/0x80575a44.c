// GHIRDA Auto-Decompiled
// Address: 0x80575a44 (section offset: 0x0631a8)
// Size: 100 bytes, 25 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrick_ctor(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    // Call 0x0005d930
    int var_1 = sub_0x0005d930(...);
    r3 = 0x0 << 16; // lis
    r4 = 0x0 << 16; // lis
    float f2 = *(float*)(0(r3)); // lfs
    r3 = 0x0 << 16; // lis
    r4 = r4 + 0; // addi
    float f1 = *(float*)(0(r3)); // lfs
    /* fmr f3, f2 */ // 0xfc601090
    *(uint32_t*)(0xc(r31)) = r4; // stw
    /* fmr f4, f2 */ // 0xfc801090
    r3 = r31 + 0x3c; // addi
    // Call 0x00063358
    int var_2 = sub_0x00063358(...);
    /* li r0, 0 */ // 0x38000000
    *(uint32_t*)(0x38(r31)) = r0; // sth
    r3 = r31; // mr
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR operation
    r1 = r1 + 0x10; // addi
    // Restore stack (addi r1, r1, 0x10)
    // Restore LR (lwz r0, N(r1); mtlr r0)
    return;
}
