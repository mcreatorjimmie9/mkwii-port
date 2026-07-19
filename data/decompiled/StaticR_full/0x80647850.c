/* Function at 0x80647850, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80647850(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80647860
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80647868
    r30 = r3;
    if (==) goto 0x0x8064788c;
    /* li r4, 0 */ // 0x80647874
    FUN_805F1DDC(r4); // bl 0x805F1DDC
    if (<=) goto 0x0x8064788c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80647890
    r30 = *(8 + r1); // lwz @ 0x80647894
    r0 = *(0x14 + r1); // lwz @ 0x80647898
    return;
}