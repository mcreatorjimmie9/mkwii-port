/* Function at 0x80887CB4, size=308 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80887CB4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x80887CBC
    /* lis r31, 0 */ // 0x80887CC8
    r31 = r31 + 0; // 0x80887CCC
    *(0x88 + r1) = r30; // stw @ 0x80887CD0
    r30 = r4;
    *(0x84 + r1) = r29; // stw @ 0x80887CD8
    r29 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80887CE4
    r0 = *(0x54 + r29); // lbz @ 0x80887CE8
    r3 = r3 + 0; // 0x80887CEC
    *(0 + r29) = r3; // stw @ 0x80887CF0
    r3 = *(0 + r30); // lwz @ 0x80887CF8
    r0 = *(0x2e + r3); // lha @ 0x80887CFC
    /* mulli r0, r0, 0x3c */ // 0x80887D00
    *(0xb8 + r29) = r0; // stw @ 0x80887D04
    r3 = *(0 + r30); // lwz @ 0x80887D08
    r0 = *(0x32 + r3); // lha @ 0x80887D0C
    /* mulli r0, r0, 0x3c */ // 0x80887D10
    *(0xbc + r29) = r0; // stw @ 0x80887D14
    if (==) goto 0x0x80887d24;
    r5 = r29 + 0x48; // 0x80887D1C
    /* b 0x80887d54 */ // 0x80887D20
    /* li r0, 1 */ // 0x80887D24
    *(0x54 + r29) = r0; // stb @ 0x80887D28
    r4 = r29 + 0x58; // 0x80887D30
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x80887D38
    r5 = r29 + 0x48; // 0x80887D3C
    /* stfs f0, 0x48(r29) */ // 0x80887D40
    /* lfs f0, 0xc(r1) */ // 0x80887D44
    /* stfs f0, 0x4c(r29) */ // 0x80887D48
    /* lfs f0, 0x10(r1) */ // 0x80887D4C
    /* stfs f0, 0x50(r29) */ // 0x80887D50
    r7 = *(0 + r5); // lwz @ 0x80887D54
    r6 = *(4 + r5); // lwz @ 0x80887D5C
    r4 = r29 + 0x30; // 0x80887D60
    r0 = *(8 + r5); // lwz @ 0x80887D64
    *(0xc0 + r29) = r7; // stw @ 0x80887D6C
    /* lfs f2, 0(r31) */ // 0x80887D70
    *(0xc4 + r29) = r6; // stw @ 0x80887D74
    /* lfs f1, 0x7c(r31) */ // 0x80887D78
    *(0xc8 + r29) = r0; // stw @ 0x80887D7C
    /* lfs f0, 0x80(r31) */ // 0x80887D80
    r6 = *(0 + r30); // lwz @ 0x80887D84
    r6 = *(0x2c + r6); // lha @ 0x80887D88
    /* neg r0, r6 */ // 0x80887D8C
    /* andc r0, r0, r6 */ // 0x80887D90
    /* srwi r0, r0, 0x1f */ // 0x80887D94
    *(0xcd + r29) = r0; // stb @ 0x80887D98
    /* stfs f2, 0x68(r1) */ // 0x80887D9C
    /* stfs f1, 0x6c(r1) */ // 0x80887DA0
    /* stfs f0, 0x70(r1) */ // 0x80887DA4
    FUN_805A4464(); // bl 0x805A4464
    r0 = *(0x2c + r29); // lhz @ 0x80887DAC
    /* li r3, 0x18c */ // 0x80887DB0
    /* lfs f1, 0x64(r1) */ // 0x80887DB4
    /* lfs f2, 0x60(r1) */ // 0x80887DB8
    r0 = r0 | 9; // 0x80887DBC
    /* lfs f3, 0x5c(r1) */ // 0x80887DC0
    /* lfs f0, 0x84(r31) */ // 0x80887DC4
    /* stfs f3, 0x30(r29) */ // 0x80887DC8
    /* stfs f2, 0x34(r29) */ // 0x80887DCC
    /* stfs f1, 0x38(r29) */ // 0x80887DD0
    *(0x2c + r29) = r0; // sth @ 0x80887DD4
    /* stfs f0, 0x3c(r29) */ // 0x80887DD8
    /* stfs f0, 0x40(r29) */ // 0x80887DDC
    /* stfs f0, 0x44(r29) */ // 0x80887DE0
    FUN_805E3430(); // bl 0x805E3430
}