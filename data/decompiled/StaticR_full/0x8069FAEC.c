/* Function at 0x8069FAEC, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8069FAEC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8069FAF4
    /* lis r5, 0 */ // 0x8069FAF8
    *(0x24 + r1) = r0; // stw @ 0x8069FAFC
    /* li r0, 0xff */ // 0x8069FB00
    /* lfs f0, 0(r4) */ // 0x8069FB04
    r5 = r5 + 0; // 0x8069FB08
    *(0x1c + r1) = r31; // stw @ 0x8069FB0C
    /* li r31, 0 */ // 0x8069FB10
    *(0x18 + r1) = r30; // stw @ 0x8069FB14
    /* lis r30, 0 */ // 0x8069FB18
    /* lfs f1, 0(r30) */ // 0x8069FB1C
    *(0x14 + r1) = r29; // stw @ 0x8069FB20
    r29 = r3;
    *(0 + r3) = r5; // stw @ 0x8069FB28
    /* stfs f1, 4(r3) */ // 0x8069FB2C
    /* stfs f1, 8(r3) */ // 0x8069FB30
    /* stfs f1, 0xc(r3) */ // 0x8069FB34
    /* stfs f0, 0x10(r3) */ // 0x8069FB38
    /* stfs f0, 0x14(r3) */ // 0x8069FB3C
    *(0x18 + r3) = r0; // stb @ 0x8069FB40
    /* stfs f1, 0x1c(r3) */ // 0x8069FB44
    /* stfs f1, 0x20(r3) */ // 0x8069FB48
    /* stfs f1, 0x24(r3) */ // 0x8069FB4C
    /* stfs f0, 0x28(r3) */ // 0x8069FB50
    /* stfs f0, 0x2c(r3) */ // 0x8069FB54
    *(0x30 + r3) = r0; // stb @ 0x8069FB58
    /* stfs f1, 0x34(r3) */ // 0x8069FB5C
    /* stfs f1, 0x38(r3) */ // 0x8069FB60
    /* stfs f1, 0x3c(r3) */ // 0x8069FB64
    /* stfs f0, 0x40(r3) */ // 0x8069FB68
    /* stfs f0, 0x44(r3) */ // 0x8069FB6C
    *(0x48 + r3) = r0; // stb @ 0x8069FB70
    /* stfs f1, 0x4c(r3) */ // 0x8069FB74
    /* stfs f1, 0x50(r3) */ // 0x8069FB78
    /* stfs f1, 0x54(r3) */ // 0x8069FB7C
    /* stfs f0, 0x58(r3) */ // 0x8069FB80
    /* stfs f0, 0x5c(r3) */ // 0x8069FB84
    *(0x60 + r3) = r0; // stb @ 0x8069FB88
    *(0x64 + r3) = r31; // stw @ 0x8069FB8C
    r3 = r3 + 0x68; // 0x8069FB90
    FUN_8064DAF0(r3); // bl 0x8064DAF0
    /* lfs f0, 0(r30) */ // 0x8069FB98
    /* li r0, -1 */ // 0x8069FB9C
    /* li r4, 1 */ // 0x8069FBA0
    /* stfs f0, 0x7c(r29) */ // 0x8069FBA4
    r3 = r29;
    *(0x80 + r29) = r31; // stb @ 0x8069FBAC
    *(0x84 + r29) = r31; // stw @ 0x8069FBB0
    *(0x88 + r29) = r4; // stb @ 0x8069FBB4
    /* stfs f0, 0x8c(r29) */ // 0x8069FBB8
    *(0x90 + r29) = r0; // stw @ 0x8069FBBC
    *(0x94 + r29) = r0; // stw @ 0x8069FBC0
    r31 = *(0x1c + r1); // lwz @ 0x8069FBC4
    r30 = *(0x18 + r1); // lwz @ 0x8069FBC8
    r29 = *(0x14 + r1); // lwz @ 0x8069FBCC
    r0 = *(0x24 + r1); // lwz @ 0x8069FBD0
    return;
}