/* Function at 0x80794A5C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80794A5C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80794A6C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80794A74
    r30 = r3;
    if (==) goto 0x0x80794acc;
    if (==) goto 0x0x80794abc;
    /* li r4, 0 */ // 0x80794A84
    r3 = r3 + 0x94; // 0x80794A88
    FUN_8078FDC8(r4, r3); // bl 0x8078FDC8
    if (==) goto 0x0x80794abc;
    /* lis r4, 0 */ // 0x80794A98
    r3 = r30 + 0x80; // 0x80794A9C
    r4 = r4 + 0; // 0x80794AA0
    /* li r5, 4 */ // 0x80794AA4
    /* li r6, 4 */ // 0x80794AA8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80794AB4
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80794acc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80794AD0
    r30 = *(8 + r1); // lwz @ 0x80794AD4
    r0 = *(0x14 + r1); // lwz @ 0x80794AD8
}