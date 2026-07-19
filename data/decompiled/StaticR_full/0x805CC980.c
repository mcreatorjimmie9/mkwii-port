/* Function at 0x805CC980, size=1056 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_805CC980(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805CC988
    /* li r5, 0 */ // 0x805CC98C
    *(0x24 + r1) = r0; // stw @ 0x805CC990
    /* addic. r0, r1, 0xc */ // 0x805CC994
    /* li r0, 0 */ // 0x805CC998
    *(0x1c + r1) = r31; // stw @ 0x805CC99C
    *(0x18 + r1) = r30; // stw @ 0x805CC9A0
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805CC9A8
    *(0x10 + r1) = r28; // stw @ 0x805CC9AC
    r6 = *(0 + r4); // lwz @ 0x805CC9B0
    /* li r4, 0 */ // 0x805CC9B4
    *(0xc + r1) = r0; // stw @ 0x805CC9B8
    *(8 + r1) = r0; // stw @ 0x805CC9BC
    if (==) goto 0x0x805cc9cc;
    r4 = r6 + 0x1fb8; // 0x805CC9C4
    *(0xc + r1) = r4; // stw @ 0x805CC9C8
    /* addic. r0, r1, 8 */ // 0x805CC9CC
    if (==) goto 0x0x805cc9dc;
    r5 = *(0x20b8 + r6); // lwz @ 0x805CC9D4
    *(8 + r1) = r5; // stw @ 0x805CC9D8
    if (==) goto 0x0x805cc9f8;
    if (==) goto 0x0x805cc9f8;
    /* lis r3, 0 */ // 0x805CC9EC
    r3 = *(0 + r3); // lwz @ 0x805CC9F0
    FUN_806E3820(r3); // bl 0x806E3820
    /* lis r3, 0 */ // 0x805CC9F8
    /* li r4, 4 */ // 0x805CC9FC
    r3 = *(0 + r3); // lwz @ 0x805CCA00
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805cca5c;
    /* li r8, 0 */ // 0x805CCA10
    /* lis r7, 0 */ // 0x805CCA14
    /* lis r4, 0 */ // 0x805CCA18
    /* b 0x805cca48 */ // 0x805CCA1C
    r3 = *(4 + r30); // lwz @ 0x805CCA20
    /* clrlwi r5, r8, 0x18 */ // 0x805CCA24
    r6 = *(0 + r7); // lwz @ 0x805CCA28
    r0 = r8 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CCA30
    r8 = r8 + 1; // 0x805CCA34
    r5 = r6 + r5; // 0x805CCA38
    /* lwzx r3, r3, r0 */ // 0x805CCA3C
    r0 = *(0x1f12 + r5); // lbz @ 0x805CCA40
    *(0x22 + r3) = r0; // sth @ 0x805CCA44
    r3 = *(0 + r4); // lwz @ 0x805CCA48
    /* clrlwi r5, r8, 0x18 */ // 0x805CCA4C
    r0 = *(0x24 + r3); // lbz @ 0x805CCA50
    if (<) goto 0x0x805cca20;
    r12 = *(0 + r30); // lwz @ 0x805CCA5C
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x805CCA64
    /* mtctr r12 */ // 0x805CCA68
    /* bctrl  */ // 0x805CCA6C
    /* li r29, 0 */ // 0x805CCA70
    /* lis r28, 0 */ // 0x805CCA74
    /* b 0x805ccaac */ // 0x805CCA78
    r3 = *(4 + r30); // lwz @ 0x805CCA7C
    r0 = r29 rlwinm 2; // rlwinm
    r4 = *(0xc + r3); // lwz @ 0x805CCA84
    /* lwzx r4, r4, r0 */ // 0x805CCA88
    r4 = *(0x38 + r4); // lwz @ 0x805CCA8C
    /* rlwinm. r0, r4, 0, 0x1a, 0x1a */ // 0x805CCA90
    if (==) goto 0x0x805ccaa8;
    /* rlwinm. r0, r4, 0, 0x1b, 0x1b */ // 0x805CCA98
    if (!=) goto 0x0x805ccaa8;
    /* clrlwi r4, r29, 0x18 */ // 0x805CCAA0
    FUN_805C332C(); // bl 0x805C332C
    r29 = r29 + 1; // 0x805CCAA8
    r4 = *(0 + r28); // lwz @ 0x805CCAAC
    /* clrlwi r3, r29, 0x18 */ // 0x805CCAB0
    r0 = *(0x24 + r4); // lbz @ 0x805CCAB4
    if (<) goto 0x0x805cca7c;
    r3 = *(4 + r30); // lwz @ 0x805CCAC0
    r3 = *(0x14 + r3); // lwz @ 0x805CCAC4
    r0 = *(0x40 + r3); // lbz @ 0x805CCAC8
    if (==) goto 0x0x805ccb48;
    /* li r31, 0 */ // 0x805CCAD4
    /* lis r28, 0 */ // 0x805CCAD8
    /* lis r29, 0 */ // 0x805CCADC
    /* b 0x805ccb34 */ // 0x805CCAE0
    /* clrlwi r0, r31, 0x18 */ // 0x805CCAE4
    /* mulli r0, r0, 0xf0 */ // 0x805CCAE8
    r3 = r4 + r0; // 0x805CCAEC
    r0 = *(0x38 + r3); // lwz @ 0x805CCAF0
    if (!=) goto 0x0x805ccb30;
    r3 = *(0 + r28); // lwz @ 0x805CCAFC
    r6 = r31 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CCB04
    /* lwzx r3, r3, r6 */ // 0x805CCB08
    r0 = *(0x38 + r3); // lwz @ 0x805CCB0C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805CCB10
    if (!=) goto 0x0x805ccb30;
    r3 = *(4 + r30); // lwz @ 0x805CCB18
    /* li r4, 5 */ // 0x805CCB1C
    /* li r5, 1 */ // 0x805CCB20
    r3 = *(0xc + r3); // lwz @ 0x805CCB24
    /* lwzx r3, r3, r6 */ // 0x805CCB28
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r31 = r31 + 1; // 0x805CCB30
    r4 = *(0 + r29); // lwz @ 0x805CCB34
    /* clrlwi r3, r31, 0x18 */ // 0x805CCB38
    r0 = *(0x24 + r4); // lbz @ 0x805CCB3C
    if (<) goto 0x0x805ccae4;
    r7 = *(4 + r30); // lwz @ 0x805CCB48
    r3 = *(0x24 + r4); // lbz @ 0x805CCB4C
    r0 = *(0x1d + r7); // lbz @ 0x805CCB50
    /* subf r0, r0, r3 */ // 0x805CCB54
    if (<=) goto 0x0x805ccc04;
    r6 = r4 + 0x28; // 0x805CCB60
    /* li r5, 2 */ // 0x805CCB64
    /* li r4, 0 */ // 0x805CCB68
    /* mtctr r3 */ // 0x805CCB6C
    if (<=) goto 0x0x805ccbd4;
    r3 = *(0xc + r7); // lwz @ 0x805CCB78
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805CCB80
    r0 = *(0x38 + r3); // lwz @ 0x805CCB84
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805CCB88
    if (!=) goto 0x0x805ccbcc;
    if (!=) goto 0x0x805ccbac;
    /* clrlwi r0, r4, 0x18 */ // 0x805CCB98
    /* mulli r0, r0, 0xf0 */ // 0x805CCB9C
    r3 = r6 + r0; // 0x805CCBA0
    r5 = *(0xcc + r3); // lwz @ 0x805CCBA4
    /* b 0x805ccbcc */ // 0x805CCBA8
    /* clrlwi r0, r4, 0x18 */ // 0x805CCBAC
    /* mulli r0, r0, 0xf0 */ // 0x805CCBB0
    r3 = r6 + r0; // 0x805CCBB4
    r0 = *(0xcc + r3); // lwz @ 0x805CCBB8
    if (==) goto 0x0x805ccbcc;
    /* li r0, 0 */ // 0x805CCBC4
    /* b 0x805ccbd8 */ // 0x805CCBC8
    r4 = r4 + 1; // 0x805CCBCC
    if (counter-- != 0) goto 0x0x805ccb78;
    /* li r0, 1 */ // 0x805CCBD4
    if (!=) goto 0x0x805ccc04;
    r3 = r30;
    FUN_805C895C(r3); // bl 0x805C895C
    if (!=) goto 0x0x805ccc04;
    /* lis r3, 0 */ // 0x805CCBF0
    r3 = *(0 + r3); // lwz @ 0x805CCBF4
    FUN_806E6B18(r3); // bl 0x806E6B18
    if (!=) goto 0x0x805ccc18;
    r12 = *(0 + r30); // lwz @ 0x805CCC04
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x805CCC0C
    /* mtctr r12 */ // 0x805CCC10
    /* bctrl  */ // 0x805CCC14
    /* lis r3, 0 */ // 0x805CCC18
    r3 = *(0 + r3); // lwz @ 0x805CCC1C
    FUN_8090A598(r3); // bl 0x8090A598
    if (==) goto 0x0x805ccc64;
    /* lis r3, 0 */ // 0x805CCC2C
    /* li r4, 4 */ // 0x805CCC30
    r3 = *(0 + r3); // lwz @ 0x805CCC34
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805ccc64;
    r12 = *(0 + r30); // lwz @ 0x805CCC44
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x805CCC4C
    /* mtctr r12 */ // 0x805CCC50
    /* bctrl  */ // 0x805CCC54
    r3 = *(4 + r30); // lwz @ 0x805CCC58
    /* li r0, 4 */ // 0x805CCC5C
    *(0x28 + r3) = r0; // stw @ 0x805CCC60
    r4 = *(4 + r30); // lwz @ 0x805CCC64
    /* lis r3, 0 */ // 0x805CCC68
    /* lfs f0, 0(r3) */ // 0x805CCC6C
    /* lfs f1, 0x44(r4) */ // 0x805CCC70
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805CCC74
    /* cror cr0eq, cr0gt, cr0eq */ // 0x805CCC78
    if (!=) goto 0x0x805ccd80;
    r4 = *(0x10 + r30); // lbz @ 0x805CCC80
    r0 = *(0xe + r30); // lhz @ 0x805CCC84
    if (>) goto 0x0x805ccd58;
    r3 = *(0x18 + r30); // lwz @ 0x805CCC90
    r0 = r4 rlwinm 2; // rlwinm
    /* lfsx f0, r3, r0 */ // 0x805CCC98
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805CCC9C
    if (>=) goto 0x0x805cccf8;
    if (>=) goto 0x0x805ccccc;
    /* li r0, 1 */ // 0x805CCCAC
    r3 = *(8 + r30); // lwz @ 0x805CCCB0
    r0 = r0 << r4; // slw
    r3 = r3 & r0; // 0x805CCCB8
    /* neg r0, r3 */ // 0x805CCCBC
    r0 = r0 | r3; // 0x805CCCC0
    /* srwi r0, r0, 0x1f */ // 0x805CCCC4
    /* b 0x805cccd0 */ // 0x805CCCC8
    /* li r0, 0 */ // 0x805CCCCC
    if (!=) goto 0x0x805ccd58;
    if (>=) goto 0x0x805ccd58;
    /* li r0, 1 */ // 0x805CCCE0
    r3 = *(8 + r30); // lwz @ 0x805CCCE4
    r0 = r0 << r4; // slw
    r0 = r3 | r0; // 0x805CCCEC
    *(8 + r30) = r0; // stw @ 0x805CCCF0
    /* b 0x805ccd58 */ // 0x805CCCF4
    r3 = *(0x14 + r30); // lwz @ 0x805CCCF8
    /* lfsx f0, r3, r0 */ // 0x805CCCFC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805CCD00
    if (<=) goto 0x0x805ccd58;
    if (>=) goto 0x0x805ccd30;
    /* li r0, 1 */ // 0x805CCD10
    r3 = *(8 + r30); // lwz @ 0x805CCD14
    r0 = r0 << r4; // slw
    r3 = r3 & r0; // 0x805CCD1C
    /* neg r0, r3 */ // 0x805CCD20
    r0 = r0 | r3; // 0x805CCD24
    /* srwi r0, r0, 0x1f */ // 0x805CCD28
    /* b 0x805ccd34 */ // 0x805CCD2C
    /* li r0, 0 */ // 0x805CCD30
    if (==) goto 0x0x805ccd58;
    if (>=) goto 0x0x805ccd58;
    /* li r0, 1 */ // 0x805CCD44
    r3 = *(8 + r30); // lwz @ 0x805CCD48
    r0 = r0 << r4; // slw
    /* andc r0, r3, r0 */ // 0x805CCD50
    *(8 + r30) = r0; // stw @ 0x805CCD54
    r4 = *(0x10 + r30); // lbz @ 0x805CCD58
    r3 = *(0xe + r30); // lhz @ 0x805CCD5C
    r0 = r4 + 1; // 0x805CCD60
    *(0x10 + r30) = r0; // stb @ 0x805CCD64
    /* clrlwi r4, r0, 0x18 */ // 0x805CCD68
    r0 = r3 + 0xf; // 0x805CCD6C
    if (<=) goto 0x0x805ccd80;
    /* li r0, 0 */ // 0x805CCD78
    *(0x10 + r30) = r0; // stb @ 0x805CCD7C
    r0 = *(0x24 + r1); // lwz @ 0x805CCD80
    r31 = *(0x1c + r1); // lwz @ 0x805CCD84
    r30 = *(0x18 + r1); // lwz @ 0x805CCD88
    r29 = *(0x14 + r1); // lwz @ 0x805CCD8C
    r28 = *(0x10 + r1); // lwz @ 0x805CCD90
    return;
}