/* Function at 0x8070AE28, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8070AE28(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8070AE3C
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x8070AE44
    if (!=) goto 0x0x8070aef4;
    r0 = *(0x54 + r3); // lwz @ 0x8070AE50
    if (!=) goto 0x0x8070aef4;
    /* lis r3, 0 */ // 0x8070AE5C
    r3 = *(0 + r3); // lwz @ 0x8070AE60
    FUN_806F58E0(r3); // bl 0x806F58E0
    if (==) goto 0x0x8070aef4;
    /* lis r3, 0 */ // 0x8070AE70
    r3 = *(0 + r3); // lwz @ 0x8070AE74
    r3 = *(0 + r3); // lwz @ 0x8070AE78
    r30 = *(0x148 + r3); // lwz @ 0x8070AE7C
    if (!=) goto 0x0x8070ae90;
    /* li r30, 0 */ // 0x8070AE88
    /* b 0x8070aee4 */ // 0x8070AE8C
    /* lis r31, 0 */ // 0x8070AE90
    r31 = r31 + 0; // 0x8070AE94
    if (==) goto 0x0x8070aee0;
    r12 = *(0 + r30); // lwz @ 0x8070AE9C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8070AEA4
    /* mtctr r12 */ // 0x8070AEA8
    /* bctrl  */ // 0x8070AEAC
    /* b 0x8070aec8 */ // 0x8070AEB0
    if (!=) goto 0x0x8070aec4;
    /* li r0, 1 */ // 0x8070AEBC
    /* b 0x8070aed4 */ // 0x8070AEC0
    r3 = *(0 + r3); // lwz @ 0x8070AEC4
    if (!=) goto 0x0x8070aeb4;
    /* li r0, 0 */ // 0x8070AED0
    if (==) goto 0x0x8070aee0;
    /* b 0x8070aee4 */ // 0x8070AEDC
    /* li r30, 0 */ // 0x8070AEE0
    /* li r0, 2 */ // 0x8070AEE4
    *(0x54 + r29) = r0; // stw @ 0x8070AEE8
    r3 = r30;
    FUN_80649164(r3); // bl 0x80649164
    r0 = *(0x24 + r1); // lwz @ 0x8070AEF4
    r31 = *(0x1c + r1); // lwz @ 0x8070AEF8
    r30 = *(0x18 + r1); // lwz @ 0x8070AEFC
    r29 = *(0x14 + r1); // lwz @ 0x8070AF00
    return;
}