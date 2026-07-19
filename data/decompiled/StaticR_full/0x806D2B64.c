/* Function at 0x806D2B64, size=444 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 10 function(s) */

int FUN_806D2B64(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806D2B6C
    *(0x14 + r1) = r29; // stw @ 0x806D2B7C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806D2B84
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806D2B8C
    r3 = *(0 + r3); // lwz @ 0x806D2B90
    r30 = *(0x310 + r3); // lwz @ 0x806D2B94
    if (!=) goto 0x0x806d2ba8;
    /* li r30, 0 */ // 0x806D2BA0
    /* b 0x806d2bfc */ // 0x806D2BA4
    /* lis r31, 0 */ // 0x806D2BA8
    r31 = r31 + 0; // 0x806D2BAC
    if (==) goto 0x0x806d2bf8;
    r12 = *(0 + r30); // lwz @ 0x806D2BB4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D2BBC
    /* mtctr r12 */ // 0x806D2BC0
    /* bctrl  */ // 0x806D2BC4
    /* b 0x806d2be0 */ // 0x806D2BC8
    if (!=) goto 0x0x806d2bdc;
    /* li r0, 1 */ // 0x806D2BD4
    /* b 0x806d2bec */ // 0x806D2BD8
    r3 = *(0 + r3); // lwz @ 0x806D2BDC
    if (!=) goto 0x0x806d2bcc;
    /* li r0, 0 */ // 0x806D2BE8
    if (==) goto 0x0x806d2bf8;
    /* b 0x806d2bfc */ // 0x806D2BF4
    /* li r30, 0 */ // 0x806D2BF8
    r0 = *(0x68 + r28); // lwz @ 0x806D2BFC
    if (==) goto 0x0x806d2c2c;
    if (==) goto 0x0x806d2c50;
    if (==) goto 0x0x806d2c74;
    if (==) goto 0x0x806d2c98;
    if (==) goto 0x0x806d2cbc;
    /* b 0x806d2cdc */ // 0x806D2C28
    r3 = r30 + 0x290; // 0x806D2C2C
    /* li r4, 0x1c52 */ // 0x806D2C30
    /* li r5, 0 */ // 0x806D2C34
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D2C3C
    /* li r4, 0x1c53 */ // 0x806D2C40
    /* li r5, 0 */ // 0x806D2C44
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* b 0x806d2cdc */ // 0x806D2C4C
    r3 = r30 + 0x290; // 0x806D2C50
    /* li r4, 0x1c84 */ // 0x806D2C54
    /* li r5, 0 */ // 0x806D2C58
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D2C60
    /* li r4, 0x1c85 */ // 0x806D2C64
    /* li r5, 0 */ // 0x806D2C68
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* b 0x806d2cdc */ // 0x806D2C70
    r3 = r30 + 0x290; // 0x806D2C74
    /* li r4, 0x1c84 */ // 0x806D2C78
    /* li r5, 0 */ // 0x806D2C7C
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D2C84
    /* li r4, 0x1cb6 */ // 0x806D2C88
    /* li r5, 0 */ // 0x806D2C8C
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* b 0x806d2cdc */ // 0x806D2C94
    r3 = r30 + 0x290; // 0x806D2C98
    /* li r4, 0x1ce8 */ // 0x806D2C9C
    /* li r5, 0 */ // 0x806D2CA0
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D2CA8
    /* li r4, 0x1ce9 */ // 0x806D2CAC
    /* li r5, 0 */ // 0x806D2CB0
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* b 0x806d2cdc */ // 0x806D2CB8
    r3 = r30 + 0x290; // 0x806D2CBC
    /* li r4, 0x1d4c */ // 0x806D2CC0
    /* li r5, 0 */ // 0x806D2CC4
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D2CCC
    /* li r4, 0x1d4d */ // 0x806D2CD0
    /* li r5, 0 */ // 0x806D2CD4
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r12 = *(0 + r28); // lwz @ 0x806D2CDC
    r3 = r28;
    r5 = r29;
    /* li r4, 0xc2 */ // 0x806D2CE8
    r12 = *(0x24 + r12); // lwz @ 0x806D2CEC
    /* mtctr r12 */ // 0x806D2CF0
    /* bctrl  */ // 0x806D2CF4
    /* li r0, 0 */ // 0x806D2CF8
    *(0x6c + r28) = r0; // stw @ 0x806D2CFC
    r31 = *(0x1c + r1); // lwz @ 0x806D2D00
    r30 = *(0x18 + r1); // lwz @ 0x806D2D04
    r29 = *(0x14 + r1); // lwz @ 0x806D2D08
    r28 = *(0x10 + r1); // lwz @ 0x806D2D0C
    r0 = *(0x24 + r1); // lwz @ 0x806D2D10
    return;
}