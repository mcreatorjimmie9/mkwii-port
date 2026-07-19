/* Function at 0x807EFEA0, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807EFEA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x807EFEB8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807EFEC0
    r29 = r3;
    if (==) goto 0x0x807efed4;
    if (!=) goto 0x0x807eff70;
    r3 = *(0xb8 + r3); // lwz @ 0x807EFED4
    r12 = *(0 + r3); // lwz @ 0x807EFED8
    r12 = *(0xc + r12); // lwz @ 0x807EFEDC
    /* mtctr r12 */ // 0x807EFEE0
    /* bctrl  */ // 0x807EFEE4
    r3 = *(0xb8 + r29); // lwz @ 0x807EFEE8
    r4 = r29 + 0x30; // 0x807EFEEC
    r12 = *(0 + r3); // lwz @ 0x807EFEF0
    r12 = *(0x74 + r12); // lwz @ 0x807EFEF4
    /* mtctr r12 */ // 0x807EFEF8
    /* bctrl  */ // 0x807EFEFC
    r3 = *(0xb8 + r29); // lwz @ 0x807EFF00
    r12 = *(0 + r3); // lwz @ 0x807EFF04
    r12 = *(0x80 + r12); // lwz @ 0x807EFF08
    /* mtctr r12 */ // 0x807EFF0C
    /* bctrl  */ // 0x807EFF10
    /* li r0, 2 */ // 0x807EFF14
    *(0xb0 + r29) = r0; // stw @ 0x807EFF18
    r3 = r29;
    /* li r4, 0 */ // 0x807EFF20
    r12 = *(0 + r29); // lwz @ 0x807EFF24
    r12 = *(0x68 + r12); // lwz @ 0x807EFF28
    /* mtctr r12 */ // 0x807EFF2C
    /* bctrl  */ // 0x807EFF30
    r12 = *(0 + r29); // lwz @ 0x807EFF34
    r3 = r29;
    r12 = *(0x90 + r12); // lwz @ 0x807EFF3C
    /* mtctr r12 */ // 0x807EFF40
    /* bctrl  */ // 0x807EFF44
    r0 = *(0xbc + r29); // lbz @ 0x807EFF48
    /* li r3, 1 */ // 0x807EFF4C
    *(0xb5 + r29) = r3; // stb @ 0x807EFF50
    if (==) goto 0x0x807eff70;
    r3 = r30;
    /* li r4, 0 */ // 0x807EFF60
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 0 */ // 0x807EFF68
    *(0xbc + r29) = r0; // stb @ 0x807EFF6C
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x807EFF74
    r30 = *(0x18 + r1); // lwz @ 0x807EFF78
    r29 = *(0x14 + r1); // lwz @ 0x807EFF7C
    r0 = *(0x24 + r1); // lwz @ 0x807EFF80
    return;
}