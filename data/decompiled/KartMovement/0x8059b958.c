// GHIRDA Auto-Decompiled
// Address: 0x8059b958 (rel: 0x0890bc)
// Size: 100 bytes, 25 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: init__Q24Kart16KartWheelPhysicsFv

void init__Kart16KartWheelPhysics(void) {
    uint32_t r6 = *(uint32_t*)(0x78(r27)); // lwz
    uint32_t r5 = *(uint32_t*)(0x7c(r27)); // lwz
    uint32_t r4 = *(uint32_t*)(0x80(r27)); // lwz
    uint32_t r0 = *(uint32_t*)(0x84(r27)); // lwz
    float f0 = *(float*)(4(r28)); // lfs
    *(float*)(0x64(r27)) = f2; // stfs
    *(float*)(0x68(r27)) = f2; // stfs
    *(float*)(0x6c(r27)) = f1; // stfs
    *(float*)(0x70(r27)) = f2; // stfs
    *(float*)(0x74(r27)) = f2; // stfs
    *(float*)(0x78(r27)) = f2; // stfs
    *(float*)(0x7c(r27)) = f2; // stfs
    *(float*)(0x80(r27)) = f0; // stfs
    *(float*)(0x84(r27)) = f2; // stfs
    uint32_t r12 = *(uint32_t*)(0(r27)); // lwz
    *(uint32_t*)(0x20(r1)) = r11; // stw
    uint32_t r12 = *(uint32_t*)(0x14(r12)); // lwz
    *(uint32_t*)(0x24(r1)) = r10; // stw
    *(uint32_t*)(0x28(r1)) = r9; // stw
    *(uint32_t*)(0x14(r1)) = r8; // stw
    *(uint32_t*)(0x18(r1)) = r7; // stw
    *(uint32_t*)(0x1c(r1)) = r6; // stw
    *(uint32_t*)(8(r1)) = r5; // stw
    *(uint32_t*)(0xc(r1)) = r4; // stw
    *(uint32_t*)(0x10(r1)) = r0; // stw
}
