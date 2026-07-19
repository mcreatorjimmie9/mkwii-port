/* Function at 0x806CC974, size=416 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 5 function(s) */

int FUN_806CC974(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* stmw r21, 0x14(r1) */ // 0x806CC980
    /* lis r26, 0 */ // 0x806CC984
    r22 = r3;
    /* li r23, 0 */ // 0x806CC98C
    r26 = r26 + 0; // 0x806CC990
    /* li r27, 1 */ // 0x806CC994
    /* li r28, 0 */ // 0x806CC998
    /* lis r29, 0 */ // 0x806CC99C
    /* lis r30, 0 */ // 0x806CC9A0
    /* lis r31, 0 */ // 0x806CC9A4
    /* lis r21, 0 */ // 0x806CC9A8
    /* b 0x806ccaf0 */ // 0x806CC9AC
    r0 = *(0x90 + r22); // lbz @ 0x806CC9B0
    if (!=) goto 0x0x806ccb00;
    /* clrlwi r4, r23, 0x18 */ // 0x806CC9BC
    /* mulli r24, r4, 0xc */ // 0x806CC9C0
    r3 = r22 + r24; // 0x806CC9C4
    r0 = *(0x5d + r3); // lbz @ 0x806CC9C8
    if (==) goto 0x0x806cc9d8;
    /* b 0x806ccb00 */ // 0x806CC9D4
    *(0x5d + r3) = r27; // stb @ 0x806CC9D8
    *(0x5c + r3) = r28; // stb @ 0x806CC9DC
    r3 = *(0 + r29); // lwz @ 0x806CC9E0
    FUN_806475D8(); // bl 0x806475D8
    /* li r25, 2 */ // 0x806CC9E8
    FUN_808CFEE0(); // bl 0x808CFEE0
    if (==) goto 0x0x806ccaa0;
    r3 = *(0 + r30); // lwz @ 0x806CC9F8
    r3 = *(0 + r3); // lwz @ 0x806CC9FC
    r25 = *(0x248 + r3); // lwz @ 0x806CCA00
    if (!=) goto 0x0x806cca14;
    /* li r25, 0 */ // 0x806CCA0C
    /* b 0x806cca60 */ // 0x806CCA10
    if (==) goto 0x0x806cca5c;
    r12 = *(0 + r25); // lwz @ 0x806CCA18
    r3 = r25;
    r12 = *(0x60 + r12); // lwz @ 0x806CCA20
    /* mtctr r12 */ // 0x806CCA24
    /* bctrl  */ // 0x806CCA28
    /* b 0x806cca44 */ // 0x806CCA2C
    if (!=) goto 0x0x806cca40;
    /* li r0, 1 */ // 0x806CCA38
    /* b 0x806cca50 */ // 0x806CCA3C
    r3 = *(0 + r3); // lwz @ 0x806CCA40
    if (!=) goto 0x0x806cca30;
    /* li r0, 0 */ // 0x806CCA4C
    if (==) goto 0x0x806cca5c;
    /* b 0x806cca60 */ // 0x806CCA58
    /* li r25, 0 */ // 0x806CCA5C
    r4 = *(0 + r31); // lwz @ 0x806CCA60
    r3 = r25;
    /* clrlwi r5, r23, 0x18 */ // 0x806CCA68
    r0 = *(0x291c + r4); // lwz @ 0x806CCA6C
    /* mulli r0, r0, 0x58 */ // 0x806CCA70
    r4 = r4 + r0; // 0x806CCA74
    r4 = *(0x59 + r4); // lbz @ 0x806CCA78
    FUN_806B1B68(); // bl 0x806B1B68
    /* mulli r4, r3, 0xc */ // 0x806CCA80
    r3 = *(0 + r29); // lwz @ 0x806CCA84
    r0 = r23 rlwinm 4; // rlwinm
    r3 = *(0x18 + r3); // lwz @ 0x806CCA8C
    r4 = r25 + r4; // 0x806CCA90
    r25 = *(0x1f8 + r4); // lwz @ 0x806CCA94
    r3 = r3 + r0; // 0x806CCA98
    *(0x14 + r3) = r25; // stw @ 0x806CCA9C
    r3 = *(0 + r30); // lwz @ 0x806CCAA0
    /* clrlwi r4, r23, 0x18 */ // 0x806CCAA4
    /* mulli r0, r4, 0xc */ // 0x806CCAA8
    r3 = *(0x98 + r3); // lwz @ 0x806CCAAC
    r5 = r3 + r24; // 0x806CCAB0
    r3 = r22 + r0; // 0x806CCAB4
    r24 = *(0x220 + r5); // lwz @ 0x806CCAB8
    *(0x54 + r3) = r24; // stw @ 0x806CCABC
    r0 = *(0x90 + r22); // lbz @ 0x806CCAC0
    if (!=) goto 0x0x806ccad8;
    r3 = *(0 + r29); // lwz @ 0x806CCACC
    r5 = r24;
    FUN_806475F0(r5); // bl 0x806475F0
    r3 = *(0 + r21); // lwz @ 0x806CCAD8
    r5 = r24;
    r6 = r25;
    /* clrlwi r4, r23, 0x18 */ // 0x806CCAE4
    FUN_805D0D74(r5, r6); // bl 0x805D0D74
    r23 = r23 + 1; // 0x806CCAEC
    r0 = *(0x84 + r22); // lbz @ 0x806CCAF0
    /* clrlwi r3, r23, 0x18 */ // 0x806CCAF4
    if (<) goto 0x0x806cc9b0;
    r0 = *(0x44 + r1); // lwz @ 0x806CCB04
    return;
}