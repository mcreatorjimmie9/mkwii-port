/* Function at 0x807F2CA0, size=152 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807F2CA0(int r3, int r4, int r5)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x807F2CB0
    *(0xc8 + r1) = r30; // stw @ 0x807F2CB4
    *(0xc4 + r1) = r29; // stw @ 0x807F2CB8
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x807F2CC0
    r12 = *(0x30 + r12); // lwz @ 0x807F2CC4
    /* mtctr r12 */ // 0x807F2CC8
    /* bctrl  */ // 0x807F2CCC
    /* lis r4, 0x101 */ // 0x807F2CD0
    r0 = *(0x20 + r3); // lwz @ 0x807F2CD4
    r3 = r4 + 0x101; // 0x807F2CD8
    /* andc. r0, r3, r0 */ // 0x807F2CDC
    if (!=) goto 0x0x807f2cfc;
    /* lis r3, 0 */ // 0x807F2CE4
    r3 = *(0 + r3); // lwz @ 0x807F2CE8
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f2cfc;
    /* li r31, 1 */ // 0x807F2CF8
    if (!=) goto 0x0x807f2dec;
    /* lis r4, 0 */ // 0x807F2D04
    r4 = r4 + 0; // 0x807F2D0C
    /* li r5, 0 */ // 0x807F2D10
    r4 = r4 + 0x96; // 0x807F2D14
    FUN_805E3430(r4, r3, r4, r5, r4); // bl 0x805E3430
    FUN_805E3430(r4, r5, r4, r3); // bl 0x805E3430
    r3 = r29;
    FUN_808A1BCC(r4, r3, r3); // bl 0x808A1BCC
    r4 = r29 + 0x58; // 0x807F2D30
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
}