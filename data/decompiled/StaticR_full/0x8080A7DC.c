/* Function at 0x8080A7DC, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080A7DC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8080A7E8
    r31 = r3;
    FUN_808A01F4(); // bl 0x808A01F4
    /* lis r3, 0 */ // 0x8080A7F4
    /* lfs f0, 0(r3) */ // 0x8080A7F8
    r3 = r3 + 0; // 0x8080A7FC
    /* stfs f0, 0xb0(r31) */ // 0x8080A800
    /* lfs f0, 4(r3) */ // 0x8080A804
    /* stfs f0, 0xb4(r31) */ // 0x8080A808
    /* lfs f0, 8(r3) */ // 0x8080A80C
    /* stfs f0, 0xb8(r31) */ // 0x8080A810
    r31 = *(0xc + r1); // lwz @ 0x8080A814
    r0 = *(0x14 + r1); // lwz @ 0x8080A818
    return;
}