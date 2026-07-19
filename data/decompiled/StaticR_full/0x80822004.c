/* Function at 0x80822004, size=464 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 11 function(s) */

int FUN_80822004(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x80822010
    r28 = r4;
    r31 = r5;
    r27 = r3;
    r29 = r6;
    r30 = r7;
    r4 = *(0 + r3); // lwz @ 0x80822028
    r3 = r31;
    FUN_8082795C(r3); // bl 0x8082795C
    r24 = r3;
    /* clrlwi r3, r3, 0x10 */ // 0x80822038
    FUN_80825DC4(r3); // bl 0x80825DC4
    r25 = r3;
    /* clrlwi r26, r24, 0x10 */ // 0x80822044
    /* li r22, 0 */ // 0x80822048
    /* li r23, 0 */ // 0x8082204C
    /* b 0x80822078 */ // 0x80822050
    r3 = *(4 + r27); // lwz @ 0x80822054
    /* lwzx r4, r3, r23 */ // 0x80822058
    r0 = *(0xc + r4); // lha @ 0x8082205C
    if (!=) goto 0x0x80822070;
    r3 = r27;
    FUN_80820FFC(r3); // bl 0x80820FFC
    r23 = r23 + 4; // 0x80822070
    r22 = r22 + 1; // 0x80822074
    r0 = *(0x14 + r27); // lwz @ 0x80822078
    if (<) goto 0x0x80822054;
    r4 = *(0x10 + r27); // lwz @ 0x80822084
    r0 = *(8 + r27); // lwz @ 0x80822088
    if (<) goto 0x0x808220b8;
    if (!=) goto 0x0x808220b0;
    r3 = *(0 + r27); // lwz @ 0x8082209C
    /* clrlwi r6, r24, 0x10 */ // 0x808220A0
    /* li r4, 3 */ // 0x808220A4
    /* li r5, 0xc */ // 0x808220A8
    FUN_80827458(r4, r5); // bl 0x80827458
    /* li r3, 0 */ // 0x808220B0
    /* b 0x808221c0 */ // 0x808220B4
    r0 = r4 + 1; // 0x808220B8
    *(0x10 + r27) = r0; // stw @ 0x808220BC
    /* slwi r0, r4, 2 */ // 0x808220C0
    r3 = *(4 + r27); // lwz @ 0x808220C4
    r5 = r31;
    r4 = *(0 + r27); // lwz @ 0x808220CC
    /* lwzx r31, r3, r0 */ // 0x808220D0
    r6 = r29;
    r7 = r30;
    /* clrlwi r8, r25, 0x18 */ // 0x808220DC
    r3 = r31;
    FUN_80828EC8(r6, r7, r3); // bl 0x80828EC8
    r3 = r27;
    r4 = r31;
    FUN_80821284(r3, r3, r4); // bl 0x80821284
    *(0x6e + r31) = r28; // sth @ 0x808220F4
    *(0x70 + r31) = r28; // sth @ 0x808220FC
    if (==) goto 0x0x80822118;
    /* clrlwi r0, r24, 0x18 */ // 0x80822104
    if (!=) goto 0x0x80822118;
    r3 = r31;
    FUN_8082E20C(r3); // bl 0x8082E20C
    if (==) goto 0x0x8082212c;
    r3 = r31;
    FUN_80828374(r3, r3); // bl 0x80828374
    /* b 0x80822160 */ // 0x80822128
    if (==) goto 0x0x8082214c;
    r12 = *(0 + r31); // lwz @ 0x80822134
    r3 = r31;
    r12 = *(0x34 + r12); // lwz @ 0x8082213C
    /* mtctr r12 */ // 0x80822140
    /* bctrl  */ // 0x80822144
    /* b 0x80822160 */ // 0x80822148
    r12 = *(0 + r31); // lwz @ 0x8082214C
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x80822154
    /* mtctr r12 */ // 0x80822158
    /* bctrl  */ // 0x8082215C
    r0 = *(0x7c + r31); // lwz @ 0x80822160
    r0 = r0 | 2; // 0x80822168
    *(0x7c + r31) = r0; // stw @ 0x8082216C
    if (==) goto 0x0x808221b0;
    r0 = *(0x78 + r31); // lwz @ 0x80822174
    /* rlwinm. r0, r0, 0, 0xa, 0xa */ // 0x80822178
    if (==) goto 0x0x80822188;
    r3 = r31;
    FUN_8082E9DC(r3); // bl 0x8082E9DC
    r0 = *(0x78 + r31); // lwz @ 0x80822188
    /* rlwinm. r0, r0, 0, 9, 9 */ // 0x8082218C
    if (==) goto 0x0x8082219c;
    r3 = r31;
    FUN_8082E9E0(r3); // bl 0x8082E9E0
    r0 = *(0x78 + r31); // lwz @ 0x8082219C
    /* rlwinm. r0, r0, 0, 8, 8 */ // 0x808221A0
    if (==) goto 0x0x808221b0;
    r3 = r31;
    FUN_8082E9E4(r3); // bl 0x8082E9E4
    r0 = *(0x7c + r31); // lwz @ 0x808221B0
    r3 = r31;
    r0 = r0 | 4; // 0x808221B8
    *(0x7c + r31) = r0; // stw @ 0x808221BC
    r0 = *(0x34 + r1); // lwz @ 0x808221C4
    return;
}