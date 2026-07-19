/* Function at 0x8080DE50, size=528 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r14 */
/* Calls: 9 function(s) */

int FUN_8080DE50(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r14 */
    /* lis r5, 0 */ // 0x8080DE58
    *(0x54 + r1) = r0; // stw @ 0x8080DE5C
    /* stmw r14, 8(r1) */ // 0x8080DE60
    r25 = r3;
    r26 = r4;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x8080DE78
    /* lis r5, 0 */ // 0x8080DE7C
    /* li r18, 0 */ // 0x8080DE80
    /* lis r4, 0 */ // 0x8080DE84
    r3 = r3 + 0; // 0x8080DE88
    r5 = r5 + 0; // 0x8080DE8C
    r4 = r4 + 0; // 0x8080DE90
    *(0 + r25) = r3; // stw @ 0x8080DE94
    /* lis r14, 0 */ // 0x8080DE98
    r3 = r25 + 0xb4; // 0x8080DE9C
    *(0xb4 + r25) = r5; // stw @ 0x8080DEA0
    /* li r5, 0 */ // 0x8080DEA4
    *(0xb8 + r25) = r18; // stw @ 0x8080DEA8
    *(0xbc + r25) = r18; // stw @ 0x8080DEAC
    *(0xc8 + r25) = r4; // stw @ 0x8080DEB0
    *(0xcc + r25) = r18; // stw @ 0x8080DEB4
    *(0xd0 + r25) = r18; // stw @ 0x8080DEB8
    r12 = *(0xb4 + r25); // lwz @ 0x8080DEBC
    r4 = *(0 + r14); // lwz @ 0x8080DEC0
    r12 = *(0xc + r12); // lwz @ 0x8080DEC4
    /* mtctr r12 */ // 0x8080DEC8
    /* bctrl  */ // 0x8080DECC
    /* lis r23, 0 */ // 0x8080DED0
    /* lis r22, 0 */ // 0x8080DED4
    /* lis r19, 0 */ // 0x8080DED8
    /* lis r20, 0 */ // 0x8080DEDC
    /* lis r21, 0 */ // 0x8080DEE0
    r22 = r22 + 0; // 0x8080DEE4
    r23 = r23 + 0; // 0x8080DEE8
    r20 = r20 + 0; // 0x8080DEF0
    r21 = r21 + 0; // 0x8080DEF4
    /* li r27, 0 */ // 0x8080DEF8
    /* li r29, 0 */ // 0x8080DEFC
    /* lis r24, 0 */ // 0x8080DF00
    /* b 0x8080e13c */ // 0x8080DF04
    /* li r3, 0xf0 */ // 0x8080DF08
    FUN_805E3430(r3); // bl 0x805E3430
    r16 = r3;
    if (==) goto 0x0x8080e0a4;
    r4 = r26;
    FUN_8089F578(r4, r5); // bl 0x8089F578
    *(0 + r16) = r19; // stw @ 0x8080DF28
    /* li r5, 0 */ // 0x8080DF30
    *(0xc4 + r16) = r20; // stw @ 0x8080DF34
    *(0xc8 + r16) = r18; // stw @ 0x8080DF38
    *(0xcc + r16) = r18; // stw @ 0x8080DF3C
    *(0xdc + r16) = r21; // stw @ 0x8080DF40
    *(0xe0 + r16) = r18; // stw @ 0x8080DF44
    *(0xe4 + r16) = r18; // stw @ 0x8080DF48
    r12 = *(0xdc + r16); // lwz @ 0x8080DF4C
    r4 = *(0 + r24); // lwz @ 0x8080DF50
    r12 = *(0xc + r12); // lwz @ 0x8080DF54
    /* mtctr r12 */ // 0x8080DF58
    /* bctrl  */ // 0x8080DF5C
    r12 = *(0xc4 + r16); // lwz @ 0x8080DF60
    r4 = *(0 + r24); // lwz @ 0x8080DF68
    /* li r5, 0 */ // 0x8080DF6C
    r12 = *(0xc + r12); // lwz @ 0x8080DF70
    /* mtctr r12 */ // 0x8080DF74
    /* bctrl  */ // 0x8080DF78
    /* li r30, 0 */ // 0x8080DF7C
    /* li r28, 0 */ // 0x8080DF80
    /* b 0x8080e098 */ // 0x8080DF84
    /* li r3, 0x128 */ // 0x8080DF88
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x8080e000;
    r4 = r26;
    FUN_8089F578(r4, r5); // bl 0x8089F578
    *(0 + r31) = r22; // stw @ 0x8080DFA8
    /* li r3, 0x7c */ // 0x8080DFAC
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
    r15 = r3;
    if (==) goto 0x0x8080dfd0;
    /* li r5, 0 */ // 0x8080DFC4
    FUN_805E3430(r4, r5); // bl 0x805E3430
    *(0 + r15) = r23; // stw @ 0x8080DFCC
    *(0x114 + r31) = r15; // stw @ 0x8080DFD0
    /* li r3, 0x7c */ // 0x8080DFD4
    FUN_805E3430(r5, r3); // bl 0x805E3430
    r15 = r3;
    if (==) goto 0x0x8080dff8;
    /* li r5, 0 */ // 0x8080DFEC
    FUN_805E3430(r4, r5); // bl 0x805E3430
    *(0 + r15) = r23; // stw @ 0x8080DFF4
    *(0x118 + r31) = r15; // stw @ 0x8080DFF8
    *(0x11c + r31) = r18; // stw @ 0x8080DFFC
    /* li r3, 0 */ // 0x8080E004
    if (<) goto 0x0x8080e01c;
    r0 = *(0xe0 + r16); // lwz @ 0x8080E00C
    if (>=) goto 0x0x8080e01c;
    /* li r3, 1 */ // 0x8080E018
    if (!=) goto 0x0x8080e038;
    r12 = *(0xdc + r16); // lwz @ 0x8080E024
    r12 = *(0x18 + r12); // lwz @ 0x8080E02C
    /* mtctr r12 */ // 0x8080E030
    /* bctrl  */ // 0x8080E034
    r4 = *(0xe4 + r16); // lwz @ 0x8080E038
    /* li r3, 0 */ // 0x8080E040
    /* stwx r31, r4, r28 */ // 0x8080E044
    if (<) goto 0x0x8080e05c;
    r0 = *(0xe0 + r16); // lwz @ 0x8080E04C
    if (>=) goto 0x0x8080e05c;
    /* li r3, 1 */ // 0x8080E058
}