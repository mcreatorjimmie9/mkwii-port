/* Function at 0x80871890, size=332 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 7 function(s) */

int FUN_80871890(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8087189C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r6 = *(0x64 + r3); // lwz @ 0x808718AC
    r3 = *(0xc + r6); // lwz @ 0x808718B0
    r0 = *(8 + r3); // lwz @ 0x808718B4
    if (!=) goto 0x0x808719c8;
    r30 = *(0x240 + r4); // lwz @ 0x808718C4
    if (!=) goto 0x0x808718d4;
    /* li r31, 0 */ // 0x808718CC
    /* b 0x8087192c */ // 0x808718D0
    /* lis r31, 0 */ // 0x808718D4
    r31 = r31 + 0; // 0x808718D8
    if (==) goto 0x0x80871928;
    r12 = *(0 + r28); // lwz @ 0x808718E0
    r3 = r28;
    r12 = *(0x28 + r12); // lwz @ 0x808718E8
    /* mtctr r12 */ // 0x808718EC
    /* bctrl  */ // 0x808718F0
    /* b 0x8087190c */ // 0x808718F4
    if (!=) goto 0x0x80871908;
    /* li r0, 1 */ // 0x80871900
    /* b 0x80871918 */ // 0x80871904
    r3 = *(0 + r3); // lwz @ 0x80871908
    if (!=) goto 0x0x808718f8;
    /* li r0, 0 */ // 0x80871914
    if (==) goto 0x0x80871928;
    r31 = r28;
    /* b 0x8087192c */ // 0x80871924
    /* li r31, 0 */ // 0x80871928
    r0 = *(0x188 + r27); // lwz @ 0x8087192C
    *(0x1b4 + r27) = r31; // stw @ 0x80871930
    if (<) goto 0x0x80871990;
    /* lis r3, 0 */ // 0x8087193C
    r3 = *(0 + r3); // lwz @ 0x80871940
    r3 = *(0 + r3); // lwz @ 0x80871944
    r3 = *(0 + r3); // lwz @ 0x80871948
    FUN_808CF8D8(r3); // bl 0x808CF8D8
    if (!=) goto 0x0x80871990;
    /* li r3, 0x60 */ // 0x80871958
    FUN_808BEEEC(r3); // bl 0x808BEEEC
    *(0xda0 + r3) = r29; // stw @ 0x80871960
    r31 = r3;
    /* li r3, 0x6b */ // 0x80871968
    FUN_808B6A8C(r3, r3); // bl 0x808B6A8C
    *(0x908 + r3) = r31; // stw @ 0x80871970
    /* li r4, 0x60 */ // 0x80871974
    /* li r5, 0 */ // 0x80871978
    r12 = *(0 + r3); // lwz @ 0x8087197C
    r12 = *(0x24 + r12); // lwz @ 0x80871980
    /* mtctr r12 */ // 0x80871984
    /* bctrl  */ // 0x80871988
    /* b 0x808719c8 */ // 0x8087198C
    r3 = r31;
    r4 = r29;
    /* li r5, 0xff */ // 0x80871998
    FUN_80872140(r3, r4, r5); // bl 0x80872140
    r3 = r28;
    r4 = r29 + 0x9fb; // 0x808719A4
    /* li r5, 0 */ // 0x808719A8
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* li r3, 0x6b */ // 0x808719B0
    FUN_808B6A8C(r3, r4, r5, r3); // bl 0x808B6A8C
    r4 = r28;
    r5 = r30;
    r6 = r29;
    FUN_808B75E8(r3, r4, r5, r6); // bl 0x808B75E8
    r0 = *(0x24 + r1); // lwz @ 0x808719CC
    return;
}