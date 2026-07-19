/* Function at 0x808170DC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808170DC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x808170E4
    *(0x14 + r1) = r0; // stw @ 0x808170E8
    *(0xc + r1) = r31; // stw @ 0x808170EC
    r0 = *(0 + r3); // lwz @ 0x808170F0
    if (!=) goto 0x0x8081718c;
    /* li r3, 0x20 */ // 0x808170FC
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x80817184;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80817114
    /* li r0, 0x200 */ // 0x80817118
    r3 = r3 + 0; // 0x8081711C
}