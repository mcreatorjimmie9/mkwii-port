/* Function at 0x805ACAC0, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805ACAC0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x805ACAC8
    r0 = r5 + -2; // 0x805ACAD0
    r6 = r6 + 0; // 0x805ACAD8
    *(0x1c + r1) = r31; // stw @ 0x805ACADC
    *(0x18 + r1) = r30; // stw @ 0x805ACAE0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805ACAE8
    r29 = r3;
    *(0 + r3) = r6; // stw @ 0x805ACAF0
    if (<=) goto 0x0x805acb2c;
    if (==) goto 0x0x805acb14;
    if (==) goto 0x0x805acb20;
    if (==) goto 0x0x805acb38;
    /* b 0x805acb44 */ // 0x805ACB10
    /* li r0, 0x20 */ // 0x805ACB14
    *(4 + r3) = r0; // sth @ 0x805ACB18
    /* b 0x805acb4c */ // 0x805ACB1C
    /* li r0, 0x20 */ // 0x805ACB20
    *(4 + r3) = r0; // sth @ 0x805ACB24
    /* b 0x805acb4c */ // 0x805ACB28
    /* li r0, 0x20 */ // 0x805ACB2C
    *(4 + r3) = r0; // sth @ 0x805ACB30
    /* b 0x805acb4c */ // 0x805ACB34
    /* li r0, 1 */ // 0x805ACB38
    *(4 + r3) = r0; // sth @ 0x805ACB3C
    /* b 0x805acb4c */ // 0x805ACB40
    /* li r0, 0 */ // 0x805ACB44
    *(4 + r3) = r0; // sth @ 0x805ACB48
    r31 = *(4 + r3); // lhz @ 0x805ACB4C
    r4 = r30;
    *(8 + r3) = r5; // stw @ 0x805ACB54
    /* li r5, 4 */ // 0x805ACB58
    /* mulli r3, r31, 0xd8 */ // 0x805ACB5C
    r3 = r3 + 0x10; // 0x805ACB60
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}