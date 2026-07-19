/* Function at 0x806A9D38, size=360 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_806A9D38(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x806A9D4C
    *(0x34 + r1) = r29; // stw @ 0x806A9D50
    /* lis r29, 0 */ // 0x806A9D54
    r29 = r29 + 0; // 0x806A9D58
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806A9D60
    /* lis r3, 0 */ // 0x806A9D64
    r4 = r4 + 0; // 0x806A9D68
    *(0 + r31) = r4; // stw @ 0x806A9D6C
    r5 = r29 + 0x24; // 0x806A9D70
    /* lis r6, 0 */ // 0x806A9D74
    r30 = *(0x24 + r29); // lwz @ 0x806A9D78
    /* lis r4, 0 */ // 0x806A9D7C
    r12 = *(4 + r5); // lwz @ 0x806A9D80
    r3 = r3 + 0; // 0x806A9D84
    r11 = *(8 + r5); // lwz @ 0x806A9D88
    r7 = r29 + 0x30; // 0x806A9D8C
    *(0x54 + r31) = r11; // stw @ 0x806A9D90
    r6 = r6 + 0; // 0x806A9D94
    r5 = r29 + 0x3c; // 0x806A9D98
    r4 = r4 + 0; // 0x806A9D9C
    *(0x44 + r31) = r3; // stw @ 0x806A9DA0
    r3 = r31 + 0x80; // 0x806A9DA4
    *(0x48 + r31) = r31; // stw @ 0x806A9DA8
    *(0x4c + r31) = r30; // stw @ 0x806A9DAC
    *(0x50 + r31) = r12; // stw @ 0x806A9DB0
    r10 = *(0x30 + r29); // lwz @ 0x806A9DB4
    r9 = *(4 + r7); // lwz @ 0x806A9DB8
    r8 = *(8 + r7); // lwz @ 0x806A9DBC
    *(0x68 + r31) = r8; // stw @ 0x806A9DC0
    *(0x58 + r31) = r6; // stw @ 0x806A9DC4
    *(0x5c + r31) = r31; // stw @ 0x806A9DC8
    *(0x60 + r31) = r10; // stw @ 0x806A9DCC
    *(0x64 + r31) = r9; // stw @ 0x806A9DD0
    r7 = *(0x3c + r29); // lwz @ 0x806A9DD4
    r6 = *(4 + r5); // lwz @ 0x806A9DD8
    r0 = *(8 + r5); // lwz @ 0x806A9DDC
    *(0x20 + r1) = r30; // stw @ 0x806A9DE0
    *(0x24 + r1) = r12; // stw @ 0x806A9DE4
    *(0x28 + r1) = r11; // stw @ 0x806A9DE8
    *(0x14 + r1) = r10; // stw @ 0x806A9DEC
    *(0x18 + r1) = r9; // stw @ 0x806A9DF0
    *(0x1c + r1) = r8; // stw @ 0x806A9DF4
    *(8 + r1) = r7; // stw @ 0x806A9DF8
    *(0xc + r1) = r6; // stw @ 0x806A9DFC
    *(0x10 + r1) = r0; // stw @ 0x806A9E00
    *(0x6c + r31) = r4; // stw @ 0x806A9E04
    *(0x70 + r31) = r31; // stw @ 0x806A9E08
    *(0x74 + r31) = r7; // stw @ 0x806A9E0C
    *(0x78 + r31) = r6; // stw @ 0x806A9E10
    *(0x7c + r31) = r0; // stw @ 0x806A9E14
    FUN_80669F74(); // bl 0x80669F74
    r29 = r31 + 0x2a4; // 0x806A9E1C
    r3 = r29;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806A9E28
    r3 = r31 + 0x418; // 0x806A9E2C
    r4 = r4 + 0; // 0x806A9E30
    *(0 + r29) = r4; // stw @ 0x806A9E34
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    r3 = r31 + 0x58c; // 0x806A9E3C
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r3 = r31 + 0x7e0; // 0x806A9E44
    FUN_806497A4(r3, r3); // bl 0x806497A4
    r29 = r31 + 0xa34; // 0x806A9E4C
    r3 = r29;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806A9E58
    /* lis r5, 0 */ // 0x806A9E5C
    /* lfs f0, 0(r3) */ // 0x806A9E60
    r5 = r5 + 0; // 0x806A9E64
    /* li r4, 0x7d1 */ // 0x806A9E68
    /* li r0, 0 */ // 0x806A9E6C
    *(0 + r29) = r5; // stw @ 0x806A9E70
    r3 = r31;
    *(0x254 + r29) = r4; // stw @ 0x806A9E78
    *(0x258 + r29) = r0; // stw @ 0x806A9E7C
    /* stfs f0, 0x25c(r29) */ // 0x806A9E80
    r31 = *(0x3c + r1); // lwz @ 0x806A9E84
    r30 = *(0x38 + r1); // lwz @ 0x806A9E88
    r29 = *(0x34 + r1); // lwz @ 0x806A9E8C
    r0 = *(0x44 + r1); // lwz @ 0x806A9E90
    return;
}