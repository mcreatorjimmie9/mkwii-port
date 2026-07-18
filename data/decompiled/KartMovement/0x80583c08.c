// GHIRDA Auto-Decompiled
// Address: 0x80583c08 (rel: 0x07136c)
// Size: 28 bytes, 7 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: setScale__Q24Kart8KartMoveFQ23EGG8Vector3f

void setScale__Kart8KartMove(EGG::Vector3f* vec) {
    uint32_t r0 = *(uint32_t*)(0x2c(r3)); // lwz
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */
    if (/* eq */) goto 0x80583c28; // beq
    float f1 = *(float*)(0x20(r31)); // lfs
    float f0 = *(float*)(0xc0(r28)); // lfs
    f1 = fabsf(f1); // fabs
    /* .word 0xfc010040 */ // unknown instruction
}
