/* Function at 0x8067DCDC, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_8067DCDC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8067DCEC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8067DCF4
    r30 = r3;
    if (==) goto 0x0x8067dda8;
    r0 = *(0x1794 + r3); // lwz @ 0x8067DD00
    /* lis r4, 0 */ // 0x8067DD04
    r4 = r4 + 0; // 0x8067DD08
    *(0 + r3) = r4; // stw @ 0x8067DD0C
    if (==) goto 0x0x8067dd30;
    r3 = r0;
    /* li r4, 1 */ // 0x8067DD1C
    r12 = *(0 + r3); // lwz @ 0x8067DD20
    r12 = *(8 + r12); // lwz @ 0x8067DD24
    /* mtctr r12 */ // 0x8067DD28
    /* bctrl  */ // 0x8067DD2C
    /* addic. r3, r30, 0x19fc */ // 0x8067DD30
    if (==) goto 0x0x8067dd40;
    /* li r4, 0 */ // 0x8067DD38
    FUN_806A0540(r4); // bl 0x806A0540
    /* addic. r3, r30, 0x1798 */ // 0x8067DD40
    if (==) goto 0x0x8067dd50;
    /* li r4, 0 */ // 0x8067DD48
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x1320; // 0x8067DD50
    /* li r4, -1 */ // 0x8067DD54
    FUN_806A32BC(r4, r3, r4); // bl 0x806A32BC
    r3 = r30 + 0xd58; // 0x8067DD5C
    /* li r4, -1 */ // 0x8067DD60
    FUN_806A17DC(r3, r4, r3, r4); // bl 0x806A17DC
    r3 = r30 + 0x8e4; // 0x8067DD68
    /* li r4, -1 */ // 0x8067DD6C
    FUN_806A32BC(r3, r4, r3, r4); // bl 0x806A32BC
    r3 = r30 + 0x31c; // 0x8067DD74
    /* li r4, -1 */ // 0x8067DD78
    FUN_806A17DC(r3, r4, r3, r4); // bl 0x806A17DC
    r3 = r30 + 0xf8; // 0x8067DD80
    /* li r4, -1 */ // 0x8067DD84
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x8067DD90
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8067dda8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8067DDAC
    r30 = *(8 + r1); // lwz @ 0x8067DDB0
    r0 = *(0x14 + r1); // lwz @ 0x8067DDB4
    return;
}