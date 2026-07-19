/* Function at 0x80647A6C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80647A6C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80647A7C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80647A84
    r30 = r3;
    if (==) goto 0x0x80647aa8;
    /* li r4, 0 */ // 0x80647A90
    FUN_805F1DDC(r4); // bl 0x805F1DDC
    if (<=) goto 0x0x80647aa8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80647AAC
    r30 = *(8 + r1); // lwz @ 0x80647AB0
    r0 = *(0x14 + r1); // lwz @ 0x80647AB4
    return;
}