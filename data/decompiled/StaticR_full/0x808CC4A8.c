/* Function at 0x808CC4A8, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808CC4A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808CC4B4
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x808CC4BC
    if (!=) goto 0x0x808cc52c;
    /* lis r3, 0 */ // 0x808CC4C8
    r3 = *(0 + r3); // lwz @ 0x808CC4CC
    r0 = *(0xb74 + r3); // lwz @ 0x808CC4D0
    if (==) goto 0x0x808cc4e8;
    r0 = *(0x38 + r3); // lwz @ 0x808CC4DC
    if (!=) goto 0x0x808cc52c;
    /* lis r3, 0 */ // 0x808CC4E8
    /* li r4, 4 */ // 0x808CC4EC
    r3 = *(0 + r3); // lwz @ 0x808CC4F0
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (==) goto 0x0x808cc52c;
    r12 = *(0 + r31); // lwz @ 0x808CC500
    r3 = r31;
    /* li r4, -1 */ // 0x808CC508
    r12 = *(0x64 + r12); // lwz @ 0x808CC50C
    /* mtctr r12 */ // 0x808CC510
    /* bctrl  */ // 0x808CC514
    /* lis r4, 0 */ // 0x808CC518
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808CC520
    /* li r4, 1 */ // 0x808CC524
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x808CC52C
    r31 = *(0xc + r1); // lwz @ 0x808CC530
    return;
}