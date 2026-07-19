/* Function at 0x807876D8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807876D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x807876E0
    *(0xc + r1) = r31; // stw @ 0x807876E8
    *(8 + r1) = r30; // stw @ 0x807876EC
    r0 = *(0 + r3); // lwz @ 0x807876F0
    if (!=) goto 0x0x80787760;
    /* li r3, 0x3c */ // 0x807876FC
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x80787758;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80787714
    /* lis r4, 0 */ // 0x80787718
    r3 = r3 + 0; // 0x8078771C
    *(0 + r30) = r3; // stw @ 0x80787720
}