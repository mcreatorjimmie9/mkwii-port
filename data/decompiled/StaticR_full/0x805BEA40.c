/* Function at 0x805BEA40, size=672 bytes */
/* Stack frame: 272 bytes */
/* Saved registers: r21 */
/* Calls: 5 function(s) */

int FUN_805BEA40(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -272(r1) */
    /* saved r21 */
    /* stmw r21, 0xe4(r1) */ // 0x805BEA4C
    /* li r29, -1 */ // 0x805BEA50
    r24 = r3;
    r25 = r4;
    /* li r28, 0 */ // 0x805BEA5C
    /* li r27, 0 */ // 0x805BEA60
    /* li r26, 0 */ // 0x805BEA64
    /* lis r31, 0 */ // 0x805BEA68
    /* lis r22, 0 */ // 0x805BEA6C
    /* li r23, 5 */ // 0x805BEA70
    *(0xb64 + r3) = r29; // stb @ 0x805BEA74
    *(0xb65 + r3) = r29; // stb @ 0x805BEA78
    *(0xb66 + r3) = r29; // stb @ 0x805BEA7C
    *(0xb67 + r3) = r29; // stb @ 0x805BEA80
    /* clrlwi r0, r26, 0x18 */ // 0x805BEA84
    /* mulli r0, r0, 0xf0 */ // 0x805BEA88
    r30 = r24 + r0; // 0x805BEA8C
    r0 = *(0x18 + r30); // lwz @ 0x805BEA90
    if (==) goto 0x0x805beab0;
    if (==) goto 0x0x805beb18;
    if (==) goto 0x0x805bebbc;
    /* b 0x805bebc0 */ // 0x805BEAAC
    *(0xd + r30) = r28; // stb @ 0x805BEAB0
    /* clrlwi r0, r27, 0x18 */ // 0x805BEAB4
    /* mulli r0, r0, 0xec */ // 0x805BEAB8
    *(0xe + r30) = r27; // stb @ 0x805BEABC
    r3 = *(0 + r31); // lwz @ 0x805BEAC0
    r3 = r3 + r0; // 0x805BEAC4
    r3 = *(8 + r3); // lwz @ 0x805BEAC8
    if (==) goto 0x0x805beae8;
    r12 = *(0 + r3); // lwz @ 0x805BEAD4
    r12 = *(0x10 + r12); // lwz @ 0x805BEAD8
    /* mtctr r12 */ // 0x805BEADC
    /* bctrl  */ // 0x805BEAE0
    /* b 0x805beaec */ // 0x805BEAE4
    /* li r3, -1 */ // 0x805BEAE8
    /* extsb r0, r28 */ // 0x805BEAEC
    *(0xd8 + r30) = r3; // stw @ 0x805BEAF0
    r3 = r24 + r0; // 0x805BEAF4
    r0 = *(0xb64 + r3); // lbz @ 0x805BEAF8
    /* extsb r0, r0 */ // 0x805BEAFC
    if (!=) goto 0x0x805beb0c;
    *(0xb64 + r3) = r26; // stb @ 0x805BEB08
    r28 = r28 + 1; // 0x805BEB0C
    r27 = r27 + 1; // 0x805BEB10
    /* b 0x805bebc0 */ // 0x805BEB14
    r3 = *(0xbec + r24); // lwz @ 0x805BEB18
    /* li r21, 0 */ // 0x805BEB1C
    FUN_805ABD4C(); // bl 0x805ABD4C
    if (==) goto 0x0x805beba0;
    FUN_805ABE9C(r3); // bl 0x805ABE9C
    r4 = *(0xbec + r24); // lwz @ 0x805BEB34
    FUN_805AC3BC(r3, r3); // bl 0x805AC3BC
    r3 = *(0xc0 + r1); // lwz @ 0x805BEB40
    r0 = *(0xb48 + r24); // lwz @ 0x805BEB44
    if (!=) goto 0x0x805beb8c;
    /* extsb. r0, r27 */ // 0x805BEB50
    if (<) goto 0x0x805beb6c;
    r3 = *(0 + r31); // lwz @ 0x805BEB58
    /* clrlwi r4, r27, 0x18 */ // 0x805BEB5C
    r5 = *(0xdc + r1); // lwz @ 0x805BEB60
    r6 = *(0xd0 + r1); // lbz @ 0x805BEB64
    FUN_805B4168(); // bl 0x805B4168
    r0 = *(0xb8 + r1); // lwz @ 0x805BEB6C
    /* li r21, 1 */ // 0x805BEB70
    *(0x14 + r30) = r0; // stw @ 0x805BEB74
    r0 = *(0xbc + r1); // lwz @ 0x805BEB78
    *(0x10 + r30) = r0; // stw @ 0x805BEB7C
    *(0xe + r30) = r27; // stb @ 0x805BEB80
    r0 = *(0xc4 + r1); // lwz @ 0x805BEB84
    *(0xd8 + r30) = r0; // stw @ 0x805BEB88
    r4 = r22 + 0; // 0x805BEB90
    /* li r5, 0xc */ // 0x805BEB94
    /* li r6, 5 */ // 0x805BEB98
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x805bebb0;
    r27 = r27 + 1; // 0x805BEBA8
    /* b 0x805bebc0 */ // 0x805BEBAC
    *(0x18 + r30) = r23; // stw @ 0x805BEBB0
    *(0xd8 + r30) = r29; // stw @ 0x805BEBB4
    /* b 0x805bebc0 */ // 0x805BEBB8
    *(0xd8 + r30) = r29; // stw @ 0x805BEBBC
    r26 = r26 + 1; // 0x805BEBC0
    if (<) goto 0x0x805bea84;
    /* extsb r0, r28 */ // 0x805BEBCC
    if (>=) goto 0x0x805beccc;
    /* li r0, 4 */ // 0x805BEBD8
    /* li r5, 0 */ // 0x805BEBDC
    /* mtctr r0 */ // 0x805BEBE0
    /* clrlwi r0, r5, 0x18 */ // 0x805BEBE4
    /* mulli r0, r0, 0xf0 */ // 0x805BEBE8
    r4 = r24 + r0; // 0x805BEBEC
    r0 = *(0x18 + r4); // lwz @ 0x805BEBF0
    if (==) goto 0x0x805bec2c;
    r0 = *(0xd + r4); // lbz @ 0x805BEBFC
    /* extsb r0, r0 */ // 0x805BEC00
    if (!=) goto 0x0x805bec2c;
    /* extsb r3, r28 */ // 0x805BEC0C
    *(0xd + r4) = r28; // stb @ 0x805BEC10
    r28 = r28 + 1; // 0x805BEC14
    /* extsb r0, r28 */ // 0x805BEC18
    r3 = r24 + r3; // 0x805BEC1C
    *(0xb64 + r3) = r5; // stb @ 0x805BEC24
    if (>=) goto 0x0x805beccc;
    r5 = r5 + 1; // 0x805BEC2C
    /* clrlwi r0, r5, 0x18 */ // 0x805BEC30
    /* mulli r0, r0, 0xf0 */ // 0x805BEC34
    r4 = r24 + r0; // 0x805BEC38
    r0 = *(0x18 + r4); // lwz @ 0x805BEC3C
    if (==) goto 0x0x805bec78;
    r0 = *(0xd + r4); // lbz @ 0x805BEC48
    /* extsb r0, r0 */ // 0x805BEC4C
    if (!=) goto 0x0x805bec78;
    /* extsb r3, r28 */ // 0x805BEC58
    *(0xd + r4) = r28; // stb @ 0x805BEC5C
    r28 = r28 + 1; // 0x805BEC60
    /* extsb r0, r28 */ // 0x805BEC64
    r3 = r24 + r3; // 0x805BEC68
    *(0xb64 + r3) = r5; // stb @ 0x805BEC70
    if (>=) goto 0x0x805beccc;
    r5 = r5 + 1; // 0x805BEC78
    /* clrlwi r0, r5, 0x18 */ // 0x805BEC7C
    /* mulli r0, r0, 0xf0 */ // 0x805BEC80
    r4 = r24 + r0; // 0x805BEC84
    r0 = *(0x18 + r4); // lwz @ 0x805BEC88
    if (==) goto 0x0x805becc4;
    r0 = *(0xd + r4); // lbz @ 0x805BEC94
    /* extsb r0, r0 */ // 0x805BEC98
    if (!=) goto 0x0x805becc4;
    /* extsb r3, r28 */ // 0x805BECA4
    *(0xd + r4) = r28; // stb @ 0x805BECA8
    r28 = r28 + 1; // 0x805BECAC
    /* extsb r0, r28 */ // 0x805BECB0
    r3 = r24 + r3; // 0x805BECB4
    *(0xb64 + r3) = r5; // stb @ 0x805BECBC
    if (>=) goto 0x0x805beccc;
    r5 = r5 + 1; // 0x805BECC4
    if (counter-- != 0) goto 0x0x805bebe4;
    r0 = *(0x114 + r1); // lwz @ 0x805BECD0
    return;
}