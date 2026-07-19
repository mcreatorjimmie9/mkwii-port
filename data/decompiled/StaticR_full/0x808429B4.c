/* Function at 0x808429B4, size=584 bytes */
/* Stack frame: 0 bytes */

int FUN_808429B4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* lis r4, 0 */ // 0x808429B4
    r0 = *(0 + r4); // lbz @ 0x808429B8
    if (!=) goto 0x0x808429e0;
    /* lis r4, 0 */ // 0x808429C4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x808429CC
    r3 = *(0xc + r3); // lwz @ 0x808429D0
    /* lwzx r3, r3, r0 */ // 0x808429D4
    r3 = *(0x20 + r3); // lbz @ 0x808429D8
    return;
    /* lis r4, 0 */ // 0x808429E0
    r4 = *(0 + r4); // lwz @ 0x808429E4
    r0 = *(0xb78 + r4); // lwz @ 0x808429E8
    if (==) goto 0x0x80842a00;
    if (==) goto 0x0x80842b24;
    /* b 0x80842bf4 */ // 0x808429FC
    /* lis r5, 0 */ // 0x80842A00
    /* li r11, 0 */ // 0x80842A04
    r0 = *(0 + r5); // lbz @ 0x80842A08
    /* li r12, 0 */ // 0x80842A0C
    if (<=) goto 0x0x80842aac;
    /* mulli r6, r3, 0xf0 */ // 0x80842A18
    /* lis r5, 0 */ // 0x80842A1C
    r8 = *(0 + r5); // lwz @ 0x80842A24
    r9 = r4 + r6; // 0x80842A28
    /* mtctr r0 */ // 0x80842A2C
    if (<=) goto 0x0x80842aac;
    /* clrlwi r5, r12, 0x18 */ // 0x80842A34
    /* mulli r7, r5, 0xf0 */ // 0x80842A38
    r5 = r10 + r7; // 0x80842A3C
    r5 = *(0xcc + r5); // lwz @ 0x80842A40
    if (!=) goto 0x0x80842a54;
    /* li r5, 0 */ // 0x80842A4C
    /* b 0x80842a7c */ // 0x80842A50
    r6 = *(0xf4 + r9); // lwz @ 0x80842A54
    if (!=) goto 0x0x80842a68;
    /* li r5, 0 */ // 0x80842A60
    /* b 0x80842a7c */ // 0x80842A64
    r5 = r4 + r7; // 0x80842A68
    r5 = *(0xf4 + r5); // lwz @ 0x80842A6C
    /* subf r5, r5, r6 */ // 0x80842A70
    /* cntlzw r5, r5 */ // 0x80842A74
    /* srwi r5, r5, 5 */ // 0x80842A78
    if (!=) goto 0x0x80842aa4;
    r7 = *(0xc + r8); // lwz @ 0x80842A84
    r6 = r12 rlwinm 2; // rlwinm
    /* clrlwi r5, r11, 0x10 */ // 0x80842A8C
    /* lwzx r6, r7, r6 */ // 0x80842A90
    r6 = *(0x22 + r6); // lhz @ 0x80842A94
    if (<=) goto 0x0x80842aa4;
    r11 = r6;
    if (counter-- != 0) goto 0x0x80842a34;
    /* lis r5, 0 */ // 0x80842AAC
    r4 = r3 rlwinm 2; // rlwinm
    r5 = *(0 + r5); // lwz @ 0x80842AB4
    /* clrlwi r3, r11, 0x10 */ // 0x80842ABC
    r5 = *(0xc + r5); // lwz @ 0x80842AC0
    /* lwzx r4, r5, r4 */ // 0x80842AC4
    r4 = *(0x22 + r4); // lhz @ 0x80842AC8
    /* subf r4, r4, r3 */ // 0x80842ACC
    if (>) goto 0x0x80842ae0;
    /* li r0, 1 */ // 0x80842AD4
    /* li r5, 3 */ // 0x80842AD8
    /* b 0x80842afc */ // 0x80842ADC
    if (>) goto 0x0x80842af4;
    /* li r0, 1 */ // 0x80842AE8
    /* li r5, 4 */ // 0x80842AEC
    /* b 0x80842afc */ // 0x80842AF0
    /* li r0, 2 */ // 0x80842AF4
    /* li r5, 5 */ // 0x80842AF8
    if (>) goto 0x0x80842b0c;
    /* li r3, 1 */ // 0x80842B04
    return;
    /* xoris r3, r4, 0x8000 */ // 0x80842B0C
    /* subf r0, r4, r5 */ // 0x80842B10
    /* addc r0, r0, r3 */ // 0x80842B14
    /* subfe r3, r0, r0 */ // 0x80842B18
    r3 = r3 + 3; // 0x80842B1C
    return;
    /* mulli r0, r3, 0xf0 */ // 0x80842B24
    /* lis r5, 0 */ // 0x80842B28
    r10 = *(0 + r5); // lbz @ 0x80842B2C
    /* li r8, 0 */ // 0x80842B30
    /* lis r5, 0 */ // 0x80842B34
    r7 = *(0 + r5); // lwz @ 0x80842B38
    r6 = r4 + r0; // 0x80842B3C
    /* li r9, 0 */ // 0x80842B40
    /* mtctr r10 */ // 0x80842B44
    if (<=) goto 0x0x80842bbc;
    /* clrlwi r0, r9, 0x18 */ // 0x80842B50
    /* mulli r0, r0, 0xf0 */ // 0x80842B54
    r5 = r4 + r0; // 0x80842B58
    r5 = *(0xf4 + r5); // lwz @ 0x80842B5C
    if (!=) goto 0x0x80842b70;
    /* li r0, 0 */ // 0x80842B68
    /* b 0x80842b90 */ // 0x80842B6C
    r0 = *(0xf4 + r6); // lwz @ 0x80842B70
    if (!=) goto 0x0x80842b84;
    /* li r0, 0 */ // 0x80842B7C
    /* b 0x80842b90 */ // 0x80842B80
    /* subf r0, r5, r0 */ // 0x80842B84
    /* cntlzw r0, r0 */ // 0x80842B88
    /* srwi r0, r0, 5 */ // 0x80842B8C
    if (!=) goto 0x0x80842bb4;
    /* clrlwi r5, r9, 0x18 */ // 0x80842B98
    /* clrlwi r0, r8, 0x18 */ // 0x80842B9C
    r5 = r7 + r5; // 0x80842BA0
    r5 = *(0x1f12 + r5); // lbz @ 0x80842BA4
    if (<=) goto 0x0x80842bb4;
    r8 = r5;
    r9 = r9 + 1; // 0x80842BB4
    if (counter-- != 0) goto 0x0x80842b50;
    r3 = r7 + r3; // 0x80842BBC
    /* clrlwi r0, r8, 0x18 */ // 0x80842BC0
    r3 = *(0x1f12 + r3); // lbz @ 0x80842BC4
    /* subf r0, r3, r0 */ // 0x80842BC8
    if (>) goto 0x0x80842bdc;
    /* li r3, 1 */ // 0x80842BD4
    return;
    /* xoris r3, r0, 0x8000 */ // 0x80842BDC
    /* subfic r0, r0, 7 */ // 0x80842BE0
    /* addc r0, r0, r3 */ // 0x80842BE4
    /* subfe r3, r0, r0 */ // 0x80842BE8
    r3 = r3 + 3; // 0x80842BEC
    return;
    /* li r3, 1 */ // 0x80842BF4
    return;
}