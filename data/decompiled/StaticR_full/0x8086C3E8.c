/* Function at 0x8086C3E8, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8086C3E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0x2d */ // 0x8086C3F4
    *(0xc + r1) = r31; // stw @ 0x8086C3F8
    r31 = r3;
    *(0x1d4 + r3) = r0; // stw @ 0x8086C400
    r3 = *(0x1c4 + r3); // lwz @ 0x8086C404
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060F27C(); // bl 0x8060F27C
    /* li r0, 0 */ // 0x8086C410
    *(0x1c4 + r31) = r0; // stw @ 0x8086C414
    r3 = *(0x1a0 + r31); // lwz @ 0x8086C418
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060F264(); // bl 0x8060F264
    /* lis r4, 0 */ // 0x8086C424
    /* lis r3, 0 */ // 0x8086C428
    /* lfs f1, 0(r4) */ // 0x8086C42C
    /* lfs f0, 0(r3) */ // 0x8086C430
    /* stfs f1, 0x1f8(r31) */ // 0x8086C434
    /* stfs f1, 0x1fc(r31) */ // 0x8086C438
    /* stfs f0, 0x1f4(r31) */ // 0x8086C43C
    r31 = *(0xc + r1); // lwz @ 0x8086C440
    r0 = *(0x14 + r1); // lwz @ 0x8086C444
    return;
}