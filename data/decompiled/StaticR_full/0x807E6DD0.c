/* Function at 0x807E6DD0, size=336 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807E6DD0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 1 */ // 0x807E6DE0
    *(0x58 + r1) = r30; // stw @ 0x807E6DE4
    /* lis r30, 0 */ // 0x807E6DE8
    r30 = r30 + 0; // 0x807E6DEC
    *(0x54 + r1) = r29; // stw @ 0x807E6DF0
    /* lis r29, 0 */ // 0x807E6DF4
    r29 = r29 + 0; // 0x807E6DF8
    *(0x50 + r1) = r28; // stw @ 0x807E6DFC
    r28 = r3;
    r4 = r28 + 0x114; // 0x807E6E04
    *(0xb4 + r3) = r31; // stw @ 0x807E6E08
    r0 = *(0xc + r29); // lwz @ 0x807E6E0C
    *(0xbc + r3) = r0; // stw @ 0x807E6E10
    /* lfs f1, 0x28(r29) */ // 0x807E6E18
    FUN_805A443C(r3); // bl 0x805A443C
    r4 = r28 + 0x30; // 0x807E6E24
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x24(r29) */ // 0x807E6E30
    /* lis r3, 0 */ // 0x807E6E34
    /* lfs f0, 0x18(r29) */ // 0x807E6E38
    r4 = r28 + 0x30; // 0x807E6E3C
    /* fctiwz f3, f2 */ // 0x807E6E40
    /* lfs f1, 0x20(r29) */ // 0x807E6E44
    /* fctiwz f0, f0 */ // 0x807E6E48
    r3 = *(0 + r3); // lwz @ 0x807E6E4C
    /* fctiwz f2, f1 */ // 0x807E6E50
    /* stfd f3, 0x30(r1) */ // 0x807E6E54
    /* stfd f2, 0x38(r1) */ // 0x807E6E58
    /* lfs f1, 0x14(r29) */ // 0x807E6E60
    /* li r9, 0xc */ // 0x807E6E64
    /* stfd f0, 0x40(r1) */ // 0x807E6E68
    r8 = *(0x34 + r1); // lwz @ 0x807E6E6C
    r7 = *(0x3c + r1); // lwz @ 0x807E6E70
    r6 = *(0x44 + r1); // lwz @ 0x807E6E74
    FUN_80818D00(r9); // bl 0x80818D00
    r3 = *(8 + r28); // lwz @ 0x807E6E7C
    /* li r4, 0 */ // 0x807E6E80
    /* lfs f1, 0(r30) */ // 0x807E6E84
    r3 = *(0x28 + r3); // lwz @ 0x807E6E88
    /* lfs f2, 0x28(r30) */ // 0x807E6E8C
    FUN_805E70EC(r4); // bl 0x805E70EC
    r0 = *(0x54 + r28); // lbz @ 0x807E6E94
    if (==) goto 0x0x807e6ea8;
    r3 = r28 + 0x48; // 0x807E6EA0
    /* b 0x807e6ed4 */ // 0x807E6EA4
    *(0x54 + r28) = r31; // stb @ 0x807E6EA8
    r4 = r28 + 0x58; // 0x807E6EB0
    FUN_8070E704(r3, r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x807E6EB8
    r3 = r28 + 0x48; // 0x807E6EBC
    /* stfs f0, 0x48(r28) */ // 0x807E6EC0
    /* lfs f0, 0xc(r1) */ // 0x807E6EC4
    /* stfs f0, 0x4c(r28) */ // 0x807E6EC8
    /* lfs f0, 0x10(r1) */ // 0x807E6ECC
    /* stfs f0, 0x50(r28) */ // 0x807E6ED0
    /* lfs f1, 4(r3) */ // 0x807E6ED4
    /* lfs f0, 0x48(r30) */ // 0x807E6ED8
    /* stfs f1, 0xfc(r28) */ // 0x807E6EDC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807E6EE0
    if (>=) goto 0x0x807e6eec;
    /* b 0x807e6ef4 */ // 0x807E6EE8
    /* lfs f0, 0x44(r30) */ // 0x807E6EEC
    /* fsubs f1, f1, f0 */ // 0x807E6EF0
    r0 = *(0xec + r28); // lwz @ 0x807E6EF4
    /* stfs f1, 0xfc(r28) */ // 0x807E6EF8
    *(0xf0 + r28) = r0; // stw @ 0x807E6EFC
    r31 = *(0x5c + r1); // lwz @ 0x807E6F00
    r30 = *(0x58 + r1); // lwz @ 0x807E6F04
    r29 = *(0x54 + r1); // lwz @ 0x807E6F08
    r28 = *(0x50 + r1); // lwz @ 0x807E6F0C
    r0 = *(0x64 + r1); // lwz @ 0x807E6F10
    return;
}