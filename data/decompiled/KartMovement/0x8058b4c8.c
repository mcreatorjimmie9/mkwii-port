// GHIRDA Auto-Decompiled
// Address: 0x8058b4c8 (rel: 0x078c2c)
// Size: 68 bytes, 17 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: PlayerSub10Bike_checkWheelieSpeed

void PlayerSub10Bike_checkWheelieSpeed(void) {
    // Stack frame: 0x1 bytes
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x50; // addi
    return;
    *(uint32_t*)(-0x130(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x134(r1)) = r0; // stw
    *(double*)(0x120(r1)) = f31; // stfd
    /* .word 0xf3e10128 */ // unknown instruction
    *(double*)(0x110(r1)) = f30; // stfd
    /* .word 0xf3c10118 */ // unknown instruction
    *(double*)(0x100(r1)) = f29; // stfd
    /* xsmaddadp f29, f1, f0 */ // 0xf3a10108
    *(double*)(0xf0(r1)) = f28; // stfd
    /* xxsel vs28, vs1, vs0, v3 */ // 0xf38100f8
    r11 = r1 + 0xf0; // addi
    // Call 0x80555bf4
    uint32_t r5 = *(uint32_t*)(0x74(r3)); // lwz
}
