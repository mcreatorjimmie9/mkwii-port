/* Function at 0x808FAC14, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808FAC14(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808FAC24
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808FAC2C
    r30 = r3;
    if (==) goto 0x0x808fac6c;
    r0 = *(0 + r3); // lwz @ 0x808FAC38
    if (==) goto 0x0x808fac54;
    /* lis r4, 0 */ // 0x808FAC44
    r3 = *(4 + r3); // lwz @ 0x808FAC48
    r4 = r4 + 0; // 0x808FAC4C
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x808FAC58
    *(0 + r30) = r0; // stw @ 0x808FAC5C
    if (<=) goto 0x0x808fac6c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808FAC70
    r30 = *(8 + r1); // lwz @ 0x808FAC74
    r0 = *(0x14 + r1); // lwz @ 0x808FAC78
    return;
}