/* Function at 0x808A08EC, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_808A08EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808A08F8
    r31 = r3;
    r0 = *(0x18 + r3); // lwz @ 0x808A0900
    if (!=) goto 0x0x808a0a30;
    r12 = *(0 + r3); // lwz @ 0x808A090C
    r12 = *(0x24 + r12); // lwz @ 0x808A0910
    /* mtctr r12 */ // 0x808A0914
    /* bctrl  */ // 0x808A0918
    /* clrlwi. r0, r3, 0x10 */ // 0x808A091C
    if (!=) goto 0x0x808a092c;
    /* li r0, 0 */ // 0x808A0924
    /* b 0x808a0968 */ // 0x808A0928
    r12 = *(0 + r31); // lwz @ 0x808A092C
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x808A0934
    /* mtctr r12 */ // 0x808A0938
    /* bctrl  */ // 0x808A093C
    /* lis r4, 0 */ // 0x808A0940
    r0 = r3 rlwinm 1; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x808A0948
    r4 = *(4 + r3); // lwz @ 0x808A094C
    r3 = *(0xc + r4); // lwz @ 0x808A0950
    r4 = *(8 + r4); // lwz @ 0x808A0954
    /* lhax r0, r3, r0 */ // 0x808A0958
    /* mulli r0, r0, 0x74 */ // 0x808A095C
    r3 = r4 + r0; // 0x808A0960
    r0 = *(0x62 + r3); // lha @ 0x808A0964
    if (==) goto 0x0x808a0984;
    if (==) goto 0x0x808a09ac;
    if (==) goto 0x0x808a09d4;
    /* b 0x808a09fc */ // 0x808A0980
    /* li r3, 0xb8 */ // 0x808A0984
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808a0998;
    FUN_8079A188(r3); // bl 0x8079A188
    if (==) goto 0x0x808a09a4;
    r3 = r3 + 0x94; // 0x808A09A0
    *(0x18 + r31) = r3; // stw @ 0x808A09A4
    /* b 0x808a0a04 */ // 0x808A09A8
    /* li r3, 0xf8 */ // 0x808A09AC
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x808a09c0;
    FUN_8078DF90(r3); // bl 0x8078DF90
    if (==) goto 0x0x808a09cc;
    r3 = r3 + 0x94; // 0x808A09C8
    *(0x18 + r31) = r3; // stw @ 0x808A09CC
    /* b 0x808a0a04 */ // 0x808A09D0
    /* li r3, 0xfc */ // 0x808A09D4
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x808a09e8;
}