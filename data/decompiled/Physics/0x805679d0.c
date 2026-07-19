// GHIRDA Auto-Decompiled
// Address: 0x805679d0 (section offset: 0x055134)
// Size: 392 bytes, 98 instructions
// Module: StaticR.rel | Class: Physics

void sub_805679d0(void* arg0) {
    // Allocate stack frame: 0x60 bytes
    r5 = 0x0 << 16; // lis
    r4 = 0x0 << 16; // lis
    r5 = r5 + 0; // addi
    float f0 = *(float*)(0x50(r5)); // lfd
    *(uint32_t*)(0x5c(r1)) = r31; // stw
    float f6 = *(float*)(0x48(r5)); // lfs
    *(uint32_t*)(0x58(r1)) = r30; // stw
    r30 = r5 + 8; // addi
    float f3 = *(float*)(0x4c(r5)); // lfs
    *(uint32_t*)(0x54(r1)) = r29; // stw
    float f1 = *(float*)(0x58(r5)); // lfs
    *(uint32_t*)(0x50(r1)) = r28; // stw
    /* slwi r28, r3, 3 */ // 0x547c1838
    r3 = r1 + 0xc; // addi
    float f7 = *(float*)(0(r4)); // lfs
    r4 = r1 + 8; // addi
    uint32_t r29 = *(uint32_t*)(8(r5)); // lwz
    f2 = f0 + f7; // fadd
    float f0 = *(float*)(0(r5)); // lfs
    *(uint32_t*)(8(r1)) = r29; // stw
    f4 = fsubs(f3, f7); // fsubs
    uint32_t r31 = *(uint32_t*)(0xc(r30)); // lwz
    f5 = fadds(f6, f7); // fadds
    *(uint32_t*)(0x14(r1)) = r31; // stw
    f3 = (float)f2; // frsp
    uint32_t r12 = *(uint32_t*)(0x14(r30)); // lwz
    f2 = fsubs(f6, f7); // fsubs
    *(uint32_t*)(0x1c(r1)) = r12; // stw
    f1 = fadds(f1, f7); // fadds
    uint32_t r11 = *(uint32_t*)(0x18(r30)); // lwz
    *(uint32_t*)(0x20(r1)) = r11; // stw
    f0 = fsubs(f0, f7); // fsubs
    uint32_t r9 = *(uint32_t*)(0x1c(r30)); // lwz
    *(uint32_t*)(0x24(r1)) = r9; // stw
    uint32_t r10 = *(uint32_t*)(0x24(r30)); // lwz
    uint32_t r8 = *(uint32_t*)(0x2c(r30)); // lwz
    uint32_t r7 = *(uint32_t*)(0x30(r30)); // lwz
    uint32_t r6 = *(uint32_t*)(0x34(r30)); // lwz
    uint32_t r5 = *(uint32_t*)(0x38(r30)); // lwz
    uint32_t r0 = *(uint32_t*)(0x3c(r30)); // lwz
    *(uint32_t*)(0x2c(r1)) = r10; // stw
    uint32_t r29 = *(uint32_t*)(4(r30)); // lwz
    *(uint32_t*)(0x34(r1)) = r8; // stw
    uint32_t r31 = *(uint32_t*)(8(r30)); // lwz
    *(uint32_t*)(0x38(r1)) = r7; // stw
    uint32_t r12 = *(uint32_t*)(0x10(r30)); // lwz
    *(uint32_t*)(0x3c(r1)) = r6; // stw
    uint32_t r11 = *(uint32_t*)(0x20(r30)); // lwz
    *(uint32_t*)(0x40(r1)) = r5; // stw
    uint32_t r9 = *(uint32_t*)(0x28(r30)); // lwz
    *(uint32_t*)(0xc(r1)) = r29; // stw
    *(uint32_t*)(0x10(r1)) = r31; // stw
    *(uint32_t*)(0x18(r1)) = r12; // stw
    *(uint32_t*)(0x28(r1)) = r11; // stw
    *(uint32_t*)(0x30(r1)) = r9; // stw
    *(uint32_t*)(8(r1)) = f7; // stfs
    *(uint32_t*)(0x14(r1)) = f7; // stfs
    *(uint32_t*)(0x1c(r1)) = f5; // stfs
    *(uint32_t*)(0x20(r1)) = f4; // stfs
    *(uint32_t*)(0x24(r1)) = f3; // stfs
    *(uint32_t*)(0x2c(r1)) = f7; // stfs
    *(uint32_t*)(0x34(r1)) = f5; // stfs
    *(uint32_t*)(0x38(r1)) = f2; // stfs
    *(uint32_t*)(0x3c(r1)) = f1; // stfs
    *(uint32_t*)(0x40(r1)) = f0; // stfs
    *(uint32_t*)(0x44(r1)) = f7; // stfs
    float f1 = *(float*)(r4); // lfsx
    float f2 = *(float*)(r3); // lfsx
    // Call 0x00053358
    int var_1 = sub_0x00053358(...);
    uint32_t r0 = *(uint32_t*)(0x64(r1)); // lwz
    uint32_t r31 = *(uint32_t*)(0x5c(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(0x58(r1)); // lwz
    uint32_t r29 = *(uint32_t*)(0x54(r1)); // lwz
    uint32_t r28 = *(uint32_t*)(0x50(r1)); // lwz
    /* mtlr r0 */ // SPR operation
    r1 = r1 + 0x60; // addi
    // Restore stack (addi r1, r1, 0x60)
    // Restore LR (lwz r0, N(r1); mtlr r0)
    return;
    r3 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x34(r3)); // lwz
    continue; // loop back to 0x050fe0
    r5 = 0x0 << 16; // lis
    r4 = r3; // mr
    uint32_t r3 = *(uint32_t*)(0(r5)); // lwz
    uint32_t r3 = *(uint32_t*)(0x34(r3)); // lwz
    continue; // loop back to 0x05104c
    r4 = 0x0 << 16; // lis
    uint32_t r4 = *(uint32_t*)(0(r4)); // lwz
    *(uint32_t*)(0x88(r4)) = r3; // stb
    // Restore stack (addi r1, r1, 0x60)
    // Restore LR (lwz r0, N(r1); mtlr r0)
    return;
    r3 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint8_t r3 = *(uint8_t*)(0x88(r3)); // lbz
    // Restore stack (addi r1, r1, 0x60)
    // Restore LR (lwz r0, N(r1); mtlr r0)
    return;
}
