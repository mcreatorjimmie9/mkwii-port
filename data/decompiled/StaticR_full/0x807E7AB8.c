/* Function at 0x807E7AB8, size=224 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807E7AB8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 1 */ // 0x807E7AC4
    *(0x3c + r1) = r31; // stw @ 0x807E7AC8
    /* lis r31, 0 */ // 0x807E7ACC
    r31 = r31 + 0; // 0x807E7AD0
    *(0x38 + r1) = r30; // stw @ 0x807E7AD4
    r30 = r3;
    r4 = r30 + 0x114; // 0x807E7ADC
    *(0xb0 + r3) = r0; // stw @ 0x807E7AE0
    *(0xb4 + r3) = r0; // stw @ 0x807E7AE4
    r0 = *(0xc + r31); // lwz @ 0x807E7AE8
    *(0xbc + r3) = r0; // stw @ 0x807E7AEC
    /* lfs f1, 0x28(r31) */ // 0x807E7AF4
    FUN_805A443C(r3); // bl 0x805A443C
    r4 = r30 + 0x30; // 0x807E7B00
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x24(r31) */ // 0x807E7B0C
    /* lis r3, 0 */ // 0x807E7B10
    /* lfs f0, 0x18(r31) */ // 0x807E7B14
    r4 = r30 + 0x30; // 0x807E7B18
    /* fctiwz f3, f2 */ // 0x807E7B1C
    /* lfs f1, 0x20(r31) */ // 0x807E7B20
    /* fctiwz f0, f0 */ // 0x807E7B24
    r3 = *(0 + r3); // lwz @ 0x807E7B28
    /* fctiwz f2, f1 */ // 0x807E7B2C
    /* stfd f3, 0x20(r1) */ // 0x807E7B30
    /* stfd f2, 0x28(r1) */ // 0x807E7B34
    /* lfs f1, 0x14(r31) */ // 0x807E7B3C
    /* li r9, 0xc */ // 0x807E7B40
    /* stfd f0, 0x30(r1) */ // 0x807E7B44
    r8 = *(0x24 + r1); // lwz @ 0x807E7B48
    r7 = *(0x2c + r1); // lwz @ 0x807E7B4C
    r6 = *(0x34 + r1); // lwz @ 0x807E7B50
    FUN_80818D00(r9); // bl 0x80818D00
    r4 = *(8 + r30); // lwz @ 0x807E7B58
    /* lis r3, 0 */ // 0x807E7B5C
    /* lis r5, 0 */ // 0x807E7B60
    /* lfs f1, 0(r3) */ // 0x807E7B64
    r3 = *(0x28 + r4); // lwz @ 0x807E7B68
    /* li r4, 0 */ // 0x807E7B6C
    /* lfs f2, 0(r5) */ // 0x807E7B70
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r0 = *(0xec + r30); // lwz @ 0x807E7B78
    *(0xf0 + r30) = r0; // stw @ 0x807E7B7C
    r31 = *(0x3c + r1); // lwz @ 0x807E7B80
    r30 = *(0x38 + r1); // lwz @ 0x807E7B84
    r0 = *(0x44 + r1); // lwz @ 0x807E7B88
    return;
}