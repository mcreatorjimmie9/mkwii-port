/* Function at 0x807918C0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807918C0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807918D0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807918D8
    r30 = r3;
    if (==) goto 0x0x80791918;
    /* lis r4, 0 */ // 0x807918E4
    /* li r5, 4 */ // 0x807918E8
    r4 = r4 + 0; // 0x807918EC
    /* li r6, 2 */ // 0x807918F0
    r3 = r3 + 0x80; // 0x807918F4
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80791900
    FUN_805E3430(r6, r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80791918;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}