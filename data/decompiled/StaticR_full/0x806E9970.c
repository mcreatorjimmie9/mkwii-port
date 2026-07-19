/* Function at 0x806E9970, size=588 bytes */
/* Stack frame: 0 bytes */

int FUN_806E9970(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r5, 0 */ // 0x806E9970
    r0 = *(0 + r5); // lwz @ 0x806E9974
    if (==) goto 0x0x806e9a98;
    /* lis r3, 0 */ // 0x806E9980
    /* li r0, 2 */ // 0x806E9984
    r5 = *(0 + r3); // lwz @ 0x806E9988
    /* li r7, 0 */ // 0x806E998C
    /* li r3, 0 */ // 0x806E9990
    r6 = r5 + 0x28; // 0x806E9994
    /* mtctr r0 */ // 0x806E9998
    /* clrlwi r0, r3, 0x18 */ // 0x806E999C
    /* mulli r0, r0, 0xf0 */ // 0x806E99A0
    r5 = r6 + r0; // 0x806E99A4
    r0 = *(0x10 + r5); // lwz @ 0x806E99A8
    if (!=) goto 0x0x806e99c0;
    /* beqlr  */ // 0x806E99B8
    r7 = r7 + 1; // 0x806E99BC
    r3 = r3 + 1; // 0x806E99C0
    /* clrlwi r0, r3, 0x18 */ // 0x806E99C4
    /* mulli r0, r0, 0xf0 */ // 0x806E99C8
    r5 = r6 + r0; // 0x806E99CC
    r0 = *(0x10 + r5); // lwz @ 0x806E99D0
    if (!=) goto 0x0x806e99e8;
    /* beqlr  */ // 0x806E99E0
    r7 = r7 + 1; // 0x806E99E4
    r3 = r3 + 1; // 0x806E99E8
    /* clrlwi r0, r3, 0x18 */ // 0x806E99EC
    /* mulli r0, r0, 0xf0 */ // 0x806E99F0
    r5 = r6 + r0; // 0x806E99F4
    r0 = *(0x10 + r5); // lwz @ 0x806E99F8
    if (!=) goto 0x0x806e9a10;
    /* beqlr  */ // 0x806E9A08
    r7 = r7 + 1; // 0x806E9A0C
    r3 = r3 + 1; // 0x806E9A10
    /* clrlwi r0, r3, 0x18 */ // 0x806E9A14
    /* mulli r0, r0, 0xf0 */ // 0x806E9A18
    r5 = r6 + r0; // 0x806E9A1C
    r0 = *(0x10 + r5); // lwz @ 0x806E9A20
    if (!=) goto 0x0x806e9a38;
    /* beqlr  */ // 0x806E9A30
    r7 = r7 + 1; // 0x806E9A34
    r3 = r3 + 1; // 0x806E9A38
    /* clrlwi r0, r3, 0x18 */ // 0x806E9A3C
    /* mulli r0, r0, 0xf0 */ // 0x806E9A40
    r5 = r6 + r0; // 0x806E9A44
    r0 = *(0x10 + r5); // lwz @ 0x806E9A48
    if (!=) goto 0x0x806e9a60;
    /* beqlr  */ // 0x806E9A58
    r7 = r7 + 1; // 0x806E9A5C
    r3 = r3 + 1; // 0x806E9A60
    /* clrlwi r0, r3, 0x18 */ // 0x806E9A64
    /* mulli r0, r0, 0xf0 */ // 0x806E9A68
    r5 = r6 + r0; // 0x806E9A6C
    r0 = *(0x10 + r5); // lwz @ 0x806E9A70
    if (!=) goto 0x0x806e9a88;
    /* beqlr  */ // 0x806E9A80
    r7 = r7 + 1; // 0x806E9A84
    r3 = r3 + 1; // 0x806E9A88
    if (counter-- != 0) goto 0x0x806e999c;
    /* li r3, -1 */ // 0x806E9A90
    return;
    r0 = *(0x291c + r3); // lwz @ 0x806E9A98
    /* li r5, 1 */ // 0x806E9A9C
    /* mulli r0, r0, 0x58 */ // 0x806E9AA0
    r6 = r3 + r0; // 0x806E9AA4
    r8 = *(0x59 + r6); // lbz @ 0x806E9AA8
    r0 = *(0x48 + r6); // lwz @ 0x806E9AAC
    r5 = r5 << r8; // slw
    /* and. r0, r5, r0 */ // 0x806E9AB4
    if (==) goto 0x0x806e9bb4;
    /* li r0, 2 */ // 0x806E9ABC
    /* li r7, -1 */ // 0x806E9AC0
    /* li r6, 0 */ // 0x806E9AC4
    /* mtctr r0 */ // 0x806E9AC8
    r5 = r3 + r6; // 0x806E9ACC
    r0 = *(0x2920 + r5); // lbz @ 0x806E9AD0
    if (!=) goto 0x0x806e9aec;
    r7 = r7 + 1; // 0x806E9ADC
    if (!=) goto 0x0x806e9aec;
    /* b 0x806e9bac */ // 0x806E9AE8
    r6 = r6 + 1; // 0x806E9AEC
    r5 = r3 + r6; // 0x806E9AF0
    r0 = *(0x2920 + r5); // lbz @ 0x806E9AF4
    if (!=) goto 0x0x806e9b10;
    r7 = r7 + 1; // 0x806E9B00
    if (!=) goto 0x0x806e9b10;
    /* b 0x806e9bac */ // 0x806E9B0C
    r6 = r6 + 1; // 0x806E9B10
    r5 = r3 + r6; // 0x806E9B14
    r0 = *(0x2920 + r5); // lbz @ 0x806E9B18
    if (!=) goto 0x0x806e9b34;
    r7 = r7 + 1; // 0x806E9B24
    if (!=) goto 0x0x806e9b34;
    /* b 0x806e9bac */ // 0x806E9B30
    r6 = r6 + 1; // 0x806E9B34
    r5 = r3 + r6; // 0x806E9B38
    r0 = *(0x2920 + r5); // lbz @ 0x806E9B3C
    if (!=) goto 0x0x806e9b58;
    r7 = r7 + 1; // 0x806E9B48
    if (!=) goto 0x0x806e9b58;
    /* b 0x806e9bac */ // 0x806E9B54
    r6 = r6 + 1; // 0x806E9B58
    r5 = r3 + r6; // 0x806E9B5C
    r0 = *(0x2920 + r5); // lbz @ 0x806E9B60
    if (!=) goto 0x0x806e9b7c;
    r7 = r7 + 1; // 0x806E9B6C
    if (!=) goto 0x0x806e9b7c;
    /* b 0x806e9bac */ // 0x806E9B78
    r6 = r6 + 1; // 0x806E9B7C
    r5 = r3 + r6; // 0x806E9B80
    r0 = *(0x2920 + r5); // lbz @ 0x806E9B84
    if (!=) goto 0x0x806e9ba0;
    r7 = r7 + 1; // 0x806E9B90
    if (!=) goto 0x0x806e9ba0;
    /* b 0x806e9bac */ // 0x806E9B9C
    r6 = r6 + 1; // 0x806E9BA0
    if (counter-- != 0) goto 0x0x806e9acc;
    /* li r6, -1 */ // 0x806E9BA8
    r3 = r6;
    return;
    /* li r3, -1 */ // 0x806E9BB4
    return;
}