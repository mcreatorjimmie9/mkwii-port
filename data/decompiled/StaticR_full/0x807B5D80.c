/* Function at 0x807B5D80, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B5D80(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807B5D88
    /* lfs f0, 0(r4) */ // 0x807B5D90
    *(0xc + r1) = r31; // stw @ 0x807B5D94
    /* li r31, 0 */ // 0x807B5D98
    *(8 + r1) = r30; // stw @ 0x807B5D9C
    r30 = r3;
    /* stfs f0, 0x18(r3) */ // 0x807B5DA4
    /* stfs f0, 0x14(r3) */ // 0x807B5DA8
    *(0x1c + r3) = r31; // stw @ 0x807B5DAC
    FUN_807C02E4(); // bl 0x807C02E4
    if (==) goto 0x0x807b5dfc;
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x807B5DC4
    /* lis r3, 0 */ // 0x807B5DC8
    /* mulli r0, r0, 0xf0 */ // 0x807B5DCC
    r3 = *(0 + r3); // lwz @ 0x807B5DD0
    r3 = r3 + r0; // 0x807B5DD4
    r0 = *(0xf4 + r3); // lwz @ 0x807B5DD8
    if (!=) goto 0x0x807b5dec;
    *(0x20 + r30) = r31; // stw @ 0x807B5DE4
    /* b 0x807b5dfc */ // 0x807B5DE8
    if (!=) goto 0x0x807b5dfc;
    /* li r0, 1 */ // 0x807B5DF4
    *(0x20 + r30) = r0; // stw @ 0x807B5DF8
    r3 = *(0x10 + r30); // lwz @ 0x807B5DFC
    r12 = *(0x34 + r3); // lwz @ 0x807B5E00
    r12 = *(0x18 + r12); // lwz @ 0x807B5E04
    /* mtctr r12 */ // 0x807B5E08
    /* bctrl  */ // 0x807B5E0C
    r0 = *(0x14 + r1); // lwz @ 0x807B5E10
    r31 = *(0xc + r1); // lwz @ 0x807B5E14
    r30 = *(8 + r1); // lwz @ 0x807B5E18
    return;
}