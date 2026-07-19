/* Function at 0x806FBAA8, size=316 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_806FBAA8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806FBAB4
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x806FBABC
    if (!=) goto 0x0x806fbb0c;
    /* li r0, 0 */ // 0x806FBAC8
    *(0x1c + r3) = r0; // stw @ 0x806FBACC
    r3 = *(0x758c + r3); // lwz @ 0x806FBAD0
    r12 = *(0x18 + r3); // lwz @ 0x806FBAD4
    r12 = *(0xc + r12); // lwz @ 0x806FBAD8
    /* mtctr r12 */ // 0x806FBADC
    /* bctrl  */ // 0x806FBAE0
    if (!=) goto 0x0x806fbaf8;
    /* li r0, 1 */ // 0x806FBAEC
    *(0x20 + r31) = r0; // stb @ 0x806FBAF0
    /* b 0x806fbb0c */ // 0x806FBAF4
    r3 = *(0x758c + r31); // lwz @ 0x806FBAF8
    r0 = *(4 + r3); // lwz @ 0x806FBAFC
    *(0x1c + r31) = r0; // stw @ 0x806FBB00
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fbb10 */ // 0x806FBB08
    /* li r3, 0 */ // 0x806FBB0C
    if (==) goto 0x0x806fbb28;
    /* li r0, 6 */ // 0x806FBB18
    *(0x757c + r31) = r3; // stw @ 0x806FBB1C
    *(0x14 + r31) = r0; // stw @ 0x806FBB20
    /* b 0x806fbbb0 */ // 0x806FBB24
    /* lis r3, 1 */ // 0x806FBB28
    /* li r27, 0 */ // 0x806FBB2C
    r30 = r3 + -0x7340; // 0x806FBB30
    /* lis r29, 0 */ // 0x806FBB34
    /* clrlwi r4, r27, 0x18 */ // 0x806FBB38
    r3 = *(0 + r29); // lwz @ 0x806FBB3C
    r0 = r30 * r4; // 0x806FBB40
    r3 = *(0x14 + r3); // lwz @ 0x806FBB44
    r3 = r3 + r0; // 0x806FBB48
    r3 = *(8 + r3); // lwz @ 0x806FBB4C
    /* addis r0, r3, -0x524b */ // 0x806FBB50
    if (!=) goto 0x0x806fbb84;
    r3 = r31;
    FUN_806FBC00(r3); // bl 0x806FBC00
    r28 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fbb84;
    /* li r0, 6 */ // 0x806FBB74
    *(0x757c + r31) = r28; // stw @ 0x806FBB78
    *(0x14 + r31) = r0; // stw @ 0x806FBB7C
    /* b 0x806fbbb0 */ // 0x806FBB80
    r0 = *(0x28 + r31); // lbz @ 0x806FBB84
    if (==) goto 0x0x806fbb9c;
    /* li r0, 1 */ // 0x806FBB90
    *(0x14 + r31) = r0; // stw @ 0x806FBB94
    /* b 0x806fbbb0 */ // 0x806FBB98
    r27 = r27 + 1; // 0x806FBB9C
    if (<) goto 0x0x806fbb38;
    /* li r0, 1 */ // 0x806FBBA8
    *(0x14 + r31) = r0; // stw @ 0x806FBBAC
    r0 = *(0x20 + r31); // lbz @ 0x806FBBB0
    if (==) goto 0x0x806fbbec;
    r3 = *(0x758c + r31); // lwz @ 0x806FBBBC
    r12 = *(0x18 + r3); // lwz @ 0x806FBBC0
    r12 = *(0x10 + r12); // lwz @ 0x806FBBC4
    /* mtctr r12 */ // 0x806FBBC8
    /* bctrl  */ // 0x806FBBCC
    if (!=) goto 0x0x806fbbe4;
    /* li r0, 0 */ // 0x806FBBD8
    *(0x20 + r31) = r0; // stb @ 0x806FBBDC
    /* b 0x806fbbec */ // 0x806FBBE0
}