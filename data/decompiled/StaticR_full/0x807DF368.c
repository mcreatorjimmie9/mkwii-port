/* Function at 0x807DF368, size=400 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DF368(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807DF370
    *(0x24 + r1) = r0; // stw @ 0x807DF374
    r5 = r5 + 0; // 0x807DF378
    /* lfs f0, 0x2c0(r5) */ // 0x807DF37C
    /* li r0, 0 */ // 0x807DF380
    *(0x1c + r1) = r31; // stw @ 0x807DF384
    r31 = r4;
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807DF38C
    *(0x18 + r1) = r30; // stw @ 0x807DF390
    r30 = r3;
    if (>=) goto 0x0x807df3ac;
    /* lfs f0, 0x2c4(r5) */ // 0x807DF39C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DF3A0
    if (>=) goto 0x0x807df3ac;
    /* li r0, 1 */ // 0x807DF3A8
    if (==) goto 0x0x807df3bc;
    /* fmr f3, f1 */ // 0x807DF3B4
    /* b 0x807df3c0 */ // 0x807DF3B8
    /* lfs f3, 0x270(r5) */ // 0x807DF3BC
    /* lfs f0, 0x27c(r5) */ // 0x807DF3C0
    /* li r0, 0 */ // 0x807DF3C4
    /* stfs f3, 0x10(r1) */ // 0x807DF3C8
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807DF3CC
    if (>=) goto 0x0x807df3e4;
    /* lfs f0, 0x28c(r5) */ // 0x807DF3D4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DF3D8
    if (>=) goto 0x0x807df3e4;
    /* li r0, 1 */ // 0x807DF3E0
    if (==) goto 0x0x807df3f0;
    /* b 0x807df3f4 */ // 0x807DF3EC
    /* lfs f2, 0x270(r5) */ // 0x807DF3F0
    /* stfs f2, 0x14(r1) */ // 0x807DF3F4
    r7 = *(0x3c + r3); // lwz @ 0x807DF3FC
    /* li r6, 1 */ // 0x807DF400
    r5 = *(0x10 + r1); // lwz @ 0x807DF404
    r0 = *(0x14 + r1); // lwz @ 0x807DF408
    r7 = r7 + -3; // 0x807DF40C
    *(8 + r1) = r5; // stw @ 0x807DF410
    /* cntlzw r5, r7 */ // 0x807DF414
    /* srwi r5, r5, 5 */ // 0x807DF418
    *(0xc + r1) = r0; // stw @ 0x807DF41C
    r3 = *(0x14 + r3); // lwz @ 0x807DF420
    FUN_807DCB90(); // bl 0x807DCB90
    if (==) goto 0x0x807df464;
    if (==) goto 0x0x807df474;
    if (==) goto 0x0x807df484;
    if (==) goto 0x0x807df494;
    if (==) goto 0x0x807df4a4;
    if (==) goto 0x0x807df4b4;
    if (==) goto 0x0x807df4c4;
    /* b 0x807df4d0 */ // 0x807DF460
    r3 = *(0x14 + r30); // lwz @ 0x807DF464
    /* li r0, 3 */ // 0x807DF468
    *(8 + r3) = r0; // stw @ 0x807DF46C
    /* b 0x807df4d0 */ // 0x807DF470
    r3 = *(0x14 + r30); // lwz @ 0x807DF474
    /* li r0, 6 */ // 0x807DF478
    *(8 + r3) = r0; // stw @ 0x807DF47C
    /* b 0x807df4d0 */ // 0x807DF480
    r3 = *(0x14 + r30); // lwz @ 0x807DF484
    /* li r0, 9 */ // 0x807DF488
    *(8 + r3) = r0; // stw @ 0x807DF48C
    /* b 0x807df4d0 */ // 0x807DF490
    r3 = *(0x14 + r30); // lwz @ 0x807DF494
    /* li r0, 0xc */ // 0x807DF498
    *(8 + r3) = r0; // stw @ 0x807DF49C
    /* b 0x807df4d0 */ // 0x807DF4A0
    r3 = *(0x14 + r30); // lwz @ 0x807DF4A4
    /* li r0, 0xf */ // 0x807DF4A8
    *(8 + r3) = r0; // stw @ 0x807DF4AC
    /* b 0x807df4d0 */ // 0x807DF4B0
    r3 = *(0x14 + r30); // lwz @ 0x807DF4B4
    /* li r0, 0x12 */ // 0x807DF4B8
    *(8 + r3) = r0; // stw @ 0x807DF4BC
    /* b 0x807df4d0 */ // 0x807DF4C0
    r3 = *(0x14 + r30); // lwz @ 0x807DF4C4
    /* li r0, 0x15 */ // 0x807DF4C8
    *(8 + r3) = r0; // stw @ 0x807DF4CC
    *(0x3c + r30) = r31; // stw @ 0x807DF4D0
    /* li r0, 0 */ // 0x807DF4D4
    r3 = *(0x14 + r30); // lwz @ 0x807DF4D8
    *(0xf9 + r3) = r0; // stb @ 0x807DF4DC
    r31 = *(0x1c + r1); // lwz @ 0x807DF4E0
    r30 = *(0x18 + r1); // lwz @ 0x807DF4E4
    r0 = *(0x24 + r1); // lwz @ 0x807DF4E8
    return;
}