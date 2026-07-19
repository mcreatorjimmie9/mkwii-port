/* Function at 0x806FB568, size=360 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r21 */
/* Calls: 6 function(s) */

int FUN_806FB568(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -144(r1) */
    /* saved r21 */
    /* stmw r21, 0x64(r1) */ // 0x806FB574
    r28 = r3;
    r27 = r3 + 0x4200; // 0x806FB57C
    r0 = *(0x20 + r3); // lbz @ 0x806FB580
    if (!=) goto 0x0x806fb5d0;
    /* li r0, 0 */ // 0x806FB58C
    *(0x1c + r3) = r0; // stw @ 0x806FB590
    r3 = *(0x758c + r3); // lwz @ 0x806FB594
    r12 = *(0x18 + r3); // lwz @ 0x806FB598
    r12 = *(0xc + r12); // lwz @ 0x806FB59C
    /* mtctr r12 */ // 0x806FB5A0
    /* bctrl  */ // 0x806FB5A4
    if (!=) goto 0x0x806fb5bc;
    /* li r0, 1 */ // 0x806FB5B0
    *(0x20 + r28) = r0; // stb @ 0x806FB5B4
    /* b 0x806fb5d0 */ // 0x806FB5B8
    r3 = *(0x758c + r28); // lwz @ 0x806FB5BC
    r0 = *(4 + r3); // lwz @ 0x806FB5C0
    *(0x1c + r28) = r0; // stw @ 0x806FB5C4
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fb5d4 */ // 0x806FB5CC
    /* li r3, 0 */ // 0x806FB5D0
    if (==) goto 0x0x806fb5ec;
    /* li r0, 6 */ // 0x806FB5DC
    *(0x757c + r28) = r3; // stw @ 0x806FB5E0
    *(0x14 + r28) = r0; // stw @ 0x806FB5E4
    /* b 0x806fb7a0 */ // 0x806FB5E8
    /* lis r31, 1 */ // 0x806FB5EC
    /* li r26, 0 */ // 0x806FB5F0
    /* li r23, 0 */ // 0x806FB5F4
    /* li r24, 0x26 */ // 0x806FB5F8
    r30 = r31 + -0x7340; // 0x806FB5FC
    /* li r25, 1 */ // 0x806FB600
    /* lis r29, 0 */ // 0x806FB604
    /* clrlwi r5, r26, 0x18 */ // 0x806FB608
    r6 = *(0 + r29); // lwz @ 0x806FB60C
    r0 = r30 * r5; // 0x806FB610
    r3 = *(0x14 + r6); // lwz @ 0x806FB614
    r3 = r3 + r0; // 0x806FB618
    r3 = *(8 + r3); // lwz @ 0x806FB61C
    /* addis r0, r3, -0x524b */ // 0x806FB620
    if (!=) goto 0x0x806fb748;
    r0 = r31 + -0x6c10; // 0x806FB62C
    r0 = r0 * r5; // 0x806FB634
    r3 = r6 + r0; // 0x806FB638
    r21 = r3 + 0x38; // 0x806FB63C
    r22 = r21 + 0x16; // 0x806FB640
    r3 = r22;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fb66c;
    r5 = *(8 + r1); // lhz @ 0x806FB654
    /* li r4, 0 */ // 0x806FB65C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x806FB664
    /* b 0x806fb69c */ // 0x806FB668
    r3 = r22;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x806fb698;
    r5 = *(8 + r1); // lhz @ 0x806FB680
    /* li r4, 6 */ // 0x806FB688
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x806FB690
    /* b 0x806fb69c */ // 0x806FB694
    /* li r0, 0 */ // 0x806FB698
    if (==) goto 0x0x806fb748;
    /* addis r6, r21, 1 */ // 0x806FB6A4
    /* li r3, 0x79b */ // 0x806FB6B0
    r6 = r6 + -0x6c66; // 0x806FB6B4
    FUN_805E3430(r4, r5, r3, r6); // bl 0x805E3430
    /* addis r4, r21, 1 */ // 0x806FB6BC
    r0 = *(-0x6c67 + r4); // lbz @ 0x806FB6C0
    if (!=) goto 0x0x806fb6dc;
}