/* Function at 0x807ADEE0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807ADEE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807ADEE8
    *(0x14 + r1) = r0; // stw @ 0x807ADEEC
    *(0xc + r1) = r31; // stw @ 0x807ADEF0
    r0 = *(0 + r3); // lwz @ 0x807ADEF4
    if (!=) goto 0x0x807adf50;
    /* li r3, 0x28 */ // 0x807ADF00
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x807adf48;
    /* lis r4, 0 */ // 0x807ADF14
    r4 = r4 + 0; // 0x807ADF18
    *(0x10 + r3) = r4; // stw @ 0x807ADF1C
    FUN_805E3430(r4, r4); // bl 0x805E3430
}