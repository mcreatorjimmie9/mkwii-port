/* Function at 0x80785A48, size=336 bytes */
/* Stack frame: 32 bytes */

void FUN_80785A48(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x80785A4C
    r5 = r5 + 0; // 0x80785A50
    /* lfs f2, 0x3f4(r3) */ // 0x80785A54
    /* lfs f0, 0x28(r5) */ // 0x80785A58
    /* fabs f1, f2 */ // 0x80785A5C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785A60
    if (<=) goto 0x0x80785ab8;
    /* fctiwz f0, f2 */ // 0x80785A68
    /* lis r4, -0x49f5 */ // 0x80785A6C
    /* lis r0, 0x4330 */ // 0x80785A70
    *(0x10 + r1) = r0; // stw @ 0x80785A74
    r4 = r4 + 0x60b7; // 0x80785A78
    /* lfd f1, 0x38(r5) */ // 0x80785A7C
    /* stfd f0, 8(r1) */ // 0x80785A80
    r0 = *(0xc + r1); // lwz @ 0x80785A84
    /* mulhw r4, r4, r0 */ // 0x80785A88
    r0 = r4 + r0; // 0x80785A8C
    r0 = r0 >> 8; // srawi
    /* srwi r4, r0, 0x1f */ // 0x80785A94
    r0 = r0 + r4; // 0x80785A98
    /* mulli r0, r0, 0x168 */ // 0x80785A9C
    /* xoris r0, r0, 0x8000 */ // 0x80785AA0
    *(0x14 + r1) = r0; // stw @ 0x80785AA4
    /* lfd f0, 0x10(r1) */ // 0x80785AA8
    /* fsubs f0, f0, f1 */ // 0x80785AAC
    /* fsubs f0, f2, f0 */ // 0x80785AB0
    /* stfs f0, 0x3f4(r3) */ // 0x80785AB4
    /* lfs f2, 0x3f4(r3) */ // 0x80785AB8
    /* lfs f0, 0x2c(r5) */ // 0x80785ABC
    /* fabs f1, f2 */ // 0x80785AC0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785AC4
    if (>=) goto 0x0x80785ad8;
    /* lfs f0, 0(r5) */ // 0x80785ACC
    /* stfs f0, 0x3f4(r3) */ // 0x80785AD0
    /* b 0x80785ae4 */ // 0x80785AD4
    /* lfs f0, 0x30(r5) */ // 0x80785AD8
    /* fadds f0, f2, f0 */ // 0x80785ADC
    /* stfs f0, 0x3f4(r3) */ // 0x80785AE0
    /* lfs f2, 0x3f8(r3) */ // 0x80785AE4
    /* lfs f0, 0x28(r5) */ // 0x80785AE8
    /* fabs f1, f2 */ // 0x80785AEC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785AF0
    if (<=) goto 0x0x80785b48;
    /* fctiwz f0, f2 */ // 0x80785AF8
    /* lis r4, -0x49f5 */ // 0x80785AFC
    /* lis r0, 0x4330 */ // 0x80785B00
    *(8 + r1) = r0; // stw @ 0x80785B04
    r4 = r4 + 0x60b7; // 0x80785B08
    /* lfd f1, 0x38(r5) */ // 0x80785B0C
    /* stfd f0, 0x10(r1) */ // 0x80785B10
    r0 = *(0x14 + r1); // lwz @ 0x80785B14
    /* mulhw r4, r4, r0 */ // 0x80785B18
    r0 = r4 + r0; // 0x80785B1C
    r0 = r0 >> 8; // srawi
    /* srwi r4, r0, 0x1f */ // 0x80785B24
    r0 = r0 + r4; // 0x80785B28
    /* mulli r0, r0, 0x168 */ // 0x80785B2C
    /* xoris r0, r0, 0x8000 */ // 0x80785B30
    *(0xc + r1) = r0; // stw @ 0x80785B34
    /* lfd f0, 8(r1) */ // 0x80785B38
    /* fsubs f0, f0, f1 */ // 0x80785B3C
    /* fsubs f0, f2, f0 */ // 0x80785B40
    /* stfs f0, 0x3f8(r3) */ // 0x80785B44
    /* lfs f1, 0x3f8(r3) */ // 0x80785B48
    /* lfs f0, 0x34(r5) */ // 0x80785B4C
    /* fabs f1, f1 */ // 0x80785B50
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785B54
    if (>=) goto 0x0x80785b64;
    /* lfs f0, 0(r5) */ // 0x80785B5C
    /* stfs f0, 0x3f8(r3) */ // 0x80785B60
    /* lfs f1, 0x3f8(r3) */ // 0x80785B64
    /* lfs f0, 0(r5) */ // 0x80785B68
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785B6C
    if (<=) goto 0x0x80785b84;
    /* lfs f0, 0x24(r5) */ // 0x80785B74
    /* fsubs f0, f1, f0 */ // 0x80785B78
    /* stfs f0, 0x3f8(r3) */ // 0x80785B7C
    /* b 0x80785b90 */ // 0x80785B80
    /* lfs f0, 0x24(r5) */ // 0x80785B84
    /* fadds f0, f1, f0 */ // 0x80785B88
    /* stfs f0, 0x3f8(r3) */ // 0x80785B8C
    return;
}