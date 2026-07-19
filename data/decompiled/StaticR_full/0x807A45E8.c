/* Function at 0x807A45E8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807A45E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807A45F0
    *(0x14 + r1) = r0; // stw @ 0x807A45F4
    *(0xc + r1) = r31; // stw @ 0x807A45F8
    r0 = *(0 + r3); // lwz @ 0x807A45FC
    if (!=) goto 0x0x807a4650;
    /* li r3, 0x18 */ // 0x807A4608
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x807a4648;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x807A4620
    /* li r3, 0 */ // 0x807A4624
    r4 = r4 + 0; // 0x807A4628
}