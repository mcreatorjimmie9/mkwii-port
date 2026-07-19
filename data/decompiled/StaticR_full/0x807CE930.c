/* Function at 0x807CE930, size=236 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807CE930(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 2 */ // 0x807CE938
    /* li r0, 1 */ // 0x807CE940
    *(0x3c + r1) = r31; // stw @ 0x807CE944
    /* lis r31, 0 */ // 0x807CE948
    r31 = r31 + 0; // 0x807CE94C
    *(0x38 + r1) = r30; // stw @ 0x807CE950
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x807CE958
    *(0x34a + r3) = r0; // stb @ 0x807CE95C
    r5 = *(8 + r3); // lwz @ 0x807CE960
    /* lfs f2, 4(r31) */ // 0x807CE964
    r3 = *(0x28 + r5); // lwz @ 0x807CE968
    FUN_805E70EC(); // bl 0x805E70EC
    /* li r0, 0 */ // 0x807CE970
    *(0x34c + r30) = r0; // stw @ 0x807CE974
    /* lis r5, 0 */ // 0x807CE978
    /* lfs f7, 0(r31) */ // 0x807CE97C
    *(0x340 + r30) = r0; // stw @ 0x807CE980
    r4 = r30;
    /* lfs f6, 0xfc(r30) */ // 0x807CE988
    /* lfs f0, 0(r5) */ // 0x807CE990
    /* lfs f5, 0x100(r30) */ // 0x807CE994
    /* lfs f4, 0x104(r30) */ // 0x807CE998
    /* lfs f3, 0xf0(r30) */ // 0x807CE99C
    /* lfs f2, 0xf4(r30) */ // 0x807CE9A0
    /* lfs f1, 0xf8(r30) */ // 0x807CE9A4
    /* stfs f0, 0x350(r30) */ // 0x807CE9A8
    /* lfs f0, 4(r31) */ // 0x807CE9AC
    /* stfs f7, 0x354(r30) */ // 0x807CE9B0
    /* stfs f6, 0x358(r30) */ // 0x807CE9B4
    /* stfs f5, 0x35c(r30) */ // 0x807CE9B8
    /* stfs f4, 0x360(r30) */ // 0x807CE9BC
    /* stfs f3, 0x364(r30) */ // 0x807CE9C0
    /* stfs f2, 0x368(r30) */ // 0x807CE9C4
    /* stfs f1, 0x36c(r30) */ // 0x807CE9C8
    /* stfs f7, 0x2c(r1) */ // 0x807CE9CC
    /* stfs f0, 0x30(r1) */ // 0x807CE9D0
    /* stfs f7, 0x34(r1) */ // 0x807CE9D4
    FUN_807CB4DC(); // bl 0x807CB4DC
    r5 = r30 + 0x310; // 0x807CE9E4
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    FUN_805C6D88(r5, r3, r4, r5); // bl 0x805C6D88
    /* lfs f0, 8(r1) */ // 0x807CE9FC
    r3 = r30 + 0x328; // 0x807CEA00
    /* stfs f0, 0x328(r30) */ // 0x807CEA04
    /* lfs f0, 0xc(r1) */ // 0x807CEA08
    /* stfs f0, 0x32c(r30) */ // 0x807CEA0C
    /* lfs f0, 0x10(r1) */ // 0x807CEA10
    /* stfs f0, 0x330(r30) */ // 0x807CEA14
    FUN_805E3430(); // bl 0x805E3430
}