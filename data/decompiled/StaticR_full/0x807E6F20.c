/* Function at 0x807E6F20, size=180 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807E6F20(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 1 */ // 0x807E6F2C
    *(0x3c + r1) = r31; // stw @ 0x807E6F30
    /* lis r31, 0 */ // 0x807E6F34
    r31 = r31 + 0; // 0x807E6F38
    *(0x38 + r1) = r30; // stw @ 0x807E6F3C
    r30 = r3;
    r4 = r30 + 0x114; // 0x807E6F44
    *(0xb4 + r3) = r0; // stw @ 0x807E6F48
    r0 = *(0xc + r31); // lwz @ 0x807E6F4C
    *(0xbc + r3) = r0; // stw @ 0x807E6F50
    /* lfs f1, 0x28(r31) */ // 0x807E6F58
    FUN_805A443C(r3); // bl 0x805A443C
    r4 = r30 + 0x30; // 0x807E6F64
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x24(r31) */ // 0x807E6F70
    /* lis r3, 0 */ // 0x807E6F74
    /* lfs f0, 0x18(r31) */ // 0x807E6F78
    r4 = r30 + 0x30; // 0x807E6F7C
    /* fctiwz f3, f2 */ // 0x807E6F80
    /* lfs f1, 0x20(r31) */ // 0x807E6F84
    /* fctiwz f0, f0 */ // 0x807E6F88
    r3 = *(0 + r3); // lwz @ 0x807E6F8C
    /* fctiwz f2, f1 */ // 0x807E6F90
    /* stfd f3, 0x20(r1) */ // 0x807E6F94
    /* stfd f2, 0x28(r1) */ // 0x807E6F98
    /* lfs f1, 0x14(r31) */ // 0x807E6FA0
    /* li r9, 0xc */ // 0x807E6FA4
    /* stfd f0, 0x30(r1) */ // 0x807E6FA8
    r8 = *(0x24 + r1); // lwz @ 0x807E6FAC
    r7 = *(0x2c + r1); // lwz @ 0x807E6FB0
    r6 = *(0x34 + r1); // lwz @ 0x807E6FB4
    FUN_80818D00(r9); // bl 0x80818D00
    r0 = *(0x44 + r1); // lwz @ 0x807E6FBC
    r31 = *(0x3c + r1); // lwz @ 0x807E6FC0
    r30 = *(0x38 + r1); // lwz @ 0x807E6FC4
    return;
}