/* Function at 0x808ECCF4, size=540 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 21 function(s) */

int FUN_808ECCF4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, -1 */ // 0x808ECD00
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808ECD0C
    /* li r30, 0 */ // 0x808ECD10
    *(0x14 + r1) = r29; // stw @ 0x808ECD14
    *(0xb48 + r3) = r0; // stw @ 0x808ECD18
    *(0xb44 + r3) = r0; // stw @ 0x808ECD1C
    r3 = r30;
    FUN_808F0FAC(r3); // bl 0x808F0FAC
    if (==) goto 0x0x808ecd34;
    /* b 0x808ecd44 */ // 0x808ECD30
    r30 = r30 + 1; // 0x808ECD34
    if (<) goto 0x0x808ecd20;
    /* li r30, -1 */ // 0x808ECD40
    if (==) goto 0x0x808ecdd8;
    r3 = r30;
    FUN_808F2B38(r3); // bl 0x808F2B38
    /* lis r5, 0 */ // 0x808ECD54
    r4 = r3;
    r6 = *(0 + r5); // lwz @ 0x808ECD5C
    r0 = *(0x36 + r6); // lha @ 0x808ECD60
    if (<) goto 0x0x808ecd88;
    /* lis r3, 1 */ // 0x808ECD6C
    /* clrlwi r5, r0, 0x18 */ // 0x808ECD70
    r0 = r3 + -0x6c10; // 0x808ECD74
    r0 = r0 * r5; // 0x808ECD78
    r3 = r6 + r0; // 0x808ECD7C
    r3 = r3 + 0x38; // 0x808ECD80
    /* b 0x808ecd8c */ // 0x808ECD84
    /* li r3, 0 */ // 0x808ECD88
    /* addis r3, r3, 1 */ // 0x808ECD8C
    r3 = r3 + -0x7008; // 0x808ECD90
    FUN_805D8460(r3, r3, r3); // bl 0x805D8460
    r3 = r31;
    r4 = r30;
    FUN_808ED344(r3, r3, r4); // bl 0x808ED344
    r3 = r31;
    r4 = r30;
    FUN_808ED400(r3, r4, r3, r4); // bl 0x808ED400
    r3 = r30;
    FUN_808F2CF8(r3, r4, r3); // bl 0x808F2CF8
    r29 = r3;
    r3 = r30;
    FUN_808F2DB4(r3, r3); // bl 0x808F2DB4
    r5 = r3;
    r3 = r31;
    r4 = r29;
    FUN_808ED730(r3, r5, r3, r4); // bl 0x808ED730
    /* b 0x808ecedc */ // 0x808ECDD4
    /* li r29, 0 */ // 0x808ECDD8
    r3 = r29;
    FUN_808F2924(r4, r3); // bl 0x808F2924
    if (==) goto 0x0x808ecdf0;
    /* b 0x808ece00 */ // 0x808ECDEC
    r29 = r29 + 1; // 0x808ECDF0
    if (<) goto 0x0x808ecddc;
    /* li r29, 0x3a */ // 0x808ECDFC
    /* lis r3, 0 */ // 0x808ECE00
    r5 = *(0 + r3); // lwz @ 0x808ECE04
    r0 = *(0x36 + r5); // lha @ 0x808ECE08
    if (<) goto 0x0x808ece30;
    /* lis r3, 1 */ // 0x808ECE14
    /* clrlwi r4, r0, 0x18 */ // 0x808ECE18
    r0 = r3 + -0x6c10; // 0x808ECE1C
    r0 = r0 * r4; // 0x808ECE20
    r3 = r5 + r0; // 0x808ECE24
    r3 = r3 + 0x38; // 0x808ECE28
    /* b 0x808ece34 */ // 0x808ECE2C
    /* li r3, 0 */ // 0x808ECE30
    /* addis r3, r3, 1 */ // 0x808ECE34
    r4 = r29;
    r3 = r3 + -0x7008; // 0x808ECE3C
    FUN_805D8460(r3, r4, r3); // bl 0x805D8460
    r3 = r29;
    FUN_808F2A08(r4, r3, r3); // bl 0x808F2A08
    /* li r0, 0x1fe4 */ // 0x808ECE50
    *(0x314 + r31) = r3; // stw @ 0x808ECE54
    *(0x3e4 + r31) = r0; // stw @ 0x808ECE58
    if (!=) goto 0x0x808ece94;
    r3 = r31 + 0x6c4; // 0x808ECE60
    /* li r4, 0x1f41 */ // 0x808ECE64
    /* li r5, 0 */ // 0x808ECE68
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* lis r5, 0 */ // 0x808ECE70
    r3 = r31 + 0xb4c; // 0x808ECE74
    r5 = r5 + 0; // 0x808ECE78
    r4 = r5 + 0x121; // 0x808ECE7C
    r5 = r5 + 0x130; // 0x808ECE80
    FUN_806A0D70(r5, r3, r5, r4, r5); // bl 0x806A0D70
    /* li r0, 0 */ // 0x808ECE88
    *(0xbcc + r31) = r0; // stb @ 0x808ECE8C
    /* b 0x808eceb8 */ // 0x808ECE90
    r3 = r29;
    FUN_808F2D1C(r3); // bl 0x808F2D1C
    r30 = r3;
    r3 = r29;
    FUN_808F2DD8(r3, r3); // bl 0x808F2DD8
    r5 = r3;
    r3 = r31;
    r4 = r30;
    FUN_808ED9F0(r3, r5, r3, r4); // bl 0x808ED9F0
    r3 = r29;
    FUN_808F2D1C(r5, r3, r4, r3); // bl 0x808F2D1C
    r30 = r3;
    r3 = r29;
    FUN_808F2DD8(r3, r3); // bl 0x808F2DD8
    r5 = r3;
    r3 = r31;
    r4 = r30;
    FUN_808ED730(r3, r5, r3, r4); // bl 0x808ED730
    /* lis r3, 0 */ // 0x808ECEDC
    r3 = *(0 + r3); // lwz @ 0x808ECEE0
    r3 = *(0x90 + r3); // lwz @ 0x808ECEE4
    FUN_806845D0(r4, r3); // bl 0x806845D0
    r3 = r31;
    FUN_808B3318(r3, r3); // bl 0x808B3318
    r0 = *(0x24 + r1); // lwz @ 0x808ECEF4
    r31 = *(0x1c + r1); // lwz @ 0x808ECEF8
    r30 = *(0x18 + r1); // lwz @ 0x808ECEFC
    r29 = *(0x14 + r1); // lwz @ 0x808ECF00
    return;
}