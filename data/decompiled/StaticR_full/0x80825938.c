/* Function at 0x80825938, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80825938(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80825940
    *(0x14 + r1) = r0; // stw @ 0x80825944
    *(0xc + r1) = r31; // stw @ 0x80825948
    r0 = *(0 + r3); // lwz @ 0x8082594C
    if (!=) goto 0x0x80825be0;
    /* li r3, 0x2c */ // 0x80825958
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x80825bd8;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80825970
    /* li r3, 0x15 */ // 0x80825974
    r4 = r4 + 0; // 0x80825978
}