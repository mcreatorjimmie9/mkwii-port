/* Function at 0x808FE8BC, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808FE8BC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808FE8C4
    *(0x18 + r1) = r30; // stw @ 0x808FE8D0
    /* lis r30, 0 */ // 0x808FE8D4
    r30 = r30 + 0; // 0x808FE8D8
    *(0x14 + r1) = r29; // stw @ 0x808FE8DC
    r29 = r3;
    r5 = *(0x14c + r3); // lwz @ 0x808FE8E4
    r0 = *(0 + r4); // lwz @ 0x808FE8E8
    r4 = r5 + 1; // 0x808FE8EC
    /* subfc r0, r0, r4 */ // 0x808FE8F0
    /* subfe r0, r0, r0 */ // 0x808FE8F4
    r0 = r4 & r0; // 0x808FE8F8
    *(0x14c + r3) = r0; // stw @ 0x808FE8FC
    FUN_808FC0E0(r4); // bl 0x808FC0E0
    /* lis r4, 0 */ // 0x808FE904
    r12 = *(0 + r29); // lwz @ 0x808FE908
    r4 = *(0 + r4); // lwz @ 0x808FE90C
    r31 = r3;
    r5 = *(0x30 + r30); // lwz @ 0x808FE914
    /* lis r6, -0x8000 */ // 0x808FE918
    r0 = *(0x20 + r4); // lwz @ 0x808FE91C
    r3 = r29;
    r4 = r6 >> r5; // srw
    r12 = *(0x68 + r12); // lwz @ 0x808FE928
    r0 = r4 & r0; // 0x808FE92C
    /* cntlzw r0, r0 */ // 0x808FE930
    /* srwi r4, r0, 5 */ // 0x808FE934
    /* mtctr r12 */ // 0x808FE938
    /* bctrl  */ // 0x808FE93C
    r0 = r31 + -2; // 0x808FE940
    if (>) goto 0x0x808fe99c;
    /* lfs f1, 0xc0(r29) */ // 0x808FE94C
    /* lfs f0, 0xc4(r29) */ // 0x808FE950
    /* fmuls f1, f1, f1 */ // 0x808FE954
    /* lfs f2, 0xc8(r29) */ // 0x808FE958
    /* fmuls f0, f0, f0 */ // 0x808FE95C
    /* fmuls f2, f2, f2 */ // 0x808FE960
    /* fadds f0, f1, f0 */ // 0x808FE964
    /* fadds f1, f2, f0 */ // 0x808FE968
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x34(r30) */ // 0x808FE970
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x808FE974
    if (>=) goto 0x0x808fe99c;
    r12 = *(0 + r29); // lwz @ 0x808FE97C
    /* lis r5, 0 */ // 0x808FE980
    r3 = r29;
    /* li r4, 0x1f3 */ // 0x808FE988
    r12 = *(0xec + r12); // lwz @ 0x808FE98C
    /* lfs f1, 0(r5) */ // 0x808FE990
    /* mtctr r12 */ // 0x808FE994
    /* bctrl  */ // 0x808FE998
    /* lfs f1, 0xc0(r29) */ // 0x808FE99C
    /* lfs f0, 0xc4(r29) */ // 0x808FE9A0
    /* fmuls f1, f1, f1 */ // 0x808FE9A4
    /* lfs f2, 0xc8(r29) */ // 0x808FE9A8
}