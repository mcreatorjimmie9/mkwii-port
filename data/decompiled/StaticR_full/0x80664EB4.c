/* Function at 0x80664EB4, size=512 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 4 function(s) */

int FUN_80664EB4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    *(0x34 + r1) = r0; // stw @ 0x80664EC0
    /* stmw r23, 0xc(r1) */ // 0x80664EC4
    r31 = r5;
    r30 = r3;
    r25 = r4;
    r23 = r31;
    if (!=) goto 0x0x8066501c;
    /* lis r24, 0 */ // 0x80664EE0
    r24 = r24 + 0; // 0x80664EE4
    if (==) goto 0x0x80664f34;
    r12 = *(0 + r25); // lwz @ 0x80664EEC
    r3 = r25;
    r12 = *(0xc + r12); // lwz @ 0x80664EF4
    /* mtctr r12 */ // 0x80664EF8
    /* bctrl  */ // 0x80664EFC
    /* b 0x80664f18 */ // 0x80664F00
    if (!=) goto 0x0x80664f14;
    /* li r0, 1 */ // 0x80664F0C
    /* b 0x80664f24 */ // 0x80664F10
    r3 = *(0 + r3); // lwz @ 0x80664F14
    if (!=) goto 0x0x80664f04;
    /* li r0, 0 */ // 0x80664F20
    if (==) goto 0x0x80664f34;
    r0 = r25;
    /* b 0x80664f38 */ // 0x80664F30
    /* li r0, 0 */ // 0x80664F34
    if (==) goto 0x0x80664f48;
    /* li r23, 1 */ // 0x80664F40
    /* b 0x8066501c */ // 0x80664F44
    /* lis r24, 0 */ // 0x80664F4C
    r24 = r24 + 0; // 0x80664F50
    if (==) goto 0x0x80664fa0;
    r12 = *(0 + r25); // lwz @ 0x80664F58
    r3 = r25;
    r12 = *(0xc + r12); // lwz @ 0x80664F60
    /* mtctr r12 */ // 0x80664F64
    /* bctrl  */ // 0x80664F68
    /* b 0x80664f84 */ // 0x80664F6C
    if (!=) goto 0x0x80664f80;
    /* li r0, 1 */ // 0x80664F78
    /* b 0x80664f90 */ // 0x80664F7C
    r3 = *(0 + r3); // lwz @ 0x80664F80
    if (!=) goto 0x0x80664f70;
    /* li r0, 0 */ // 0x80664F8C
    if (==) goto 0x0x80664fa0;
    r0 = r25;
    /* b 0x80664fa4 */ // 0x80664F9C
    /* li r0, 0 */ // 0x80664FA0
    if (==) goto 0x0x80664fb4;
    /* li r23, 1 */ // 0x80664FAC
    /* b 0x8066501c */ // 0x80664FB0
    /* lis r24, 0 */ // 0x80664FB8
    r24 = r24 + 0; // 0x80664FBC
    if (==) goto 0x0x8066500c;
    r12 = *(0 + r25); // lwz @ 0x80664FC4
    r3 = r25;
    r12 = *(0xc + r12); // lwz @ 0x80664FCC
    /* mtctr r12 */ // 0x80664FD0
    /* bctrl  */ // 0x80664FD4
    /* b 0x80664ff0 */ // 0x80664FD8
    if (!=) goto 0x0x80664fec;
    /* li r0, 1 */ // 0x80664FE4
    /* b 0x80664ffc */ // 0x80664FE8
    r3 = *(0 + r3); // lwz @ 0x80664FEC
    if (!=) goto 0x0x80664fdc;
    /* li r0, 0 */ // 0x80664FF8
    if (==) goto 0x0x8066500c;
    r0 = r25;
    /* b 0x80665010 */ // 0x80665008
    /* li r0, 0 */ // 0x8066500C
    if (==) goto 0x0x8066501c;
    /* li r23, 1 */ // 0x80665018
    if (==) goto 0x0x80665030;
    r3 = r30;
    r4 = r25;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r29 = *(0x14 + r25); // lwz @ 0x80665030
    r28 = r25 + 0x14; // 0x80665034
    /* lis r24, 0 */ // 0x80665038
    /* lis r25, 0 */ // 0x8066503C
    /* lis r26, 0 */ // 0x80665040
    /* lis r27, 0 */ // 0x80665044
    /* b 0x80665098 */ // 0x80665048
    if (!=) goto 0x0x80665068;
    r3 = r24 + 0; // 0x80665054
    r5 = r25 + 0; // 0x80665058
    /* li r4, 0x23d */ // 0x8066505C
    /* crclr cr1eq */ // 0x80665060
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    /* addic. r23, r29, -4 */ // 0x80665068
    if (!=) goto 0x0x80665084;
    r3 = r26 + 0; // 0x80665070
    r5 = r27 + 0; // 0x80665074
    /* li r4, 0x193 */ // 0x80665078
    /* crclr cr1eq */ // 0x8066507C
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    r3 = r30;
    r4 = r23;
    r5 = r31;
    FUN_80664EB4(r3, r4, r5); // bl 0x80664EB4
    r29 = *(0 + r29); // lwz @ 0x80665094
    if (!=) goto 0x0x8066504c;
    r0 = *(0x34 + r1); // lwz @ 0x806650A4
    return;
}