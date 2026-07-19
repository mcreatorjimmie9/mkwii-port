/* Function at 0x808A8CF8, size=244 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808A8CF8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808A8D00
    /* lis r6, 0 */ // 0x808A8D04
    *(0x34 + r1) = r0; // stw @ 0x808A8D08
    /* lis r7, 0 */ // 0x808A8D0C
    /* lfs f0, 0(r5) */ // 0x808A8D10
    r5 = r4;
    *(0x2c + r1) = r31; // stw @ 0x808A8D18
    r4 = r7 + 0; // 0x808A8D1C
    r31 = r3;
    r6 = r6 + 0; // 0x808A8D24
    /* stfs f0, 0x14(r1) */ // 0x808A8D28
    /* li r8, 0 */ // 0x808A8D30
    /* stfs f0, 0x18(r1) */ // 0x808A8D34
    /* stfs f0, 0x1c(r1) */ // 0x808A8D38
    FUN_8089F5F0(r7, r8); // bl 0x8089F5F0
    r0 = *(0x2c + r31); // lhz @ 0x808A8D40
    /* lis r3, 0 */ // 0x808A8D44
    /* lfs f0, 0(r3) */ // 0x808A8D48
    /* lis r3, 0 */ // 0x808A8D4C
    r3 = r3 + 0; // 0x808A8D50
    r0 = r0 | 8; // 0x808A8D54
    /* lis r5, 0 */ // 0x808A8D58
    *(0 + r31) = r3; // stw @ 0x808A8D5C
    r4 = r31 + 0x30; // 0x808A8D64
    *(0x2c + r31) = r0; // sth @ 0x808A8D68
    r5 = r5 + 0; // 0x808A8D6C
    /* stfs f0, 0x3c(r31) */ // 0x808A8D70
    /* stfs f0, 0x40(r31) */ // 0x808A8D74
    /* stfs f0, 0x44(r31) */ // 0x808A8D78
    FUN_805A4464(r5); // bl 0x805A4464
    r4 = *(0x2c + r31); // lhz @ 0x808A8D80
    /* li r0, 1 */ // 0x808A8D84
    /* lfs f0, 0x10(r1) */ // 0x808A8D88
    /* lis r3, 0 */ // 0x808A8D8C
    r5 = r4 | 1; // 0x808A8D90
    /* lfs f1, 0xc(r1) */ // 0x808A8D94
    /* lfs f2, 8(r1) */ // 0x808A8D98
    /* li r4, 0xb4 */ // 0x808A8D9C
    /* stfs f2, 0x30(r31) */ // 0x808A8DA0
    *(0x2c + r31) = r5; // sth @ 0x808A8DA4
    /* stfs f1, 0x34(r31) */ // 0x808A8DA8
    /* stfs f0, 0x38(r31) */ // 0x808A8DAC
    *(4 + r31) = r0; // stw @ 0x808A8DB0
    r3 = *(0 + r3); // lwz @ 0x808A8DB4
    r3 = *(8 + r3); // lwz @ 0x808A8DB8
    FUN_805E364C(); // bl 0x805E364C
    *(0xbc + r31) = r3; // sth @ 0x808A8DC0
    /* li r4, 0 */ // 0x808A8DC4
    /* li r0, 0x96 */ // 0x808A8DC8
    r3 = r31;
    *(0xb4 + r31) = r4; // stw @ 0x808A8DD0
    *(0xb8 + r31) = r0; // stw @ 0x808A8DD4
    r31 = *(0x2c + r1); // lwz @ 0x808A8DD8
    r0 = *(0x34 + r1); // lwz @ 0x808A8DDC
    return;
}