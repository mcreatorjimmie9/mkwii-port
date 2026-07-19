/* Function at 0x8079C004, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8079C004(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x8079C00C
    *(0x14 + r1) = r0; // stw @ 0x8079C010
    *(0xc + r1) = r31; // stw @ 0x8079C014
    r0 = *(0 + r3); // lwz @ 0x8079C018
    if (!=) goto 0x0x8079c05c;
    /* li r3, 0x2c */ // 0x8079C024
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x8079c054;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8079C03C
    /* li r0, 0 */ // 0x8079C040
    r3 = r3 + 0; // 0x8079C044
}