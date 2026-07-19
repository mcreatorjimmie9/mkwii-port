/* Function at 0x80698D78, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80698D78(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80698D84
    r31 = r3;
    r4 = *(0x24 + r3); // lwz @ 0x80698D8C
    /* rlwinm. r0, r4, 0, 0x1d, 0x1d */ // 0x80698D90
    if (!=) goto 0x0x80698ddc;
    /* rlwinm. r0, r4, 0, 0x1e, 0x1e */ // 0x80698D98
    if (==) goto 0x0x80698dc0;
    /* li r4, 5 */ // 0x80698DA0
    /* li r5, 0 */ // 0x80698DA4
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = r31;
    /* li r4, 0 */ // 0x80698DB0
    /* li r5, 0xff */ // 0x80698DB4
    FUN_80698CD0(r5, r3, r4, r5); // bl 0x80698CD0
    /* b 0x80698ddc */ // 0x80698DBC
    /* li r4, 0x40 */ // 0x80698DC0
    /* li r5, 0 */ // 0x80698DC4
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    r3 = r31;
    /* li r4, 0 */ // 0x80698DD0
    /* li r5, 0xff */ // 0x80698DD4
    FUN_80698CD0(r5, r3, r4, r5); // bl 0x80698CD0
    /* lis r31, 0 */ // 0x80698DDC
    r3 = *(0 + r31); // lwz @ 0x80698DE0
    FUN_805E3430(r4, r5); // bl 0x805E3430
}