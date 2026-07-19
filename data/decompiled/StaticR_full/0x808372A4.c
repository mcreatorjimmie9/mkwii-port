/* Function at 0x808372A4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808372A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808372AC
    r4 = r4 + 0; // 0x808372B4
    *(0xc + r1) = r31; // stw @ 0x808372B8
    *(8 + r1) = r30; // stw @ 0x808372BC
    r30 = r3;
    /* lfs f2, 0x290(r4) */ // 0x808372C4
    /* lfs f1, 0x28c(r4) */ // 0x808372C8
    FUN_80829DB0(); // bl 0x80829DB0
    r31 = r3;
    r3 = r30;
    FUN_8082AE18(r3); // bl 0x8082AE18
    if (!=) goto 0x0x808372f4;
    if (==) goto 0x0x808372f4;
    r3 = r30;
    FUN_80829DE0(r3); // bl 0x80829DE0
    r0 = *(0x14 + r1); // lwz @ 0x808372F4
    r31 = *(0xc + r1); // lwz @ 0x808372F8
    r30 = *(8 + r1); // lwz @ 0x808372FC
    return;
}