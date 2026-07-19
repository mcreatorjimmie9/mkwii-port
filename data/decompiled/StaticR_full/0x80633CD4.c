/* Function at 0x80633CD4, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80633CD4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80633CE4
    r30 = r3;
    r0 = *(0x4c + r3); // lwz @ 0x80633CEC
    if (!=) goto 0x0x80633d38;
    r0 = *(0x50 + r3); // lbz @ 0x80633CF8
    if (!=) goto 0x0x80633d60;
    /* li r31, 1 */ // 0x80633D04
    *(0x4c + r3) = r31; // stw @ 0x80633D08
    r12 = *(0 + r3); // lwz @ 0x80633D0C
    r12 = *(0x14 + r12); // lwz @ 0x80633D10
    /* mtctr r12 */ // 0x80633D14
    /* bctrl  */ // 0x80633D18
    FUN_805A6900(); // bl 0x805A6900
    if (==) goto 0x0x80633d30;
    *(8 + r30) = r3; // stw @ 0x80633D28
    /* b 0x80633d60 */ // 0x80633D2C
    *(0x50 + r30) = r31; // stb @ 0x80633D30
    /* b 0x80633d60 */ // 0x80633D34
    *(0x30 + r3) = r4; // sth @ 0x80633D3C
    if (==) goto 0x0x80633d58;
    /* lis r3, 0 */ // 0x80633D44
    /* clrlwi r4, r4, 0x10 */ // 0x80633D48
    r3 = *(0 + r3); // lwz @ 0x80633D4C
    FUN_805A6828(r3); // bl 0x805A6828
    *(8 + r30) = r3; // stw @ 0x80633D54
    /* li r0, 0 */ // 0x80633D58
    *(0x4c + r30) = r0; // stw @ 0x80633D5C
    r0 = *(0x14 + r1); // lwz @ 0x80633D60
    r31 = *(0xc + r1); // lwz @ 0x80633D64
    r30 = *(8 + r1); // lwz @ 0x80633D68
    return;
}