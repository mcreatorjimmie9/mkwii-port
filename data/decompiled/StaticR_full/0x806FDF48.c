/* Function at 0x806FDF48, size=320 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_806FDF48(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r6, 0 */ // 0x806FDF50
    *(0x24 + r1) = r29; // stw @ 0x806FDF60
    *(0x20 + r1) = r28; // stw @ 0x806FDF64
    r28 = r3;
    r5 = *(0 + r6); // lwzu @ 0x806FDF6C
    r0 = *(0x20 + r3); // lbz @ 0x806FDF70
    r4 = *(4 + r6); // lwz @ 0x806FDF74
    r0 = *(8 + r6); // lwz @ 0x806FDF7C
    *(8 + r1) = r5; // stw @ 0x806FDF80
    *(0xc + r1) = r4; // stw @ 0x806FDF84
    *(0x10 + r1) = r0; // stw @ 0x806FDF88
    if (!=) goto 0x0x806fdfd4;
    /* li r0, 0 */ // 0x806FDF90
    *(0x1c + r3) = r0; // stw @ 0x806FDF94
    r3 = *(0x758c + r3); // lwz @ 0x806FDF98
    r12 = *(0x18 + r3); // lwz @ 0x806FDF9C
    r12 = *(0xc + r12); // lwz @ 0x806FDFA0
    /* mtctr r12 */ // 0x806FDFA4
    /* bctrl  */ // 0x806FDFA8
    if (!=) goto 0x0x806fdfc0;
    /* li r0, 1 */ // 0x806FDFB4
    *(0x20 + r28) = r0; // stb @ 0x806FDFB8
    /* b 0x806fdfd4 */ // 0x806FDFBC
    r3 = *(0x758c + r28); // lwz @ 0x806FDFC0
    r0 = *(4 + r3); // lwz @ 0x806FDFC4
    *(0x1c + r28) = r0; // stw @ 0x806FDFC8
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fdfd8 */ // 0x806FDFD0
    /* li r3, 0 */ // 0x806FDFD4
    if (==) goto 0x0x806fdff0;
    /* li r0, 6 */ // 0x806FDFE0
    *(0x757c + r28) = r3; // stw @ 0x806FDFE4
    *(0x14 + r28) = r0; // stw @ 0x806FDFE8
    /* b 0x806fe050 */ // 0x806FDFEC
    /* li r29, 0 */ // 0x806FDFF4
    r4 = *(0 + r30); // lwz @ 0x806FDFF8
    r3 = r28 + 0x24; // 0x806FDFFC
    FUN_80705364(r3); // bl 0x80705364
    if (!=) goto 0x0x806fe038;
    r3 = r28 + 0x24; // 0x806FE00C
    FUN_80704FB4(r3, r3); // bl 0x80704FB4
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fe038;
    /* li r0, 6 */ // 0x806FE028
    *(0x757c + r28) = r31; // stw @ 0x806FE02C
    *(0x14 + r28) = r0; // stw @ 0x806FE030
    /* b 0x806fe050 */ // 0x806FE034
    r29 = r29 + 1; // 0x806FE038
    r30 = r30 + 4; // 0x806FE03C
    if (<) goto 0x0x806fdff8;
    /* li r0, 1 */ // 0x806FE048
    *(0x14 + r28) = r0; // stw @ 0x806FE04C
    r0 = *(0x20 + r28); // lbz @ 0x806FE050
    if (==) goto 0x0x806fe08c;
    r3 = *(0x758c + r28); // lwz @ 0x806FE05C
    r12 = *(0x18 + r3); // lwz @ 0x806FE060
    r12 = *(0x10 + r12); // lwz @ 0x806FE064
    /* mtctr r12 */ // 0x806FE068
    /* bctrl  */ // 0x806FE06C
    if (!=) goto 0x0x806fe084;
    /* li r0, 0 */ // 0x806FE078
    *(0x20 + r28) = r0; // stb @ 0x806FE07C
    /* b 0x806fe08c */ // 0x806FE080
    r3 = *(0x758c + r28); // lwz @ 0x806FE084
}