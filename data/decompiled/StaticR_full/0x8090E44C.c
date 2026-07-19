/* Function at 0x8090E44C, size=168 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8090E44C(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x58 + r1) = r30; // stw @ 0x8090E45C
    r30 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x8090E464
    if (==) goto 0x0x8090e510;
    r0 = *(0x54 + r3); // lbz @ 0x8090E470
    if (==) goto 0x0x8090e484;
    r3 = r3 + 0x48; // 0x8090E47C
    /* b 0x8090e4b4 */ // 0x8090E480
    /* li r0, 1 */ // 0x8090E484
    *(0x54 + r3) = r0; // stb @ 0x8090E488
    r4 = r30 + 0x58; // 0x8090E490
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x8090E498
    r3 = r30 + 0x48; // 0x8090E49C
    /* stfs f0, 0x48(r30) */ // 0x8090E4A0
    /* lfs f0, 0xc(r1) */ // 0x8090E4A4
    /* stfs f0, 0x4c(r30) */ // 0x8090E4A8
    /* lfs f0, 0x10(r1) */ // 0x8090E4AC
    /* stfs f0, 0x50(r30) */ // 0x8090E4B0
    /* lfs f1, 4(r3) */ // 0x8090E4B4
    /* lis r3, 0 */ // 0x8090E4B8
    /* lfs f0, 0(r3) */ // 0x8090E4BC
    /* stfs f0, 0x14(r1) */ // 0x8090E4C4
    r5 = r30 + 0x30; // 0x8090E4CC
    /* stfs f1, 0x18(r1) */ // 0x8090E4D0
    /* stfs f0, 0x1c(r1) */ // 0x8090E4D4
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r30 = *(0x10 + r30); // lwz @ 0x8090E4DC
    /* li r31, 0 */ // 0x8090E4E0
    r3 = *(0x14 + r30); // lwz @ 0x8090E4E4
    r3 = *(0 + r3); // lwz @ 0x8090E4E8
    if (==) goto 0x0x8090e500;
}