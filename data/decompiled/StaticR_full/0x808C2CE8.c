/* Function at 0x808C2CE8, size=300 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808C2CE8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x808C2CFC
    r0 = *(8 + r3); // lwz @ 0x808C2D00
    if (!=) goto 0x0x808c2dfc;
    r5 = *(0x6c4 + r3); // lwz @ 0x808C2D0C
    if (==) goto 0x0x808c2dfc;
    /* lis r4, 0 */ // 0x808C2D18
    /* lfs f1, 0(r5) */ // 0x808C2D1C
    /* lfs f0, 0(r4) */ // 0x808C2D20
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808C2D24
    /* cror cr0eq, cr0lt, cr0eq */ // 0x808C2D28
    /* mfcr r0 */ // 0x808C2D2C
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x808C2D30
    if (==) goto 0x0x808c2dfc;
    r3 = *(0x48 + r3); // lwz @ 0x808C2D38
    r3 = *(0 + r3); // lwz @ 0x808C2D3C
    FUN_8064A340(); // bl 0x8064A340
    if (==) goto 0x0x808c2d58;
    r3 = *(0x48 + r31); // lwz @ 0x808C2D4C
    r30 = *(0 + r3); // lwz @ 0x808C2D50
    /* b 0x808c2dc8 */ // 0x808C2D54
    r3 = *(0x48 + r31); // lwz @ 0x808C2D58
    r3 = *(4 + r3); // lwz @ 0x808C2D5C
    FUN_8064A340(); // bl 0x8064A340
    if (==) goto 0x0x808c2d78;
    r3 = *(0x48 + r31); // lwz @ 0x808C2D6C
    r30 = *(4 + r3); // lwz @ 0x808C2D70
    /* b 0x808c2dc8 */ // 0x808C2D74
    /* lis r3, 0 */ // 0x808C2D78
    r5 = *(0 + r3); // lwz @ 0x808C2D7C
    r0 = *(0x36 + r5); // lha @ 0x808C2D80
    if (<) goto 0x0x808c2da8;
    /* lis r3, 1 */ // 0x808C2D8C
    /* clrlwi r4, r0, 0x18 */ // 0x808C2D90
    r0 = r3 + -0x6c10; // 0x808C2D94
    r0 = r0 * r4; // 0x808C2D98
    r3 = r5 + r0; // 0x808C2D9C
    r3 = r3 + 0x38; // 0x808C2DA0
    /* b 0x808c2dac */ // 0x808C2DA4
    /* li r3, 0 */ // 0x808C2DA8
    /* addis r4, r3, 1 */ // 0x808C2DAC
    r3 = *(0x48 + r31); // lwz @ 0x808C2DB0
    r4 = *(-0x6edc + r4); // lwz @ 0x808C2DB4
    r0 = r4 + -2; // 0x808C2DB8
    /* cntlzw r0, r0 */ // 0x808C2DBC
    r0 = r0 rlwinm 0x1d; // rlwinm
    /* lwzx r30, r3, r0 */ // 0x808C2DC4
    r12 = *(0 + r31); // lwz @ 0x808C2DC8
    r3 = r31;
    r4 = r30;
    /* li r5, 0 */ // 0x808C2DD4
    r12 = *(0x64 + r12); // lwz @ 0x808C2DD8
    /* mtctr r12 */ // 0x808C2DDC
    /* bctrl  */ // 0x808C2DE0
    r3 = r30;
    FUN_80649F54(r5, r3); // bl 0x80649F54
    r3 = r31;
    r4 = r30;
    /* li r5, 0 */ // 0x808C2DF4
    FUN_808C2E14(r3, r3, r4, r5); // bl 0x808C2E14
    r0 = *(0x14 + r1); // lwz @ 0x808C2DFC
    r31 = *(0xc + r1); // lwz @ 0x808C2E00
    r30 = *(8 + r1); // lwz @ 0x808C2E04
    return;
}