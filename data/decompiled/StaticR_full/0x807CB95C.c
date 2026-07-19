/* Function at 0x807CB95C, size=420 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807CB95C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x807CB96C
    *(0xa8 + r1) = r30; // stw @ 0x807CB970
    /* lis r30, 0 */ // 0x807CB974
    r30 = r30 + 0; // 0x807CB978
    *(0xa4 + r1) = r29; // stw @ 0x807CB97C
    r29 = r3;
    /* lfs f0, 0(r30) */ // 0x807CB984
    r4 = r29;
    /* stfs f0, 0x44(r1) */ // 0x807CB98C
    /* stfs f0, 0x48(r1) */ // 0x807CB994
    /* stfs f0, 0x4c(r1) */ // 0x807CB998
    /* stfs f0, 0x50(r1) */ // 0x807CB99C
    /* stfs f0, 0x54(r1) */ // 0x807CB9A0
    /* stfs f0, 0x58(r1) */ // 0x807CB9A4
    *(0x9c + r1) = r31; // stw @ 0x807CB9A8
    FUN_807CB4F8(); // bl 0x807CB4F8
    /* lis r3, 0 */ // 0x807CB9B0
    /* lis r6, 0 */ // 0x807CB9B4
    /* lis r5, 0 */ // 0x807CB9B8
    /* lfs f1, 0x16c(r29) */ // 0x807CB9BC
    /* lis r7, 0x64ec */ // 0x807CB9C0
    r8 = *(0 + r6); // lwz @ 0x807CB9C4
    r6 = r7 + -0x2001; // 0x807CB9C8
    r3 = *(0 + r3); // lwz @ 0x807CB9CC
    r5 = r5 + 0; // 0x807CB9D4
    /* li r9, 0 */ // 0x807CB9DC
    FUN_8081A594(r4, r5, r7, r9); // bl 0x8081A594
    if (==) goto 0x0x807cbae0;
    /* lfs f0, 0x114(r29) */ // 0x807CB9EC
    /* stfs f0, 8(r1) */ // 0x807CB9F4
    /* lfs f0, 0x124(r29) */ // 0x807CBA00
    /* stfs f0, 0xc(r1) */ // 0x807CBA04
    /* lfs f0, 0x134(r29) */ // 0x807CBA08
    /* stfs f0, 0x10(r1) */ // 0x807CBA0C
    FUN_805A4464(r5); // bl 0x805A4464
    /* lfs f0, 0x14(r1) */ // 0x807CBA14
    /* stfs f0, 0x114(r29) */ // 0x807CBA18
    /* lfs f0, 0x10(r30) */ // 0x807CBA1C
    /* lfs f1, 0x18(r1) */ // 0x807CBA20
    /* stfs f1, 0x124(r29) */ // 0x807CBA24
    /* lfs f1, 0x1c(r1) */ // 0x807CBA28
    /* stfs f1, 0x134(r29) */ // 0x807CBA2C
    /* lfs f1, 0x90(r1) */ // 0x807CBA30
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807CBA34
    /* mfcr r0 */ // 0x807CBA38
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x807CBA3C
    if (==) goto 0x0x807cba94;
    r4 = r29 + 0x144; // 0x807CBA48
    FUN_807CF280(r3, r4, r5); // bl 0x807CF280
    /* lfs f1, 0x14(r30) */ // 0x807CBA54
    FUN_805A443C(r5, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x144(r29) */ // 0x807CBA64
    /* lfs f0, 0x20(r1) */ // 0x807CBA68
    /* lfs f2, 0x148(r29) */ // 0x807CBA6C
    /* fadds f0, f1, f0 */ // 0x807CBA70
    /* lfs f1, 0x14c(r29) */ // 0x807CBA74
    /* stfs f0, 0x144(r29) */ // 0x807CBA78
    /* lfs f0, 0x24(r1) */ // 0x807CBA7C
    /* fadds f0, f2, f0 */ // 0x807CBA80
    /* stfs f0, 0x148(r29) */ // 0x807CBA84
    /* lfs f0, 0x28(r1) */ // 0x807CBA88
    /* fadds f0, f1, f0 */ // 0x807CBA8C
    /* stfs f0, 0x14c(r29) */ // 0x807CBA90
    /* lfs f1, 0x8c(r1) */ // 0x807CBA94
    /* lfs f0, 0x10(r30) */ // 0x807CBA98
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807CBA9C
    /* mfcr r0 */ // 0x807CBAA0
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x807CBAA4
    if (==) goto 0x0x807cbae4;
    /* lfs f0, 0x68(r1) */ // 0x807CBAAC
    /* li r0, 1 */ // 0x807CBAB0
    /* stfs f0, 0x15c(r29) */ // 0x807CBAB4
    /* lfs f0, 0(r30) */ // 0x807CBAB8
    /* lfs f1, 0x6c(r1) */ // 0x807CBABC
    /* stfs f1, 0x160(r29) */ // 0x807CBAC0
    /* lfs f1, 0x70(r1) */ // 0x807CBAC4
    /* stfs f1, 0x164(r29) */ // 0x807CBAC8
    /* stfs f0, 0x14c(r29) */ // 0x807CBACC
    /* stfs f0, 0x148(r29) */ // 0x807CBAD0
    /* stfs f0, 0x144(r29) */ // 0x807CBAD4
    *(0x170 + r29) = r0; // stb @ 0x807CBAD8
    /* b 0x807cbae4 */ // 0x807CBADC
    *(0x170 + r29) = r31; // stb @ 0x807CBAE0
    r0 = *(0xb4 + r1); // lwz @ 0x807CBAE4
    r31 = *(0xac + r1); // lwz @ 0x807CBAE8
    r30 = *(0xa8 + r1); // lwz @ 0x807CBAEC
    r29 = *(0xa4 + r1); // lwz @ 0x807CBAF0
    return;
}