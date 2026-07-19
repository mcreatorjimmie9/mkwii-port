/* Function at 0x807B087C, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_807B087C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x807B0888
    *(0x18 + r1) = r30; // stw @ 0x807B0890
    /* lis r30, 0 */ // 0x807B0894
    r30 = r30 + 0; // 0x807B0898
    *(0x14 + r1) = r29; // stw @ 0x807B089C
    r29 = r3;
    r4 = *(0 + r3); // lwz @ 0x807B08A4
    *(8 + r4) = r0; // stw @ 0x807B08A8
    r3 = *(0 + r3); // lwz @ 0x807B08AC
    /* lfs f1, 0x84(r30) */ // 0x807B08B0
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(0 + r29); // lwz @ 0x807B08B8
    /* li r4, 0 */ // 0x807B08BC
    /* lfs f1, 0x84(r30) */ // 0x807B08C0
    /* lfs f2, 0x88(r30) */ // 0x807B08C4
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x88(r30) */ // 0x807B08CC
    /* lfs f1, 0x14(r29) */ // 0x807B08D0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B08D4
    if (<=) goto 0x0x807b08e0;
    /* b 0x807b08e4 */ // 0x807B08DC
    /* fmr f1, f0 */ // 0x807B08E0
    /* stfs f1, 0x14(r29) */ // 0x807B08E4
    /* lis r31, 0 */ // 0x807B08E8
    r3 = *(4 + r29); // lwz @ 0x807B08EC
    /* li r0, 0 */ // 0x807B08F0
    /* lfs f1, 0(r31) */ // 0x807B08F4
    *(8 + r3) = r0; // stw @ 0x807B08F8
    r3 = *(4 + r29); // lwz @ 0x807B08FC
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(4 + r29); // lwz @ 0x807B0904
    /* li r4, 0 */ // 0x807B0908
    /* lfs f1, 0(r31) */ // 0x807B090C
    /* lfs f2, 0x88(r30) */ // 0x807B0910
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x88(r30) */ // 0x807B0918
    /* lfs f1, 0x14(r29) */ // 0x807B091C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B0920
    if (<=) goto 0x0x807b092c;
    /* b 0x807b0930 */ // 0x807B0928
    /* fmr f1, f0 */ // 0x807B092C
    /* stfs f1, 0x14(r29) */ // 0x807B0930
    /* lis r3, 0 */ // 0x807B0934
    r4 = *(8 + r29); // lwz @ 0x807B0938
    /* li r0, 0 */ // 0x807B093C
    /* lfs f1, 0(r3) */ // 0x807B0940
    *(8 + r4) = r0; // stw @ 0x807B0944
    r3 = *(8 + r29); // lwz @ 0x807B0948
    FUN_807D021C(); // bl 0x807D021C
    /* lis r4, 0 */ // 0x807B0950
    r3 = *(8 + r29); // lwz @ 0x807B0954
    /* lfs f1, 0(r4) */ // 0x807B0958
    /* lfs f2, 0x88(r30) */ // 0x807B095C
    r4 = *(0x8c + r30); // lha @ 0x807B0960
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x88(r30) */ // 0x807B0968
    /* lfs f1, 0x14(r29) */ // 0x807B096C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B0970
    if (<=) goto 0x0x807b097c;
    /* b 0x807b0980 */ // 0x807B0978
    /* fmr f1, f0 */ // 0x807B097C
    /* stfs f1, 0x14(r29) */ // 0x807B0980
    r31 = *(0x1c + r1); // lwz @ 0x807B0984
    r30 = *(0x18 + r1); // lwz @ 0x807B0988
    r29 = *(0x14 + r1); // lwz @ 0x807B098C
    r0 = *(0x24 + r1); // lwz @ 0x807B0990
    return;
}