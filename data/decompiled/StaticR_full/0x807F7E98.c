/* Function at 0x807F7E98, size=180 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807F7E98(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x807F7EA0
    /* li r0, 0xa */ // 0x807F7EA8
    *(0x3c + r1) = r31; // stw @ 0x807F7EAC
    /* lis r31, 0 */ // 0x807F7EB0
    r31 = r31 + 0; // 0x807F7EB4
    *(0x38 + r1) = r30; // stw @ 0x807F7EB8
    r30 = r3;
    *(0xb0 + r3) = r4; // stw @ 0x807F7EC0
    r4 = r30 + 0xe4; // 0x807F7EC4
    *(0xb8 + r3) = r0; // stw @ 0x807F7EC8
    /* lfs f1, 0x1c(r31) */ // 0x807F7ED0
    FUN_805A443C(r4, r3); // bl 0x805A443C
    r4 = r30 + 0x30; // 0x807F7EDC
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x18(r31) */ // 0x807F7EE8
    /* lis r3, 0 */ // 0x807F7EEC
    /* lfs f0, 0x10(r31) */ // 0x807F7EF0
    r4 = r30 + 0x30; // 0x807F7EF4
    /* fctiwz f3, f2 */ // 0x807F7EF8
    /* lfs f1, 0x14(r31) */ // 0x807F7EFC
    /* fctiwz f0, f0 */ // 0x807F7F00
    r3 = *(0 + r3); // lwz @ 0x807F7F04
    /* fctiwz f2, f1 */ // 0x807F7F08
    /* stfd f3, 0x20(r1) */ // 0x807F7F0C
    /* stfd f2, 0x28(r1) */ // 0x807F7F10
    /* lfs f1, 0xc(r31) */ // 0x807F7F18
    /* li r9, 0xc */ // 0x807F7F1C
    /* stfd f0, 0x30(r1) */ // 0x807F7F20
    r8 = *(0x24 + r1); // lwz @ 0x807F7F24
    r7 = *(0x2c + r1); // lwz @ 0x807F7F28
    r6 = *(0x34 + r1); // lwz @ 0x807F7F2C
    FUN_80818D00(r9); // bl 0x80818D00
    r0 = *(0x44 + r1); // lwz @ 0x807F7F34
    r31 = *(0x3c + r1); // lwz @ 0x807F7F38
    r30 = *(0x38 + r1); // lwz @ 0x807F7F3C
    return;
}