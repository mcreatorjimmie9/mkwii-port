/* Function at 0x807B09A0, size=348 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_807B09A0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807B09A8
    /* li r0, 0 */ // 0x807B09B0
    /* lfs f1, 0(r4) */ // 0x807B09B4
    *(0x1c + r1) = r31; // stw @ 0x807B09B8
    *(0x18 + r1) = r30; // stw @ 0x807B09BC
    /* lis r30, 0 */ // 0x807B09C0
    r30 = r30 + 0; // 0x807B09C4
    *(0x14 + r1) = r29; // stw @ 0x807B09C8
    r29 = r3;
    r5 = *(0 + r3); // lwz @ 0x807B09D0
    *(8 + r5) = r0; // stw @ 0x807B09D4
    r3 = *(0 + r3); // lwz @ 0x807B09D8
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(0 + r29); // lwz @ 0x807B09E0
    /* li r4, 0 */ // 0x807B09E4
    /* lfs f1, 0x70(r30) */ // 0x807B09E8
    /* lfs f2, 0x78(r30) */ // 0x807B09EC
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x78(r30) */ // 0x807B09F4
    /* lfs f1, 0x14(r29) */ // 0x807B09F8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B09FC
    if (<=) goto 0x0x807b0a08;
    /* b 0x807b0a0c */ // 0x807B0A04
    /* fmr f1, f0 */ // 0x807B0A08
    /* stfs f1, 0x14(r29) */ // 0x807B0A0C
    /* lis r31, 0 */ // 0x807B0A10
    r3 = *(4 + r29); // lwz @ 0x807B0A14
    /* li r0, 0 */ // 0x807B0A18
    /* lfs f1, 0(r31) */ // 0x807B0A1C
    *(8 + r3) = r0; // stw @ 0x807B0A20
    r3 = *(4 + r29); // lwz @ 0x807B0A24
    FUN_807D021C(); // bl 0x807D021C
    /* lis r4, 0 */ // 0x807B0A2C
    r3 = *(4 + r29); // lwz @ 0x807B0A30
    /* lfs f1, 0(r4) */ // 0x807B0A34
    /* li r4, 0 */ // 0x807B0A38
    /* lfs f2, 0x7c(r30) */ // 0x807B0A3C
    FUN_807D0288(r4, r4); // bl 0x807D0288
    r3 = *(4 + r29); // lwz @ 0x807B0A44
    /* li r4, 0 */ // 0x807B0A48
    /* lfs f1, 0(r31) */ // 0x807B0A4C
    /* lfs f2, 0x80(r30) */ // 0x807B0A50
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x78(r30) */ // 0x807B0A58
    /* lfs f1, 0x14(r29) */ // 0x807B0A5C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B0A60
    if (<=) goto 0x0x807b0a6c;
    /* b 0x807b0a70 */ // 0x807B0A68
    /* fmr f1, f0 */ // 0x807B0A6C
    /* stfs f1, 0x14(r29) */ // 0x807B0A70
    /* lis r31, 0 */ // 0x807B0A74
    r3 = *(8 + r29); // lwz @ 0x807B0A78
    /* li r0, 0 */ // 0x807B0A7C
    /* lfs f1, 0(r31) */ // 0x807B0A80
    *(8 + r3) = r0; // stw @ 0x807B0A84
    r3 = *(8 + r29); // lwz @ 0x807B0A88
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(8 + r29); // lwz @ 0x807B0A90
    /* li r4, 0 */ // 0x807B0A94
    /* lfs f1, 0(r31) */ // 0x807B0A98
    /* lfs f2, 0x7c(r30) */ // 0x807B0A9C
    FUN_807D0288(r4); // bl 0x807D0288
    /* lis r4, 0 */ // 0x807B0AA4
    r3 = *(8 + r29); // lwz @ 0x807B0AA8
    /* lfs f1, 0(r4) */ // 0x807B0AAC
    /* lfs f2, 0x80(r30) */ // 0x807B0AB0
    r4 = *(0x8c + r30); // lha @ 0x807B0AB4
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f1, 0x7c(r30) */ // 0x807B0ABC
    /* lfs f0, 0x80(r30) */ // 0x807B0AC0
    /* lfs f2, 0x14(r29) */ // 0x807B0AC4
    /* fadds f0, f1, f0 */ // 0x807B0AC8
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807B0ACC
    if (<=) goto 0x0x807b0ad8;
    /* b 0x807b0adc */ // 0x807B0AD4
    /* fmr f2, f0 */ // 0x807B0AD8
    /* stfs f2, 0x14(r29) */ // 0x807B0ADC
    r31 = *(0x1c + r1); // lwz @ 0x807B0AE0
    r30 = *(0x18 + r1); // lwz @ 0x807B0AE4
    r29 = *(0x14 + r1); // lwz @ 0x807B0AE8
    r0 = *(0x24 + r1); // lwz @ 0x807B0AEC
    return;
}