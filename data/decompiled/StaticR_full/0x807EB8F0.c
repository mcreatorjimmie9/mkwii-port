/* Function at 0x807EB8F0, size=264 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_807EB8F0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807EB900
    /* lfs f2, 0(r31) */ // 0x807EB904
    *(0x48 + r1) = r30; // stw @ 0x807EB908
    /* lis r30, 0 */ // 0x807EB90C
    /* lfs f1, 0(r30) */ // 0x807EB910
    *(0x44 + r1) = r29; // stw @ 0x807EB914
    /* lis r29, 0 */ // 0x807EB918
    r29 = r29 + 0; // 0x807EB91C
    *(0x40 + r1) = r28; // stw @ 0x807EB920
    r28 = r3;
    r4 = *(8 + r3); // lwz @ 0x807EB928
    r3 = *(0x28 + r4); // lwz @ 0x807EB92C
    /* li r4, 0 */ // 0x807EB930
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r28); // lwz @ 0x807EB938
    /* li r4, 1 */ // 0x807EB93C
    /* lfs f1, 0(r30) */ // 0x807EB940
    r3 = *(0x28 + r3); // lwz @ 0x807EB944
    /* lfs f2, 0(r31) */ // 0x807EB948
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* li r0, 1 */ // 0x807EB950
    *(0x12c + r28) = r0; // stb @ 0x807EB954
    r4 = r28 + 0x114; // 0x807EB95C
    *(0x124 + r28) = r0; // stw @ 0x807EB960
    /* lfs f1, 0x28(r29) */ // 0x807EB964
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r28 + 0x30; // 0x807EB970
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x24(r29) */ // 0x807EB97C
    /* lis r3, 0 */ // 0x807EB980
    /* lfs f0, 0x18(r29) */ // 0x807EB984
    r4 = r28 + 0x30; // 0x807EB988
    /* fctiwz f3, f2 */ // 0x807EB98C
    /* lfs f1, 0x20(r29) */ // 0x807EB990
    /* fctiwz f0, f0 */ // 0x807EB994
    r3 = *(0 + r3); // lwz @ 0x807EB998
    /* fctiwz f2, f1 */ // 0x807EB99C
    /* stfd f3, 0x20(r1) */ // 0x807EB9A0
    /* stfd f2, 0x28(r1) */ // 0x807EB9A4
    /* lfs f1, 0x14(r29) */ // 0x807EB9AC
    /* li r9, 0xc */ // 0x807EB9B0
    /* stfd f0, 0x30(r1) */ // 0x807EB9B4
    r8 = *(0x24 + r1); // lwz @ 0x807EB9B8
    r7 = *(0x2c + r1); // lwz @ 0x807EB9BC
    r6 = *(0x34 + r1); // lwz @ 0x807EB9C0
    FUN_80818D00(r9); // bl 0x80818D00
    /* lfs f1, 0(r30) */ // 0x807EB9C8
    r3 = r28;
    /* li r4, 0x245 */ // 0x807EB9D0
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x54 + r1); // lwz @ 0x807EB9D8
    r31 = *(0x4c + r1); // lwz @ 0x807EB9DC
    r30 = *(0x48 + r1); // lwz @ 0x807EB9E0
    r29 = *(0x44 + r1); // lwz @ 0x807EB9E4
    r28 = *(0x40 + r1); // lwz @ 0x807EB9E8
    return;
}