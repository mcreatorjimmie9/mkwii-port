/* Function at 0x808D139C, size=132 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808D139C(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* lis r4, 0 */ // 0x808D13B0
    /* lfs f1, 4(r31) */ // 0x808D13B4
    *(0x38 + r1) = r30; // stw @ 0x808D13B8
    r30 = r3;
    r4 = r4 + 0; // 0x808D13C4
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lis r4, 0 */ // 0x808D13CC
    /* lfs f1, 0(r31) */ // 0x808D13D0
    r4 = r4 + 0; // 0x808D13D8
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x808D13F0
    /* stfs f0, 0x17c(r30) */ // 0x808D13F4
    /* lfs f0, 0xc(r1) */ // 0x808D13F8
    /* stfs f0, 0x180(r30) */ // 0x808D13FC
    /* lfs f0, 0x10(r1) */ // 0x808D1400
    /* stfs f0, 0x184(r30) */ // 0x808D1404
    r31 = *(0x3c + r1); // lwz @ 0x808D1408
    r30 = *(0x38 + r1); // lwz @ 0x808D140C
    r0 = *(0x44 + r1); // lwz @ 0x808D1410
    return;
}