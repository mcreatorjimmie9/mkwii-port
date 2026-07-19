/* Function at 0x80859F6C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80859F6C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80859F78
    r31 = r3;
    r4 = *(0x10 + r3); // lwz @ 0x80859F80
    r0 = *(0x145 + r4); // lbz @ 0x80859F84
    if (==) goto 0x0x80859f9c;
    /* lfs f0, 0x67c(r4) */ // 0x80859F90
    /* fabs f0, f0 */ // 0x80859F94
    /* b 0x80859fa4 */ // 0x80859F98
    /* lis r4, 0 */ // 0x80859F9C
    /* lfs f0, 0(r4) */ // 0x80859FA0
    /* stfs f0, 0x3ec(r3) */ // 0x80859FA4
    r3 = *(0x10 + r3); // lwz @ 0x80859FA8
    FUN_8061DA88(r4); // bl 0x8061DA88
}