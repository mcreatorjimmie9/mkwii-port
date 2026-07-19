/* Function at 0x8079FFF8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8079FFF8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807A0000
    *(0x14 + r1) = r0; // stw @ 0x807A0004
    *(0xc + r1) = r31; // stw @ 0x807A0008
    r0 = *(0 + r3); // lwz @ 0x807A000C
    if (!=) goto 0x0x807a0044;
    /* li r3, 0x10 */ // 0x807A0018
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x807a003c;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A0030
    r3 = r3 + 0; // 0x807A0034
    *(0 + r31) = r3; // stw @ 0x807A0038
}