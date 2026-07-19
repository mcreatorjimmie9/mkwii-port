/* Function at 0x807D0CF8, size=292 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807D0CF8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807D0D08
    r31 = r31 + 0; // 0x807D0D0C
    *(0x48 + r1) = r30; // stw @ 0x807D0D10
    r30 = r6;
    *(0x44 + r1) = r29; // stw @ 0x807D0D18
    r29 = r5;
    *(0x40 + r1) = r28; // stw @ 0x807D0D20
    r28 = r4;
    r0 = *(0 + r31); // lbz @ 0x807D0D28
    /* extsb. r0, r0 */ // 0x807D0D2C
    if (!=) goto 0x0x807d0d6c;
    /* lis r5, 0 */ // 0x807D0D34
    /* lis r4, 0 */ // 0x807D0D38
    /* lfs f1, 0(r5) */ // 0x807D0D3C
    r3 = r31 + 0x10; // 0x807D0D40
    /* lfs f0, 0(r4) */ // 0x807D0D44
    /* lis r4, 0 */ // 0x807D0D48
    /* stfs f1, 0x10(r31) */ // 0x807D0D4C
    r4 = r4 + 0; // 0x807D0D50
    r5 = r31 + 4; // 0x807D0D54
    /* stfs f0, 4(r3) */ // 0x807D0D58
    /* stfs f1, 8(r3) */ // 0x807D0D5C
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* li r0, 1 */ // 0x807D0D64
    *(0 + r31) = r0; // stb @ 0x807D0D68
    r4 = r29;
    r5 = r28;
    FUN_805A4498(r4, r5, r3); // bl 0x805A4498
    r4 = r30;
    r5 = r29;
    FUN_805A4498(r3, r4, r5, r3); // bl 0x805A4498
    r5 = r31 + 0x10; // 0x807D0D94
    FUN_805C6D88(r3, r3, r4, r5); // bl 0x805C6D88
    /* lfs f6, 8(r1) */ // 0x807D0D9C
    /* lis r3, 0 */ // 0x807D0DA0
    /* lfs f5, 0xc(r1) */ // 0x807D0DA4
    /* lfs f1, 0x20(r1) */ // 0x807D0DA8
    /* lfs f4, 0x10(r1) */ // 0x807D0DAC
    /* lfs f3, 0x28(r1) */ // 0x807D0DB0
    /* fmuls f2, f6, f1 */ // 0x807D0DB4
    /* lfs f0, 0x24(r1) */ // 0x807D0DB8
    /* fmuls f3, f4, f3 */ // 0x807D0DBC
    /* stfs f6, 0x14(r1) */ // 0x807D0DC0
    /* fmuls f1, f5, f0 */ // 0x807D0DC4
    /* lfs f0, 0(r3) */ // 0x807D0DC8
    /* stfs f5, 0x18(r1) */ // 0x807D0DCC
    /* fadds f1, f2, f1 */ // 0x807D0DD0
    /* stfs f4, 0x1c(r1) */ // 0x807D0DD4
    /* fadds f1, f3, f1 */ // 0x807D0DD8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D0DDC
    if (>=) goto 0x0x807d0df4;
    /* lis r3, 0 */ // 0x807D0DE4
    /* lfs f0, 0(r3) */ // 0x807D0DE8
    /* fneg f1, f0 */ // 0x807D0DEC
    /* b 0x807d0dfc */ // 0x807D0DF0
    /* lis r3, 0 */ // 0x807D0DF4
    /* lfs f1, 0(r3) */ // 0x807D0DF8
    r0 = *(0x54 + r1); // lwz @ 0x807D0DFC
    r31 = *(0x4c + r1); // lwz @ 0x807D0E00
    r30 = *(0x48 + r1); // lwz @ 0x807D0E04
    r29 = *(0x44 + r1); // lwz @ 0x807D0E08
    r28 = *(0x40 + r1); // lwz @ 0x807D0E0C
    return;
}