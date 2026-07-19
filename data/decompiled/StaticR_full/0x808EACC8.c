/* Function at 0x808EACC8, size=720 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_808EACC8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x808EACD4
    r26 = r3;
    FUN_808B3318(); // bl 0x808B3318
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r28, r3, 0x18 */ // 0x808EACE4
    r4 = r28;
    if (>=) goto 0x0x808eae7c;
    /* subfic r6, r28, 0xc */ // 0x808EACF4
    if (<=) goto 0x0x808eae48;
    /* li r3, 0 */ // 0x808EAD04
    /* li r5, 0 */ // 0x808EAD08
    /* li r0, 0 */ // 0x808EAD0C
    if (>=) goto 0x0x808ead18;
    /* li r0, 1 */ // 0x808EAD14
    if (==) goto 0x0x808ead30;
    /* addis r0, r28, -0x8000 */ // 0x808EAD20
    if (==) goto 0x0x808ead30;
    /* li r5, 1 */ // 0x808EAD2C
    if (==) goto 0x0x808ead60;
    /* neg r0, r28 */ // 0x808EAD38
    /* li r5, 1 */ // 0x808EAD3C
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x808EAD40
    if (!=) goto 0x0x808ead54;
    /* rlwinm. r0, r6, 0, 0, 0 */ // 0x808EAD48
    if (==) goto 0x0x808ead54;
    /* li r5, 0 */ // 0x808EAD50
    if (==) goto 0x0x808ead60;
    /* li r3, 1 */ // 0x808EAD5C
    if (==) goto 0x0x808eae48;
    /* subfic r5, r28, 0xb */ // 0x808EAD68
    /* lis r3, 0 */ // 0x808EAD6C
    /* srwi r5, r5, 3 */ // 0x808EAD70
    /* li r0, 2 */ // 0x808EAD74
    /* mtctr r5 */ // 0x808EAD78
    if (>=) goto 0x0x808eae48;
    /* clrlwi r6, r4, 0x18 */ // 0x808EAD84
    r5 = r4 + 1; // 0x808EAD88
    /* mulli r7, r6, 0xf0 */ // 0x808EAD8C
    r9 = *(0 + r3); // lwz @ 0x808EAD90
    /* clrlwi r8, r5, 0x18 */ // 0x808EAD94
    r6 = r4 + 2; // 0x808EAD98
    r7 = r9 + r7; // 0x808EAD9C
    r5 = r4 + 3; // 0x808EADA0
    *(0xce4 + r7) = r0; // stw @ 0x808EADA4
    /* clrlwi r9, r5, 0x18 */ // 0x808EADA8
    /* mulli r8, r8, 0xf0 */ // 0x808EADAC
    /* clrlwi r7, r6, 0x18 */ // 0x808EADB0
    r10 = *(0 + r3); // lwz @ 0x808EADB4
    r6 = r4 + 4; // 0x808EADB8
    r5 = r4 + 5; // 0x808EADBC
    r8 = r10 + r8; // 0x808EADC0
    *(0xce4 + r8) = r0; // stw @ 0x808EADC4
    /* clrlwi r8, r6, 0x18 */ // 0x808EADC8
    /* mulli r10, r7, 0xf0 */ // 0x808EADCC
    /* clrlwi r7, r5, 0x18 */ // 0x808EADD0
    r11 = *(0 + r3); // lwz @ 0x808EADD4
    r6 = r4 + 6; // 0x808EADD8
    r5 = r4 + 7; // 0x808EADDC
    r10 = r11 + r10; // 0x808EADE0
    *(0xce4 + r10) = r0; // stw @ 0x808EADE4
    /* clrlwi r6, r6, 0x18 */ // 0x808EADE8
    /* mulli r9, r9, 0xf0 */ // 0x808EADEC
    /* clrlwi r5, r5, 0x18 */ // 0x808EADF0
    r10 = *(0 + r3); // lwz @ 0x808EADF4
    r4 = r4 + 8; // 0x808EADF8
    r9 = r10 + r9; // 0x808EADFC
    *(0xce4 + r9) = r0; // stw @ 0x808EAE00
    /* mulli r8, r8, 0xf0 */ // 0x808EAE04
    r9 = *(0 + r3); // lwz @ 0x808EAE08
    /* mulli r7, r7, 0xf0 */ // 0x808EAE0C
    r8 = r9 + r8; // 0x808EAE10
    *(0xce4 + r8) = r0; // stw @ 0x808EAE14
    /* mulli r6, r6, 0xf0 */ // 0x808EAE18
    r8 = *(0 + r3); // lwz @ 0x808EAE1C
    r7 = r8 + r7; // 0x808EAE20
    *(0xce4 + r7) = r0; // stw @ 0x808EAE24
    /* mulli r5, r5, 0xf0 */ // 0x808EAE28
    r7 = *(0 + r3); // lwz @ 0x808EAE2C
    r6 = r7 + r6; // 0x808EAE30
    *(0xce4 + r6) = r0; // stw @ 0x808EAE34
    r6 = *(0 + r3); // lwz @ 0x808EAE38
    r5 = r6 + r5; // 0x808EAE3C
    *(0xce4 + r5) = r0; // stw @ 0x808EAE40
    if (counter-- != 0) goto 0x0x808ead84;
    /* subfic r0, r4, 0xc */ // 0x808EAE48
    /* li r6, 2 */ // 0x808EAE4C
    /* lis r5, 0 */ // 0x808EAE50
    /* mtctr r0 */ // 0x808EAE54
    if (>=) goto 0x0x808eae7c;
    /* clrlwi r0, r4, 0x18 */ // 0x808EAE60
    r3 = *(0 + r5); // lwz @ 0x808EAE64
    /* mulli r0, r0, 0xf0 */ // 0x808EAE68
    r4 = r4 + 1; // 0x808EAE6C
    r3 = r3 + r0; // 0x808EAE70
    *(0xce4 + r3) = r6; // stw @ 0x808EAE74
    if (counter-- != 0) goto 0x0x808eae60;
    /* li r27, 0 */ // 0x808EAE7C
    /* li r30, 0 */ // 0x808EAE80
    /* li r29, 0 */ // 0x808EAE84
    /* lis r25, 0 */ // 0x808EAE88
    /* lis r31, 0 */ // 0x808EAE8C
    /* b 0x808eaef0 */ // 0x808EAE90
    /* clrlwi r0, r27, 0x18 */ // 0x808EAE94
    r3 = *(0 + r31); // lwz @ 0x808EAE98
    /* mulli r0, r0, 0xf0 */ // 0x808EAE9C
    r3 = r3 + r0; // 0x808EAEA0
    r4 = *(0xce4 + r3); // lwz @ 0x808EAEA4
    if (!=) goto 0x0x808eaec0;
    r3 = *(0 + r25); // lwz @ 0x808EAEB0
    r0 = *(0x98 + r3); // lwz @ 0x808EAEB4
    r3 = r0 + r30; // 0x808EAEB8
    r4 = *(0x174 + r3); // lwz @ 0x808EAEBC
    /* neg r0, r4 */ // 0x808EAEC0
    r3 = *(0x48 + r26); // lwz @ 0x808EAEC4
    r0 = r0 | r4; // 0x808EAEC8
    r4 = r27;
    /* srwi r0, r0, 0x1f */ // 0x808EAED0
    r0 = r29 + r0; // 0x808EAED4
    /* slwi r0, r0, 2 */ // 0x808EAED8
    /* lwzx r3, r3, r0 */ // 0x808EAEDC
    FUN_80649EEC(r4); // bl 0x80649EEC
    r30 = r30 + 4; // 0x808EAEE4
    r29 = r29 + 2; // 0x808EAEE8
    r27 = r27 + 1; // 0x808EAEEC
    if (<) goto 0x0x808eae94;
    /* li r6, 0 */ // 0x808EAEF8
    /* li r5, 0 */ // 0x808EAEFC
    /* li r4, 0 */ // 0x808EAF00
    /* b 0x808eaf1c */ // 0x808EAF04
    r3 = *(0x48 + r26); // lwz @ 0x808EAF08
    r6 = r6 + 1; // 0x808EAF0C
    /* lwzx r3, r3, r5 */ // 0x808EAF10
    r5 = r5 + 4; // 0x808EAF14
    *(0x80 + r3) = r4; // stb @ 0x808EAF18
    r0 = *(0x4c + r26); // lwz @ 0x808EAF1C
    if (<) goto 0x0x808eaf08;
    /* li r25, 0 */ // 0x808EAF28
    /* lis r27, 0 */ // 0x808EAF2C
    /* b 0x808eaf70 */ // 0x808EAF30
    r3 = *(0 + r27); // lwz @ 0x808EAF34
    if (==) goto 0x0x808eaf6c;
    r3 = *(0x14 + r3); // lwz @ 0x808EAF40
    if (==) goto 0x0x808eaf6c;
    /* clrlwi r4, r25, 0x18 */ // 0x808EAF4C
    /* mulli r0, r4, 0xc */ // 0x808EAF50
    r3 = r3 + r0; // 0x808EAF54
    r3 = *(0x18 + r3); // lwz @ 0x808EAF58
    if (==) goto 0x0x808eaf6c;
    /* li r5, 0 */ // 0x808EAF64
    FUN_808E08F0(r5); // bl 0x808E08F0
    r25 = r25 + 1; // 0x808EAF6C
    if (<) goto 0x0x808eaf34;
    r3 = r26 + 0x54; // 0x808EAF78
    /* li r4, 1 */ // 0x808EAF7C
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r0 = *(0x34 + r1); // lwz @ 0x808EAF88
    return;
}