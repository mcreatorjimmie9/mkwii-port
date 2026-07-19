/* Function at 0x808239BC, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808239BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808239D0
    r30 = r3;
    r0 = *(0x7c + r4); // lwz @ 0x808239D8
    /* clrlwi. r0, r0, 0x1f */ // 0x808239DC
    if (!=) goto 0x0x808239f4;
    /* lis r4, 0 */ // 0x808239E4
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808239EC
    FUN_8082DE7C(r4, r3); // bl 0x8082DE7C
    r3 = *(0x20 + r30); // lwz @ 0x808239F4
    r4 = r31;
    FUN_80857DD8(r3, r4); // bl 0x80857DD8
    r3 = r31;
    FUN_80829F74(r4, r3); // bl 0x80829F74
    r0 = *(0x14 + r1); // lwz @ 0x80823A08
    r31 = *(0xc + r1); // lwz @ 0x80823A0C
    r30 = *(8 + r1); // lwz @ 0x80823A10
    return;
}