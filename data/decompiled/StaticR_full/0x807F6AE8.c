/* Function at 0x807F6AE8, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807F6AE8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 1 */ // 0x807F6AF0
    *(0x1c + r1) = r31; // stw @ 0x807F6AF8
    /* lis r31, 0 */ // 0x807F6AFC
    /* lfs f2, 0(r31) */ // 0x807F6B00
    *(0x18 + r1) = r30; // stw @ 0x807F6B04
    /* lis r30, 0 */ // 0x807F6B08
    /* lfs f1, 0(r30) */ // 0x807F6B0C
    *(0x14 + r1) = r29; // stw @ 0x807F6B10
    r29 = r3;
    r4 = *(8 + r3); // lwz @ 0x807F6B18
    r3 = *(0x28 + r4); // lwz @ 0x807F6B1C
    /* li r4, 3 */ // 0x807F6B20
    FUN_805E73A4(r4); // bl 0x805E73A4
    r3 = *(0xe8 + r29); // lwz @ 0x807F6B28
    /* li r4, 3 */ // 0x807F6B2C
    /* lfs f1, 0(r30) */ // 0x807F6B30
    /* li r5, 1 */ // 0x807F6B34
    r3 = *(8 + r3); // lwz @ 0x807F6B38
    /* lfs f2, 0(r31) */ // 0x807F6B3C
    r3 = *(0x28 + r3); // lwz @ 0x807F6B40
    FUN_805E73A4(r5); // bl 0x805E73A4
    r3 = *(8 + r29); // lwz @ 0x807F6B48
    /* li r4, 0 */ // 0x807F6B4C
    r3 = *(0x28 + r3); // lwz @ 0x807F6B50
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807F6B58
    r12 = *(8 + r12); // lwz @ 0x807F6B5C
    /* mtctr r12 */ // 0x807F6B60
    /* bctrl  */ // 0x807F6B64
    /* fctiwz f0, f1 */ // 0x807F6B68
    /* li r0, 4 */ // 0x807F6B6C
    *(0xb0 + r29) = r0; // stw @ 0x807F6B70
    /* stfd f0, 8(r1) */ // 0x807F6B74
    r0 = *(0xc + r1); // lwz @ 0x807F6B78
    *(0xdc + r29) = r0; // stw @ 0x807F6B7C
    r31 = *(0x1c + r1); // lwz @ 0x807F6B80
    r30 = *(0x18 + r1); // lwz @ 0x807F6B84
    r29 = *(0x14 + r1); // lwz @ 0x807F6B88
    r0 = *(0x24 + r1); // lwz @ 0x807F6B8C
    return;
}