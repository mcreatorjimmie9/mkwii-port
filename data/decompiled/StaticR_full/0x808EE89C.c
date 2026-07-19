/* Function at 0x808EE89C, size=1744 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r18 */
/* Calls: 14 function(s) */

int FUN_808EE89C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r18 */
    /* stmw r18, 8(r1) */ // 0x808EE8A8
    r31 = r3;
    FUN_808CE77C(); // bl 0x808CE77C
    /* lis r3, 0 */ // 0x808EE8B4
    /* li r4, 0 */ // 0x808EE8B8
    r8 = *(0 + r3); // lwz @ 0x808EE8BC
    r3 = *(0xb70 + r8); // lwz @ 0x808EE8C0
    r0 = r3 + -3; // 0x808EE8C4
    if (>) goto 0x0x808ee8e4;
    /* li r3, 1 */ // 0x808EE8D0
    r0 = r3 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x808EE8D8
    if (==) goto 0x0x808ee8e4;
    r4 = r3;
    if (==) goto 0x0x808ee970;
    /* li r9, 0 */ // 0x808EE8EC
    /* lis r4, 0 */ // 0x808EE8F0
    /* lis r6, 0 */ // 0x808EE8F4
    /* lis r3, 0 */ // 0x808EE8F8
    /* b 0x808ee960 */ // 0x808EE8FC
    /* clrlwi r0, r9, 0x18 */ // 0x808EE900
    r5 = *(0 + r6); // lwz @ 0x808EE904
    /* mulli r0, r0, 0xf0 */ // 0x808EE908
    r5 = *(0x98 + r5); // lwz @ 0x808EE90C
    r7 = r8 + r0; // 0x808EE910
    r0 = *(0x70 + r5); // lwz @ 0x808EE914
    r5 = *(0xf4 + r7); // lwz @ 0x808EE918
    if (!=) goto 0x0x808ee95c;
    r5 = *(0xb78 + r8); // lwz @ 0x808EE924
    /* li r0, 5 */ // 0x808EE928
    if (!=) goto 0x0x808ee938;
    /* li r0, 3 */ // 0x808EE934
    r5 = *(0 + r4); // lwz @ 0x808EE938
    r7 = r9 rlwinm 2; // rlwinm
    r5 = *(0xc + r5); // lwz @ 0x808EE940
    /* lwzx r5, r5, r7 */ // 0x808EE944
    r7 = *(0x22 + r5); // lhz @ 0x808EE948
    /* add. r0, r0, r7 */ // 0x808EE94C
    if (>=) goto 0x0x808ee958;
    /* li r0, 0 */ // 0x808EE954
    *(0x22 + r5) = r0; // sth @ 0x808EE958
    r9 = r9 + 1; // 0x808EE95C
    r8 = *(0 + r3); // lwz @ 0x808EE960
    r0 = *(0x24 + r8); // lbz @ 0x808EE964
    if (<) goto 0x0x808ee900;
    r3 = r8 + 0xc10; // 0x808EE970
    FUN_805BDEA8(r3); // bl 0x805BDEA8
    r12 = *(0 + r31); // lwz @ 0x808EE978
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808EE980
    /* mtctr r12 */ // 0x808EE984
    /* bctrl  */ // 0x808EE988
    /* lis r4, 0 */ // 0x808EE98C
    /* clrlwi r20, r3, 0x18 */ // 0x808EE990
    r3 = *(0 + r4); // lwz @ 0x808EE994
    /* li r4, 0 */ // 0x808EE998
    r3 = *(0xb70 + r3); // lwz @ 0x808EE99C
    r0 = r3 + -3; // 0x808EE9A0
    if (>) goto 0x0x808ee9c0;
    /* li r3, 1 */ // 0x808EE9AC
    r0 = r3 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x808EE9B4
    if (==) goto 0x0x808ee9c0;
    r4 = r3;
    if (==) goto 0x0x808eec7c;
    /* cmpwi cr1, r20, 0 */
    /* li r5, 0 */ // 0x808EE9CC
    if (<=) goto 0x0x808eec64;
    r7 = r20 + -8; // 0x808EE9D8
    if (<=) goto 0x0x808eec08;
    /* li r4, 0 */ // 0x808EE9E0
    if (<) goto 0x0x808ee9fc;
    /* lis r3, -0x8000 */ // 0x808EE9E8
    r0 = r3 + -2; // 0x808EE9EC
    if (>) goto 0x0x808ee9fc;
    /* li r4, 1 */ // 0x808EE9F8
    if (==) goto 0x0x808eec08;
    r6 = r7 + 7; // 0x808EEA04
    /* li r4, 0 */ // 0x808EEA08
    /* srwi r6, r6, 3 */ // 0x808EEA0C
    /* lis r3, 0 */ // 0x808EEA10
    /* li r0, 0 */ // 0x808EEA14
    /* mtctr r6 */ // 0x808EEA18
    if (<=) goto 0x0x808eec08;
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEA24
    r6 = r6 + r4; // 0x808EEA34
    r8 = r5 + 4; // 0x808EEA38
    *(8 + r6) = r5; // stb @ 0x808EEA3C
    r21 = r5 rlwinm 2; // rlwinm
    r18 = r19 rlwinm 2; // rlwinm
    r11 = r12 rlwinm 2; // rlwinm
    r22 = *(0 + r3); // lwz @ 0x808EEA4C
    r9 = r10 rlwinm 2; // rlwinm
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEA54
    r7 = r8 rlwinm 2; // rlwinm
    r22 = *(0xc + r22); // lwz @ 0x808EEA5C
    /* lwzx r21, r22, r21 */ // 0x808EEA60
    r21 = *(0x22 + r21); // lhz @ 0x808EEA64
    /* stwx r21, r6, r4 */ // 0x808EEA68
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEA6C
    r6 = r6 + r4; // 0x808EEA70
    *(4 + r6) = r0; // stw @ 0x808EEA74
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEA78
    r6 = r6 + r4; // 0x808EEA7C
    *(0x14 + r6) = r19; // stb @ 0x808EEA80
    r19 = *(0 + r3); // lwz @ 0x808EEA84
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEA88
    r19 = *(0xc + r19); // lwz @ 0x808EEA8C
    r6 = r6 + r4; // 0x808EEA90
    /* lwzx r18, r19, r18 */ // 0x808EEA94
    r18 = *(0x22 + r18); // lhz @ 0x808EEA98
    *(0xc + r6) = r18; // stw @ 0x808EEA9C
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEAA0
    r6 = r6 + r4; // 0x808EEAA4
    *(0x10 + r6) = r0; // stw @ 0x808EEAA8
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEAAC
    r6 = r6 + r4; // 0x808EEAB0
    *(0x20 + r6) = r12; // stb @ 0x808EEAB4
    r12 = *(0 + r3); // lwz @ 0x808EEAB8
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEABC
    r12 = *(0xc + r12); // lwz @ 0x808EEAC0
    r6 = r6 + r4; // 0x808EEAC4
    /* lwzx r11, r12, r11 */ // 0x808EEAC8
    r11 = *(0x22 + r11); // lhz @ 0x808EEACC
    *(0x18 + r6) = r11; // stw @ 0x808EEAD0
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEAD4
    r6 = r6 + r4; // 0x808EEAD8
    *(0x1c + r6) = r0; // stw @ 0x808EEADC
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEAE0
    r6 = r6 + r4; // 0x808EEAE4
    *(0x2c + r6) = r10; // stb @ 0x808EEAE8
    r10 = *(0 + r3); // lwz @ 0x808EEAEC
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEAF0
    r10 = *(0xc + r10); // lwz @ 0x808EEAF4
    r6 = r6 + r4; // 0x808EEAF8
    /* lwzx r9, r10, r9 */ // 0x808EEAFC
    r9 = *(0x22 + r9); // lhz @ 0x808EEB00
    *(0x24 + r6) = r9; // stw @ 0x808EEB04
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEB08
    r6 = r6 + r4; // 0x808EEB0C
    *(0x28 + r6) = r0; // stw @ 0x808EEB10
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEB14
    r6 = r6 + r4; // 0x808EEB18
    *(0x38 + r6) = r8; // stb @ 0x808EEB1C
    r8 = *(0 + r3); // lwz @ 0x808EEB20
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEB24
    r8 = *(0xc + r8); // lwz @ 0x808EEB28
    r6 = r6 + r4; // 0x808EEB2C
    /* lwzx r7, r8, r7 */ // 0x808EEB30
    r7 = *(0x22 + r7); // lhz @ 0x808EEB34
    *(0x30 + r6) = r7; // stw @ 0x808EEB38
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEB3C
    r6 = r6 + r4; // 0x808EEB40
    *(0x34 + r6) = r0; // stw @ 0x808EEB44
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEB48
    r7 = r5 + 5; // 0x808EEB4C
    r8 = r5 + 7; // 0x808EEB54
    r6 = r6 + r4; // 0x808EEB58
    r11 = r7 rlwinm 2; // rlwinm
    *(0x44 + r6) = r7; // stb @ 0x808EEB60
    r9 = r10 rlwinm 2; // rlwinm
    r7 = r8 rlwinm 2; // rlwinm
    r5 = r5 + 8; // 0x808EEB6C
    r12 = *(0 + r3); // lwz @ 0x808EEB70
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEB74
    r12 = *(0xc + r12); // lwz @ 0x808EEB78
    r6 = r6 + r4; // 0x808EEB7C
    /* lwzx r11, r12, r11 */ // 0x808EEB80
    r11 = *(0x22 + r11); // lhz @ 0x808EEB84
    *(0x3c + r6) = r11; // stw @ 0x808EEB88
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEB8C
    r6 = r6 + r4; // 0x808EEB90
    *(0x40 + r6) = r0; // stw @ 0x808EEB94
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEB98
    r6 = r6 + r4; // 0x808EEB9C
    *(0x50 + r6) = r10; // stb @ 0x808EEBA0
    r10 = *(0 + r3); // lwz @ 0x808EEBA4
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEBA8
    r10 = *(0xc + r10); // lwz @ 0x808EEBAC
    r6 = r6 + r4; // 0x808EEBB0
    /* lwzx r9, r10, r9 */ // 0x808EEBB4
    r9 = *(0x22 + r9); // lhz @ 0x808EEBB8
    *(0x48 + r6) = r9; // stw @ 0x808EEBBC
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEBC0
    r6 = r6 + r4; // 0x808EEBC4
    *(0x4c + r6) = r0; // stw @ 0x808EEBC8
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEBCC
    r6 = r6 + r4; // 0x808EEBD0
    *(0x5c + r6) = r8; // stb @ 0x808EEBD4
    r8 = *(0 + r3); // lwz @ 0x808EEBD8
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEBDC
    r8 = *(0xc + r8); // lwz @ 0x808EEBE0
    r6 = r6 + r4; // 0x808EEBE4
    /* lwzx r7, r8, r7 */ // 0x808EEBE8
    r7 = *(0x22 + r7); // lhz @ 0x808EEBEC
    *(0x54 + r6) = r7; // stw @ 0x808EEBF0
    r6 = *(0x1a4 + r31); // lwz @ 0x808EEBF4
    r6 = r6 + r4; // 0x808EEBF8
    r4 = r4 + 0x60; // 0x808EEBFC
    *(0x58 + r6) = r0; // stw @ 0x808EEC00
    if (counter-- != 0) goto 0x0x808eea24;
    /* subf r0, r5, r20 */ // 0x808EEC08
    /* lis r7, 0 */ // 0x808EEC0C
    /* mulli r8, r5, 0xc */ // 0x808EEC10
    /* li r4, 0 */ // 0x808EEC14
    /* mtctr r0 */ // 0x808EEC18
    if (>=) goto 0x0x808eec64;
    r3 = *(0x1a4 + r31); // lwz @ 0x808EEC24
    r0 = r5 rlwinm 2; // rlwinm
    r3 = r3 + r8; // 0x808EEC2C
    *(8 + r3) = r5; // stb @ 0x808EEC30
    r5 = r5 + 1; // 0x808EEC34
    r6 = *(0 + r7); // lwz @ 0x808EEC38
    r3 = *(0x1a4 + r31); // lwz @ 0x808EEC3C
    r6 = *(0xc + r6); // lwz @ 0x808EEC40
    /* lwzx r6, r6, r0 */ // 0x808EEC44
    r0 = *(0x22 + r6); // lhz @ 0x808EEC48
    /* stwx r0, r3, r8 */ // 0x808EEC4C
    r0 = *(0x1a4 + r31); // lwz @ 0x808EEC50
    r3 = r0 + r8; // 0x808EEC54
    r8 = r8 + 0xc; // 0x808EEC58
    *(4 + r3) = r4; // stw @ 0x808EEC5C
    if (counter-- != 0) goto 0x0x808eec24;
    /* lis r6, 0 */ // 0x808EEC64
    r3 = *(0x1a4 + r31); // lwz @ 0x808EEC68
    r4 = r20;
    /* li r5, 0xc */ // 0x808EEC70
    r6 = r6 + 0; // 0x808EEC74
    FUN_805E3430(r6, r4, r5, r6); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808EEC7C
    /* li r19, 0 */ // 0x808EEC80
    /* li r24, 0 */ // 0x808EEC84
    /* li r23, 0 */ // 0x808EEC88
    r27 = r3 + 0; // 0x808EEC8C
    /* li r30, 1 */ // 0x808EEC90
    /* lis r29, 0 */ // 0x808EEC94
    /* lis r26, 0 */ // 0x808EEC98
    /* lis r28, 0 */ // 0x808EEC9C
    /* b 0x808eee80 */ // 0x808EECA0
    r3 = *(0 + r29); // lwz @ 0x808EECA4
    /* clrlwi r4, r0, 0x18 */ // 0x808EECAC
    /* li r5, 0 */ // 0x808EECB0
    r3 = *(0xb70 + r3); // lwz @ 0x808EECB4
    r0 = r3 + -3; // 0x808EECB8
    if (>) goto 0x0x808eecd4;
    r0 = r30 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x808EECC8
    if (==) goto 0x0x808eecd4;
    /* li r5, 1 */ // 0x808EECD0
    if (==) goto 0x0x808eecec;
    r0 = *(0x1a4 + r31); // lwz @ 0x808EECDC
    r3 = r0 + r24; // 0x808EECE0
    r25 = *(8 + r3); // lbz @ 0x808EECE4
    /* b 0x808eecfc */ // 0x808EECE8
    r3 = *(0 + r26); // lwz @ 0x808EECEC
    r0 = *(0x18 + r3); // lwz @ 0x808EECF0
    r3 = r0 + r4; // 0x808EECF4
    r25 = *(-1 + r3); // lbz @ 0x808EECF8
    r3 = *(0x1a0 + r31); // lwz @ 0x808EECFC
    r5 = r25;
    /* lwzx r22, r3, r23 */ // 0x808EED04
    r3 = r22;
    FUN_8087FA64(r5, r3); // bl 0x8087FA64
    r3 = *(0 + r29); // lwz @ 0x808EED10
    /* li r4, 0 */ // 0x808EED14
    r3 = *(0xb70 + r3); // lwz @ 0x808EED18
    r0 = r3 + -3; // 0x808EED1C
    if (>) goto 0x0x808eed38;
    r0 = r30 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x808EED2C
    if (==) goto 0x0x808eed38;
    /* li r4, 1 */ // 0x808EED34
    if (==) goto 0x0x808eed80;
    r3 = *(0x1a4 + r31); // lwz @ 0x808EED40
    /* lwzx r4, r3, r24 */ // 0x808EED44
    r0 = *(0 + r3); // lwz @ 0x808EED48
    if (!=) goto 0x0x808eed74;
    if (==) goto 0x0x808eed74;
    r3 = r22;
    r4 = r27 + 0xa; // 0x808EED60
    /* li r5, 0x541 */ // 0x808EED64
    /* li r6, 0 */ // 0x808EED68
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    /* b 0x808eed80 */ // 0x808EED70
    r3 = r22;
    r4 = r27 + 0x13; // 0x808EED78
    FUN_806A0B6C(r6, r3, r4); // bl 0x806A0B6C
    if (<) goto 0x0x808eedc8;
    r5 = *(0 + r28); // lwz @ 0x808EED8C
    if (>) goto 0x0x808eeda0;
    r3 = r5 + r25; // 0x808EED94
    r4 = *(0x2920 + r3); // lbz @ 0x808EED98
    /* b 0x808eeda4 */ // 0x808EED9C
    /* li r4, 0xff */ // 0x808EEDA0
    r0 = r25 + -1; // 0x808EEDA4
    if (>) goto 0x0x808eedbc;
    r3 = r5 + r25; // 0x808EEDB0
    r0 = *(0x291f + r3); // lbz @ 0x808EEDB4
    /* b 0x808eedc0 */ // 0x808EEDB8
    /* li r0, 0xff */ // 0x808EEDBC
    if (==) goto 0x0x808eee3c;
    r6 = *(0 + r29); // lwz @ 0x808EEDC8
    /* mulli r21, r25, 0xf0 */ // 0x808EEDCC
    r3 = r22;
    r4 = *(0xb70 + r6); // lwz @ 0x808EEDD4
    /* li r5, 0 */ // 0x808EEDD8
    r6 = r6 + r21; // 0x808EEDDC
    r0 = r4 + -3; // 0x808EEDE0
    r18 = *(0x110 + r6); // lhz @ 0x808EEDE4
    r4 = r18;
    if (>) goto 0x0x808eee04;
    r0 = r30 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x808EEDF8
    if (==) goto 0x0x808eee04;
    /* li r5, 1 */ // 0x808EEE00
    /* neg r0, r5 */ // 0x808EEE04
    r0 = r0 | r5; // 0x808EEE08
    /* srwi r5, r0, 0x1f */ // 0x808EEE0C
    r5 = r5 + 0x53f; // 0x808EEE10
    FUN_8087F14C(r5, r5); // bl 0x8087F14C
    r4 = *(0 + r29); // lwz @ 0x808EEE18
    /* cntlzw r0, r19 */ // 0x808EEE1C
    /* srwi r5, r0, 5 */ // 0x808EEE20
    r3 = r22;
    r4 = r4 + r21; // 0x808EEE28
    r0 = *(0xd00 + r4); // lhz @ 0x808EEE2C
    /* subf r4, r18, r0 */ // 0x808EEE30
    FUN_8087F214(r3); // bl 0x8087F214
    /* b 0x808eee68 */ // 0x808EEE38
    r3 = r22;
    r4 = r27 + 0x1c; // 0x808EEE40
    /* li r5, 0x25e7 */ // 0x808EEE44
    /* li r6, 0 */ // 0x808EEE48
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r3 = r22;
    r4 = r27 + 0x28; // 0x808EEE54
    FUN_806A0B6C(r5, r6, r3, r4); // bl 0x806A0B6C
    r3 = r22;
    r4 = r27 + 0x34; // 0x808EEE60
    FUN_806A0B6C(r3, r4, r3, r4); // bl 0x806A0B6C
    r3 = r22;
    r4 = r25;
    FUN_8087ED6C(r3, r4, r3, r4); // bl 0x8087ED6C
    r24 = r24 + 0xc; // 0x808EEE74
    r23 = r23 + 4; // 0x808EEE78
    if (<) goto 0x0x808eeca4;
    /* lis r3, 0 */ // 0x808EEE88
    r3 = *(0 + r3); // lwz @ 0x808EEE8C
    r3 = *(0 + r3); // lwz @ 0x808EEE90
    r0 = *(0 + r3); // lwz @ 0x808EEE94
    if (<) goto 0x0x808eeea8;
    if (<=) goto 0x0x808eeeb8;
    if (<) goto 0x0x808eef34;
    if (>) goto 0x0x808eef34;
    /* lis r3, 0 */ // 0x808EEEB8
    r3 = *(0 + r3); // lwz @ 0x808EEEBC
    r3 = *(0 + r3); // lwz @ 0x808EEEC0
    r19 = *(0x128 + r3); // lwz @ 0x808EEEC4
    if (!=) goto 0x0x808eeed8;
    /* li r19, 0 */ // 0x808EEED0
    /* b 0x808eef2c */ // 0x808EEED4
    /* lis r18, 0 */ // 0x808EEED8
    if (==) goto 0x0x808eef28;
    r12 = *(0 + r19); // lwz @ 0x808EEEE4
    r3 = r19;
    r12 = *(0x60 + r12); // lwz @ 0x808EEEEC
    /* mtctr r12 */ // 0x808EEEF0
    /* bctrl  */ // 0x808EEEF4
    /* b 0x808eef10 */ // 0x808EEEF8
    if (!=) goto 0x0x808eef0c;
    /* li r0, 1 */ // 0x808EEF04
    /* b 0x808eef1c */ // 0x808EEF08
    r3 = *(0 + r3); // lwz @ 0x808EEF0C
    if (!=) goto 0x0x808eeefc;
    /* li r0, 0 */ // 0x808EEF18
    if (==) goto 0x0x808eef28;
    /* b 0x808eef2c */ // 0x808EEF24
    /* li r19, 0 */ // 0x808EEF28
    r3 = r19;
    FUN_806B03E8(r3); // bl 0x806B03E8
    r12 = *(0 + r31); // lwz @ 0x808EEF34
    r3 = r31;
    r12 = *(0x6c + r12); // lwz @ 0x808EEF3C
    /* mtctr r12 */ // 0x808EEF40
    /* bctrl  */ // 0x808EEF44
    /* lis r3, 0 */ // 0x808EEF48
    r3 = *(0 + r3); // lwz @ 0x808EEF4C
    r3 = *(0x90 + r3); // lwz @ 0x808EEF50
    FUN_806845FC(r3); // bl 0x806845FC
    r0 = *(0x44 + r1); // lwz @ 0x808EEF5C
    return;
}