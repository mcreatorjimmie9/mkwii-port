/* Function at 0x8086D444, size=212 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8086D444(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8086D458
    r30 = r3;
    r0 = *(0x1a8 + r3); // lwz @ 0x8086D460
    if (>=) goto 0x0x8086d4d8;
    if (>) goto 0x0x8086d4d8;
    if (>=) goto 0x0x8086d4cc;
    r5 = *(0x1c4 + r3); // lwz @ 0x8086D474
    r0 = r4 + -1; // 0x8086D478
    *(0x1a8 + r3) = r0; // stw @ 0x8086D47C
    if (==) goto 0x0x8086d4cc;
    /* li r0, 0x2d */ // 0x8086D488
    *(0x1d4 + r3) = r0; // stw @ 0x8086D48C
    r3 = r5;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    FUN_8060F27C(r3); // bl 0x8060F27C
    /* li r0, 0 */ // 0x8086D49C
    *(0x1c4 + r30) = r0; // stw @ 0x8086D4A0
    r3 = *(0x1a0 + r30); // lwz @ 0x8086D4A4
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060F264(); // bl 0x8060F264
    /* lis r4, 0 */ // 0x8086D4B0
    /* lis r3, 0 */ // 0x8086D4B4
    /* lfs f1, 0(r4) */ // 0x8086D4B8
    /* lfs f0, 0(r3) */ // 0x8086D4BC
    /* stfs f1, 0x1f8(r30) */ // 0x8086D4C0
    /* stfs f1, 0x1fc(r30) */ // 0x8086D4C4
    /* stfs f0, 0x1f4(r30) */ // 0x8086D4C8
    r3 = r30;
    r4 = r31;
    FUN_8086CBFC(r3, r4); // bl 0x8086CBFC
    r3 = *(0x1a0 + r30); // lwz @ 0x8086D4D8
    FUN_8061DFF8(r3, r4); // bl 0x8061DFF8
    FUN_8060F27C(r3, r4); // bl 0x8060F27C
    /* lis r4, 0 */ // 0x8086D4E4
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x8086D4EC
    /* li r4, 0x124 */ // 0x8086D4F0
    FUN_8082DFAC(r4, r3, r4); // bl 0x8082DFAC
    /* li r0, 0x258 */ // 0x8086D4F8
    *(0x1d8 + r30) = r0; // stw @ 0x8086D4FC
    r31 = *(0xc + r1); // lwz @ 0x8086D500
    r30 = *(8 + r1); // lwz @ 0x8086D504
    r0 = *(0x14 + r1); // lwz @ 0x8086D508
    return;
}