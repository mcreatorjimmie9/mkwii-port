/* Function at 0x805ACBBC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805ACBBC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805ACBCC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805ACBD4
    r30 = r3;
    if (==) goto 0x0x805acc08;
    /* lis r4, 0 */ // 0x805ACBE0
    /* li r5, 0xc */ // 0x805ACBE4
    r4 = r4 + 0; // 0x805ACBE8
    /* li r6, 5 */ // 0x805ACBEC
    r3 = r3 + 0x68; // 0x805ACBF0
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (<=) goto 0x0x805acc08;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805ACC0C
    r30 = *(8 + r1); // lwz @ 0x805ACC10
}