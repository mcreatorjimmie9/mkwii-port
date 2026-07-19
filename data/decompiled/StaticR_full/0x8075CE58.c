/* Function at 0x8075CE58, size=256 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_8075CE58(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x5c + r1) = r31; // stw @ 0x8075CE64
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8075CE6C
    r12 = *(0xb4 + r12); // lwz @ 0x8075CE70
    /* mtctr r12 */ // 0x8075CE74
    /* bctrl  */ // 0x8075CE78
    if (==) goto 0x0x8075cf44;
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r12 = *(0 + r31); // lwz @ 0x8075CE8C
    r3 = r31;
    r12 = *(0xb4 + r12); // lwz @ 0x8075CE94
    /* mtctr r12 */ // 0x8075CE98
    /* bctrl  */ // 0x8075CE9C
    r12 = *(0 + r3); // lwz @ 0x8075CEA0
    r4 = r31 + 0x58; // 0x8075CEA4
    r5 = r31 + 0x3c; // 0x8075CEA8
    r6 = r31 + 0x168; // 0x8075CEAC
    r12 = *(0x10 + r12); // lwz @ 0x8075CEB0
    /* mtctr r12 */ // 0x8075CEB4
    /* bctrl  */ // 0x8075CEB8
    r3 = r31;
    FUN_808A1BCC(r6, r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x8075CEC8
    /* li r5, 2 */ // 0x8075CECC
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lis r4, 0 */ // 0x8075CED4
    r4 = r4 + 0; // 0x8075CEDC
    FUN_80743DF8(r4, r3, r4, r5); // bl 0x80743DF8
    r3 = r31;
    FUN_808A1BCC(r3, r4, r5, r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x8075CEF4
    /* li r5, 3 */ // 0x8075CEF8
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x8075CF00
    /* lfs f1, 0xc(r1) */ // 0x8075CF04
    /* lfs f0, 0x10(r1) */ // 0x8075CF08
    /* stfs f2, 0x2c(r1) */ // 0x8075CF0C
    /* stfs f1, 0x3c(r1) */ // 0x8075CF10
    /* stfs f0, 0x4c(r1) */ // 0x8075CF14
    r0 = *(0x154 + r31); // lwz @ 0x8075CF18
    if (==) goto 0x0x8075cf44;
    r3 = *(0xe4 + r31); // lwz @ 0x8075CF24
    r5 = r31 + 0x3c; // 0x8075CF2C
    r6 = r31 + 0x168; // 0x8075CF30
    r12 = *(0 + r3); // lwz @ 0x8075CF34
    r12 = *(0x10 + r12); // lwz @ 0x8075CF38
    /* mtctr r12 */ // 0x8075CF3C
    /* bctrl  */ // 0x8075CF40
    r0 = *(0x64 + r1); // lwz @ 0x8075CF44
    r31 = *(0x5c + r1); // lwz @ 0x8075CF48
    return;
}