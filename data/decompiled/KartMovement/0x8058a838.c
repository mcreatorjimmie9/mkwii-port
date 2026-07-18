// GHIRDA Auto-Decompiled
// Address: 0x8058a838 (rel: 0x077f9c)
// Size: 116 bytes, 29 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: PlayerSub10Bike_startWheelie

void PlayerSub10Bike_startWheelie(void) {
    /* mflr r0 */
    // Compare r3, 0
    /* stw r0, 0x14(r1) */
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    if (/* eq */) goto 0x8058a85c; // beq
    // Compare r4, 0
    if (/* le */) goto 0x8058a85c; // ble
    // Call 0x80555bf4
    r3 = r31; // mr
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
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
    if (/* eq */) goto 0x8058a89c; // beq
    // Compare r4, 0
    if (/* le */) goto 0x8058a89c; // ble
    // Call 0x80555bf4
    r3 = r31; // mr
    /* lwz r31, 0xc(r1) */
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */
}
