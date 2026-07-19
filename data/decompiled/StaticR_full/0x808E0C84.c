/* Function at 0x808E0C84, size=348 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_808E0C84(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x808E0C94
    r31 = r31 + 0; // 0x808E0C98
    *(0x68 + r1) = r30; // stw @ 0x808E0C9C
    *(0x64 + r1) = r29; // stw @ 0x808E0CA0
    *(0x60 + r1) = r28; // stw @ 0x808E0CA4
    r28 = r3;
    r4 = *(4 + r3); // lwz @ 0x808E0CAC
    r0 = *(4 + r4); // lwz @ 0x808E0CB0
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x808E0CB4
    if (==) goto 0x0x808e0df8;
    r0 = *(8 + r3); // lwz @ 0x808E0CBC
    if (>=) goto 0x0x808e0d2c;
    r12 = *(0 + r4); // lwz @ 0x808E0CC8
    r3 = r4;
    /* lfs f1, 0(r31) */ // 0x808E0CD0
    r12 = *(0x18 + r12); // lwz @ 0x808E0CD4
    /* mtctr r12 */ // 0x808E0CD8
    /* bctrl  */ // 0x808E0CDC
    /* lis r4, 0 */ // 0x808E0CE0
    r4 = r4 + 0; // 0x808E0CE8
    r5 = r28 + 0x1c; // 0x808E0CEC
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
    r29 = *(4 + r28); // lwz @ 0x808E0CF4
    /* li r30, 0 */ // 0x808E0CF8
    r3 = *(0x14 + r29); // lwz @ 0x808E0CFC
    r3 = *(0 + r3); // lwz @ 0x808E0D00
    if (==) goto 0x0x808e0d18;
    /* li r4, 0 */ // 0x808E0D10
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x808E0D18
    r29 = r29 + 4; // 0x808E0D1C
    if (<) goto 0x0x808e0cfc;
    /* b 0x808e0d84 */ // 0x808E0D28
    r3 = *(0x28 + r4); // lwz @ 0x808E0D2C
    /* li r4, 0 */ // 0x808E0D30
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x808E0D38
    if (==) goto 0x0x808e0d84;
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* li r4, 0x64 */ // 0x808E0D50
    FUN_805E364C(r3, r3, r4); // bl 0x805E364C
    if (!=) goto 0x0x808e0d78;
    r3 = *(4 + r28); // lwz @ 0x808E0D60
    /* li r4, 0 */ // 0x808E0D64
    /* lfs f1, 4(r31) */ // 0x808E0D68
    r3 = *(0x28 + r3); // lwz @ 0x808E0D6C
    /* lfs f2, 0x10(r31) */ // 0x808E0D70
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* li r4, -1 */ // 0x808E0D7C
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    /* lis r3, 0 */ // 0x808E0D84
    r3 = *(0 + r3); // lwz @ 0x808E0D88
    r3 = *(0 + r3); // lwz @ 0x808E0D8C
    r0 = *(0 + r3); // lwz @ 0x808E0D90
    if (==) goto 0x0x808e0da4;
    if (!=) goto 0x0x808e0df8;
    /* lis r4, 0 */ // 0x808E0DA4
    r3 = *(4 + r28); // lwz @ 0x808E0DA8
    r5 = *(0 + r4); // lwz @ 0x808E0DAC
    /* li r4, 3 */ // 0x808E0DB0
    r3 = *(0x28 + r3); // lwz @ 0x808E0DB4
    r5 = *(0x14 + r5); // lwz @ 0x808E0DB8
    r5 = *(0x44 + r5); // lwz @ 0x808E0DBC
    r5 = *(0 + r5); // lwz @ 0x808E0DC0
    r30 = *(0x64 + r5); // lwz @ 0x808E0DC4
    FUN_805E7060(); // bl 0x805E7060
    /* xoris r4, r30, 0x8000 */ // 0x808E0DCC
    /* lis r0, 0x4330 */ // 0x808E0DD0
    r12 = *(0 + r3); // lwz @ 0x808E0DD4
    *(0x54 + r1) = r4; // stw @ 0x808E0DD8
    /* lfd f1, 0x18(r31) */ // 0x808E0DDC
}