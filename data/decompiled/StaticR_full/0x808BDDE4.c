/* Function at 0x808BDDE4, size=648 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 13 function(s) */

int FUN_808BDDE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* stmw r27, 0x2c(r1) */ // 0x808BDDF0
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = *(0x240 + r4); // lwz @ 0x808BDE00
    if (==) goto 0x0x808bde18;
    if (==) goto 0x0x808be058;
    /* b 0x808bdeb4 */ // 0x808BDE14
    /* lis r3, 0 */ // 0x808BDE18
    r3 = *(0 + r3); // lwz @ 0x808BDE1C
    r3 = *(0 + r3); // lwz @ 0x808BDE20
    r30 = *(0x204 + r3); // lwz @ 0x808BDE24
    if (!=) goto 0x0x808bde38;
    /* li r30, 0 */ // 0x808BDE30
    /* b 0x808bde8c */ // 0x808BDE34
    /* lis r27, 0 */ // 0x808BDE38
    r27 = r27 + 0; // 0x808BDE3C
    if (==) goto 0x0x808bde88;
    r12 = *(0 + r30); // lwz @ 0x808BDE44
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BDE4C
    /* mtctr r12 */ // 0x808BDE50
    /* bctrl  */ // 0x808BDE54
    /* b 0x808bde70 */ // 0x808BDE58
    if (!=) goto 0x0x808bde6c;
    /* li r0, 1 */ // 0x808BDE64
    /* b 0x808bde7c */ // 0x808BDE68
    r3 = *(0 + r3); // lwz @ 0x808BDE6C
    if (!=) goto 0x0x808bde5c;
    /* li r0, 0 */ // 0x808BDE78
    if (==) goto 0x0x808bde88;
    /* b 0x808bde8c */ // 0x808BDE84
    /* li r30, 0 */ // 0x808BDE88
    /* li r0, 0 */ // 0x808BDE8C
    /* mulli r0, r0, 0xc */ // 0x808BDE90
    r3 = r30 + r0; // 0x808BDE94
    r0 = *(0x5c + r3); // lbz @ 0x808BDE98
    if (==) goto 0x0x808be058;
    r3 = r28;
    r4 = r29;
    FUN_808B3CF4(r3, r4); // bl 0x808B3CF4
    /* b 0x808be058 */ // 0x808BDEB0
    /* lis r27, 0 */ // 0x808BDEB4
    r3 = *(0 + r27); // lwz @ 0x808BDEB8
    r3 = *(0x98 + r3); // lwz @ 0x808BDEBC
    *(0x13c + r3) = r31; // stw @ 0x808BDEC0
    r3 = *(0 + r27); // lwz @ 0x808BDEC4
    r3 = *(0 + r3); // lwz @ 0x808BDEC8
    r3 = *(0 + r3); // lwz @ 0x808BDECC
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808bdefc;
    r6 = *(0 + r27); // lwz @ 0x808BDEDC
    r3 = r28;
    r5 = r29;
    /* li r4, 0x6d */ // 0x808BDEE8
    r6 = *(0x98 + r6); // lwz @ 0x808BDEEC
    *(0x224 + r6) = r31; // stw @ 0x808BDEF0
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808be00c */ // 0x808BDEF8
    r3 = *(0 + r27); // lwz @ 0x808BDEFC
    r3 = *(0 + r3); // lwz @ 0x808BDF00
    r3 = *(0 + r3); // lwz @ 0x808BDF04
    FUN_808CF914(); // bl 0x808CF914
    if (==) goto 0x0x808bdf34;
    /* lis r4, 0 */ // 0x808BDF14
    r3 = r28;
    r6 = *(0 + r4); // lwz @ 0x808BDF1C
    r5 = r29;
    /* li r4, 0x6d */ // 0x808BDF24
    *(0xc20 + r6) = r31; // stw @ 0x808BDF28
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808be00c */ // 0x808BDF30
    r3 = *(0 + r27); // lwz @ 0x808BDF34
    r3 = *(0 + r3); // lwz @ 0x808BDF38
    r3 = *(0 + r3); // lwz @ 0x808BDF3C
    FUN_808CF934(); // bl 0x808CF934
    if (==) goto 0x0x808bdfec;
    /* lis r27, 0 */ // 0x808BDF4C
    /* lis r3, 0 */ // 0x808BDF50
    r5 = *(0 + r27); // lwz @ 0x808BDF54
    /* li r0, 0 */ // 0x808BDF58
    *(0xc20 + r5) = r31; // stw @ 0x808BDF60
    *(8 + r1) = r0; // stb @ 0x808BDF64
    r3 = *(0 + r3); // lwz @ 0x808BDF68
    *(0xc + r1) = r0; // stw @ 0x808BDF6C
    FUN_806F9214(r4); // bl 0x806F9214
    FUN_808BE624(); // bl 0x808BE624
    /* li r4, 0 */ // 0x808BDF78
    /* li r5, 0 */ // 0x808BDF7C
    /* b 0x808bdfb4 */ // 0x808BDF80
    r3 = r3 + r5; // 0x808BDF84
    r6 = *(0x29 + r3); // lbz @ 0x808BDF88
    if (==) goto 0x0x808bdfac;
    r0 = r4 + 1; // 0x808BDF94
    r3 = *(0 + r27); // lwz @ 0x808BDF98
    /* clrlwi r0, r0, 0x18 */ // 0x808BDF9C
    /* mulli r0, r0, 0xf0 */ // 0x808BDFA0
    r3 = r3 + r0; // 0x808BDFA4
    *(0xc20 + r3) = r6; // stw @ 0x808BDFA8
    r5 = r5 + 2; // 0x808BDFAC
    r4 = r4 + 1; // 0x808BDFB0
    r3 = *(0xc + r1); // lwz @ 0x808BDFB4
    /* li r0, 0xb */ // 0x808BDFB8
    r6 = *(0x26 + r3); // lhz @ 0x808BDFBC
    if (>=) goto 0x0x808bdfcc;
    r0 = r6;
    /* clrlwi r0, r0, 0x10 */ // 0x808BDFCC
    if (<) goto 0x0x808bdf84;
    r3 = r28;
    r5 = r29;
    /* li r4, 0x6d */ // 0x808BDFE0
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808be00c */ // 0x808BDFE8
    /* lis r3, 0 */ // 0x808BDFEC
    r3 = *(0 + r3); // lwz @ 0x808BDFF0
    *(0xc20 + r3) = r31; // stw @ 0x808BDFF4
    FUN_808BE624(r3); // bl 0x808BE624
    r3 = r28;
    r5 = r29;
    /* li r4, 0x6d */ // 0x808BE004
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* lis r3, 0 */ // 0x808BE00C
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x808BE014
    FUN_808F7FF8(r4, r3, r4); // bl 0x808F7FF8
    /* lis r3, 0 */ // 0x808BE01C
    r3 = *(0 + r3); // lwz @ 0x808BE020
    if (==) goto 0x0x808be058;
    r3 = *(0x14 + r3); // lwz @ 0x808BE02C
    if (==) goto 0x0x808be058;
    /* clrlwi r4, r30, 0x18 */ // 0x808BE038
    /* mulli r0, r4, 0xc */ // 0x808BE03C
    r3 = r3 + r0; // 0x808BE040
    r3 = *(0x18 + r3); // lwz @ 0x808BE044
    if (==) goto 0x0x808be058;
    /* li r5, 3 */ // 0x808BE050
    FUN_808E08F0(r5); // bl 0x808E08F0
    r0 = *(0x44 + r1); // lwz @ 0x808BE05C
    return;
}