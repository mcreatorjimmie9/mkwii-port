// GHIRDA Auto-Decompiled
// Address: 0x8059c2a8 (rel: 0x089a0c)
// Size: 236 bytes, 59 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: unk80599dc0__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3f

void unk80599dc0__Kart16KartWheelPhysics(EGG::Vector3f* vec) {
    // Call 0x80555bf4
    r3 = r30; // mr
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(8(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x10; // addi
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    // Compare r3, 0
    *(uint32_t*)(0x14(r1)) = r0; // stw
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    if (/* eq */) goto 0x8059c2f0; // beq
    // Compare r4, 0
    if (/* le */) goto 0x8059c2f0; // ble
    // Call 0x80555bf4
    r3 = r31; // mr
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x10; // addi
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x24(r1)) = r0; // stw
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    *(uint32_t*)(0x18(r1)) = r30; // stw
    *(uint32_t*)(0x14(r1)) = r29; // stw
    r29 = r3; // mr
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    // Call 0x805b06fc
    uint32_t r3 = *(uint32_t*)(8(r29)); // lwz
    // Call 0x805b3c6c
    r3 = 0x0 << 16; // lis
    r31 = 0x0 << 16; // lis
    float f0 = *(float*)(0(r3)); // lfs
    r4 = r3 + 0x0; // addi
    *(float*)(0xc(r29)) = f0; // stfs
    r30 = 0x0 << 16; // lis
    float f2 = *(float*)(0(r31)); // lfs
    r3 = r29 + 0x24; // addi
    float f0 = *(float*)(4(r4)); // lfs
    *(float*)(0x10(r29)) = f0; // stfs
    f3 = f2; // fmr
    f4 = f2; // fmr
    float f1 = *(float*)(0(r30)); // lfs
    float f0 = *(float*)(8(r4)); // lfs
    *(float*)(0x14(r29)) = f0; // stfs
    // Call 0x80555bf4
    float f2 = *(float*)(0(r31)); // lfs
    r3 = r29 + 0x34; // addi
    float f1 = *(float*)(0(r30)); // lfs
    f3 = f2; // fmr
    f4 = f2; // fmr
    // Call 0x80555bf4
    float f2 = *(float*)(0(r31)); // lfs
    r3 = r29 + 0x44; // addi
}
