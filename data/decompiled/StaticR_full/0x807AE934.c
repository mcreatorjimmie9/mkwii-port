/* Function at 0x807AE934, size=348 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_807AE934(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x807AE948
    r30 = r30 + 0; // 0x807AE94C
    *(0x14 + r1) = r29; // stw @ 0x807AE950
    r29 = *(0x164 + r3); // lwz @ 0x807AE954
    if (==) goto 0x0x807aea74;
    /* lis r4, 0 */ // 0x807AE960
    /* li r3, 1 */ // 0x807AE964
    /* lfs f0, 0(r4) */ // 0x807AE968
    /* li r0, 0 */ // 0x807AE96C
    /* stfs f0, 0x18(r29) */ // 0x807AE970
    *(0x1c + r29) = r3; // stb @ 0x807AE974
    /* stfs f0, 0xc(r29) */ // 0x807AE978
    /* stfs f0, 0x10(r29) */ // 0x807AE97C
    r3 = *(0 + r29); // lwz @ 0x807AE980
    *(8 + r3) = r0; // stw @ 0x807AE984
    r3 = *(0 + r29); // lwz @ 0x807AE988
    /* lfs f1, 0x84(r30) */ // 0x807AE98C
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(0 + r29); // lwz @ 0x807AE994
    /* li r4, 0 */ // 0x807AE998
    /* lfs f1, 0x84(r30) */ // 0x807AE99C
    /* lfs f2, 0x88(r30) */ // 0x807AE9A0
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x88(r30) */ // 0x807AE9A8
    /* lfs f1, 0x14(r29) */ // 0x807AE9AC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807AE9B0
    if (<=) goto 0x0x807ae9bc;
    /* b 0x807ae9c0 */ // 0x807AE9B8
    /* fmr f1, f0 */ // 0x807AE9BC
    /* stfs f1, 0x14(r29) */ // 0x807AE9C0
    /* lis r31, 0 */ // 0x807AE9C4
    /* li r0, 0 */ // 0x807AE9C8
    /* lfs f1, 0(r31) */ // 0x807AE9CC
    r3 = *(4 + r29); // lwz @ 0x807AE9D0
    *(8 + r3) = r0; // stw @ 0x807AE9D4
    r3 = *(4 + r29); // lwz @ 0x807AE9D8
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(4 + r29); // lwz @ 0x807AE9E0
    /* li r4, 0 */ // 0x807AE9E4
    /* lfs f1, 0(r31) */ // 0x807AE9E8
    /* lfs f2, 0x88(r30) */ // 0x807AE9EC
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x88(r30) */ // 0x807AE9F4
    /* lfs f1, 0x14(r29) */ // 0x807AE9F8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807AE9FC
    if (<=) goto 0x0x807aea08;
    /* b 0x807aea0c */ // 0x807AEA04
    /* fmr f1, f0 */ // 0x807AEA08
    /* stfs f1, 0x14(r29) */ // 0x807AEA0C
    /* lis r3, 0 */ // 0x807AEA10
    /* lfs f1, 0(r3) */ // 0x807AEA14
    /* li r0, 0 */ // 0x807AEA18
    r3 = *(8 + r29); // lwz @ 0x807AEA1C
    *(8 + r3) = r0; // stw @ 0x807AEA20
    r3 = *(8 + r29); // lwz @ 0x807AEA24
    FUN_807D021C(); // bl 0x807D021C
    /* lis r4, 0 */ // 0x807AEA2C
    r3 = *(8 + r29); // lwz @ 0x807AEA30
    /* lfs f1, 0(r4) */ // 0x807AEA34
    /* lfs f2, 0x88(r30) */ // 0x807AEA38
    r4 = *(0x8c + r30); // lha @ 0x807AEA3C
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x88(r30) */ // 0x807AEA44
    /* lfs f1, 0x14(r29) */ // 0x807AEA48
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807AEA4C
    if (<=) goto 0x0x807aea58;
    /* b 0x807aea5c */ // 0x807AEA54
    /* fmr f1, f0 */ // 0x807AEA58
    /* stfs f1, 0x14(r29) */ // 0x807AEA5C
    /* li r0, 1 */ // 0x807AEA60
    /* lis r3, 0 */ // 0x807AEA64
    *(0x1c + r29) = r0; // stb @ 0x807AEA68
    /* lfs f0, 0(r3) */ // 0x807AEA6C
    /* stfs f0, 0x10(r29) */ // 0x807AEA70
    r0 = *(0x24 + r1); // lwz @ 0x807AEA74
    r31 = *(0x1c + r1); // lwz @ 0x807AEA78
    r30 = *(0x18 + r1); // lwz @ 0x807AEA7C
    r29 = *(0x14 + r1); // lwz @ 0x807AEA80
    return;
}