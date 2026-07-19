/* Function at 0x80813110, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80813110(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80813118
    *(0x14 + r1) = r0; // stw @ 0x8081311C
    *(0xc + r1) = r31; // stw @ 0x80813120
    r0 = *(0 + r3); // lwz @ 0x80813124
    if (!=) goto 0x0x8081319c;
    /* li r3, 0x40 */ // 0x80813130
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x80813194;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80813148
    /* lis r3, 0 */ // 0x8081314C
    r4 = r4 + 0; // 0x80813150
}