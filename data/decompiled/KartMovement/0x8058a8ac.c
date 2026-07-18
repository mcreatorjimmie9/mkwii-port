// GHIRDA Auto-Decompiled
// Address: 0x8058a8ac (rel: 0x078010)
// Size: 48 bytes, 12 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: PlayerSub10Bike_cancelWheelie

void PlayerSub10Bike_cancelWheelie(void) {
    // Stack frame: 0x1 bytes
    r1 = r1 + 0x10; // addi
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    // Compare r3, 0
    *(uint32_t*)(0x14(r1)) = r0; // stw
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    if (/* eq */) goto 0x8058a8dc; // beq
    // Compare r4, 0
    if (/* le */) goto 0x8058a8dc; // ble
    // Call 0x80555bf4
}
