/* Function at 0x80731E70, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80731E70(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80731E80
    r30 = r3;
    r31 = *(0x530 + r3); // lwz @ 0x80731E88
    r3 = *(0x58 + r31); // lwz @ 0x80731E8C
    if (==) goto 0x0x80731ee8;
    r3 = r3 + 0x74; // 0x80731E98
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80731eb0;
    /* li r3, 0 */ // 0x80731EA8
    /* b 0x80731eb4 */ // 0x80731EAC
    r3 = *(0xc + r3); // lwz @ 0x80731EB0
    /* li r0, 0 */ // 0x80731EB8
    if (==) goto 0x0x80731ec8;
    if (!=) goto 0x0x80731ecc;
    /* li r0, 1 */ // 0x80731EC8
}