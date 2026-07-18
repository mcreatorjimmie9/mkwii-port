// GHIRDA Auto-Decompiled
// Address: 0x8058a80c (rel: 0x077f70)
// Size: 44 bytes, 11 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: PlayerSub10Bike_getWheelieSoftSpeedLimitBonus

float PlayerSub10Bike_getWheelieSoftSpeedLimitBonus(void) {
    if (/* eq */) goto 0x8058a81c; // beq
    // Compare r4, 0
    if (/* le */) goto 0x8058a81c; // ble
    // Call 0x80555bf4
    r3 = r31; // mr
    /* lwz r31, 0xc(r1) */
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */
    // Restore stack
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
}
