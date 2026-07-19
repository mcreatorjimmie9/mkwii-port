/* Function at 0x80848044, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80848044(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80848054
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8084805C
    r30 = r3;
    if (==) goto 0x0x80848084;
    r3 = *(0 + r3); // lwz @ 0x80848068
    /* li r4, 1 */ // 0x8084806C
    FUN_808433FC(r4); // bl 0x808433FC
    if (<=) goto 0x0x80848084;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80848088
    r30 = *(8 + r1); // lwz @ 0x8084808C
    r0 = *(0x14 + r1); // lwz @ 0x80848090
    return;
}