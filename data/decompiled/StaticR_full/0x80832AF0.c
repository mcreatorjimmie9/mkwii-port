/* Function at 0x80832AF0, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80832AF0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80832AFC
    r31 = r3;
    FUN_80828F78(); // bl 0x80828F78
    r3 = r31;
    /* li r4, 0 */ // 0x80832B0C
    FUN_8083D0E4(r3, r4); // bl 0x8083D0E4
    r0 = *(0x7c + r31); // lwz @ 0x80832B14
    /* clrlwi. r0, r0, 0x1f */ // 0x80832B18
    if (==) goto 0x0x80832b40;
    r0 = *(0x78 + r31); // lwz @ 0x80832B20
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x80832B24
    if (==) goto 0x0x80832b40;
    /* lis r4, 0 */ // 0x80832B2C
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80832B34
    /* li r4, 0x100 */ // 0x80832B38
    FUN_8082DFAC(r4, r3, r4); // bl 0x8082DFAC
    r0 = *(0x14 + r1); // lwz @ 0x80832B40
    r31 = *(0xc + r1); // lwz @ 0x80832B44
    return;
}