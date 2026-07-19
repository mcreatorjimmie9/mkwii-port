/* Function at 0x808300A0, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808300A0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808300AC
    r31 = r3;
    FUN_80828F78(); // bl 0x80828F78
    r0 = *(0x78 + r31); // lwz @ 0x808300B8
    r3 = r31;
    r4 = r0 rlwinm 7; // rlwinm
    r0 = r4 + 2; // 0x808300C4
    /* clrlwi r4, r0, 0x10 */ // 0x808300C8
    FUN_8083D0E4(r3); // bl 0x8083D0E4
    r0 = *(0x7c + r31); // lwz @ 0x808300D0
    /* li r4, 0 */ // 0x808300D4
    /* li r3, -1 */ // 0x808300D8
    *(0x1a8 + r31) = r4; // sth @ 0x808300DC
    /* clrlwi. r0, r0, 0x1f */ // 0x808300E0
    *(0x1ac + r31) = r3; // stw @ 0x808300E4
    *(0x1b0 + r31) = r4; // stw @ 0x808300E8
    if (==) goto 0x0x80830110;
    r0 = *(0x78 + r31); // lwz @ 0x808300F0
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x808300F4
    if (==) goto 0x0x80830110;
    /* lis r4, 0 */ // 0x808300FC
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80830104
    /* li r4, 0x100 */ // 0x80830108
    FUN_8082DFAC(r4, r3, r4); // bl 0x8082DFAC
    r0 = *(0x14 + r1); // lwz @ 0x80830110
    r31 = *(0xc + r1); // lwz @ 0x80830114
    return;
}