/* Function at 0x80647044, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80647044(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x8064704C
    *(0x14 + r1) = r0; // stw @ 0x80647050
    *(0xc + r1) = r31; // stw @ 0x80647054
    r0 = *(0 + r3); // lwz @ 0x80647058
    if (!=) goto 0x0x806470b8;
    /* li r3, 0x40 */ // 0x80647064
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x806470b0;
    /* lis r4, 0 */ // 0x80647078
    r4 = r4 + 0; // 0x8064707C
    *(0x10 + r3) = r4; // stw @ 0x80647080
    FUN_805E3430(r4, r4); // bl 0x805E3430
}