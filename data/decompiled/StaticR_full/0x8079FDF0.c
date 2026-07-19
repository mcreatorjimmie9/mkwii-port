/* Function at 0x8079FDF0, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8079FDF0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8079FDF8
    *(0xc + r1) = r31; // stw @ 0x8079FE00
    *(8 + r1) = r30; // stw @ 0x8079FE04
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x8079FE0C
    r4 = *(0x10 + r4); // lwz @ 0x8079FE10
    r0 = r4 + -0x35; // 0x8079FE14
    if (<=) goto 0x0x8079fe28;
    if (!=) goto 0x0x8079fe74;
    r0 = *(0x48 + r3); // lwz @ 0x8079FE28
    if (!=) goto 0x0x8079fe3c;
    /* b 0x8079fe74 */ // 0x8079FE34
    /* b 0x8079fe74 */ // 0x8079FE38
    /* lis r3, 0 */ // 0x8079FE3C
    r3 = *(0 + r3); // lwz @ 0x8079FE40
    FUN_80648900(r3); // bl 0x80648900
    r31 = r3;
    if (!=) goto 0x0x8079fe70;
    r0 = *(0x176 + r30); // lbz @ 0x8079FE54
    if (!=) goto 0x0x8079fe70;
    /* lis r3, 0 */ // 0x8079FE60
    /* li r4, 0 */ // 0x8079FE64
    r3 = *(0 + r3); // lwz @ 0x8079FE68
    FUN_807AAF14(r3, r4); // bl 0x807AAF14
    *(0x176 + r30) = r31; // stb @ 0x8079FE70
    r0 = *(0x14 + r1); // lwz @ 0x8079FE74
    r31 = *(0xc + r1); // lwz @ 0x8079FE78
    r30 = *(8 + r1); // lwz @ 0x8079FE7C
}