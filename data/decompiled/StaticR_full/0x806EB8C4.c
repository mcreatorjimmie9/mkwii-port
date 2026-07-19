/* Function at 0x806EB8C4, size=524 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_806EB8C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* stmw r21, 0x14(r1) */ // 0x806EB8D0
    r30 = r3 + 0x304; // 0x806EB8D4
    r29 = r3 + 0x2704; // 0x806EB8D8
    /* li r28, 0 */ // 0x806EB8DC
    /* li r25, 1 */ // 0x806EB8E0
    /* li r24, 0 */ // 0x806EB8E4
    /* lis r31, 0 */ // 0x806EB8E8
    /* lis r26, 0 */ // 0x806EB8EC
    /* li r27, 3 */ // 0x806EB8F0
    /* b 0x806ebaac */ // 0x806EB8F4
    r7 = *(0 + r31); // lwz @ 0x806EB8FC
    if (<) goto 0x0x806eb918;
    if (>=) goto 0x0x806eb918;
    r3 = r7 + r28; // 0x806EB90C
    r4 = *(0x2920 + r3); // lbz @ 0x806EB910
    /* b 0x806eb91c */ // 0x806EB914
    /* li r4, 0xff */ // 0x806EB918
    r5 = *(0 + r31); // lwz @ 0x806EB91C
    r3 = r25 << r4; // slw
    r0 = *(0x291c + r5); // lwz @ 0x806EB924
    /* mulli r0, r0, 0x58 */ // 0x806EB928
    r5 = r5 + r0; // 0x806EB92C
    r0 = *(0x48 + r5); // lwz @ 0x806EB930
    /* and. r0, r3, r0 */ // 0x806EB934
    if (==) goto 0x0x806ebaa0;
    r0 = *(0x59 + r5); // lbz @ 0x806EB93C
    if (==) goto 0x0x806ebaa0;
    /* li r6, -1 */ // 0x806EB948
    /* li r5, 0 */ // 0x806EB94C
    /* mtctr r27 */ // 0x806EB950
    if (<) goto 0x0x806eb970;
    if (>=) goto 0x0x806eb970;
    r3 = r7 + r5; // 0x806EB964
    r0 = *(0x2920 + r3); // lbz @ 0x806EB968
    /* b 0x806eb974 */ // 0x806EB96C
    /* li r0, 0xff */ // 0x806EB970
    if (!=) goto 0x0x806eb988;
    r6 = r6 + 1; // 0x806EB980
    if (==) goto 0x0x806eba2c;
    /* addic. r5, r5, 1 */ // 0x806EB988
    if (<) goto 0x0x806eb9a4;
    if (>=) goto 0x0x806eb9a4;
    r3 = r7 + r5; // 0x806EB998
    r0 = *(0x2920 + r3); // lbz @ 0x806EB99C
    /* b 0x806eb9a8 */ // 0x806EB9A0
    /* li r0, 0xff */ // 0x806EB9A4
    if (!=) goto 0x0x806eb9bc;
    r6 = r6 + 1; // 0x806EB9B4
    if (==) goto 0x0x806eba2c;
    /* addic. r5, r5, 1 */ // 0x806EB9BC
    if (<) goto 0x0x806eb9d8;
    if (>=) goto 0x0x806eb9d8;
    r3 = r7 + r5; // 0x806EB9CC
    r0 = *(0x2920 + r3); // lbz @ 0x806EB9D0
    /* b 0x806eb9dc */ // 0x806EB9D4
    /* li r0, 0xff */ // 0x806EB9D8
    if (!=) goto 0x0x806eb9f0;
    r6 = r6 + 1; // 0x806EB9E8
    if (==) goto 0x0x806eba2c;
    /* addic. r5, r5, 1 */ // 0x806EB9F0
    if (<) goto 0x0x806eba0c;
    if (>=) goto 0x0x806eba0c;
    r3 = r7 + r5; // 0x806EBA00
    r0 = *(0x2920 + r3); // lbz @ 0x806EBA04
    /* b 0x806eba10 */ // 0x806EBA08
    /* li r0, 0xff */ // 0x806EBA0C
    if (!=) goto 0x0x806eba24;
    r6 = r6 + 1; // 0x806EBA1C
    if (==) goto 0x0x806eba2c;
    r5 = r5 + 1; // 0x806EBA24
    if (counter-- != 0) goto 0x0x806eb954;
    if (!=) goto 0x0x806ebaa0;
    r23 = r30;
    r22 = r29;
    /* li r21, 0 */ // 0x806EBA3C
    r3 = *(0x1a + r23); // lbz @ 0x806EBA40
    if (!=) goto 0x0x806eba54;
    *(0 + r22) = r24; // stw @ 0x806EBA4C
    /* b 0x806eba8c */ // 0x806EBA50
    r0 = *(0 + r22); // lwz @ 0x806EBA54
    if (!=) goto 0x0x806eba8c;
    r4 = *(0x1b + r23); // lbz @ 0x806EBA60
    if (==) goto 0x0x806eba8c;
    r0 = *(0x1c + r23); // lbz @ 0x806EBA6C
    /* li r5, 0 */ // 0x806EBA70
    if (==) goto 0x0x806eba80;
    r5 = r23 + 4; // 0x806EBA7C
    /* clrlwi r6, r28, 0x18 */ // 0x806EBA80
    FUN_80827980(r5, r5); // bl 0x80827980
    *(0 + r22) = r25; // stw @ 0x806EBA88
    r21 = r21 + 1; // 0x806EBA8C
    r22 = r22 + 4; // 0x806EBA90
    r23 = r23 + 0x20; // 0x806EBA98
    if (<) goto 0x0x806eba40;
    r30 = r30 + 0x300; // 0x806EBAA0
    r29 = r29 + 0x60; // 0x806EBAA4
    r28 = r28 + 1; // 0x806EBAA8
    r3 = *(0 + r26); // lwz @ 0x806EBAAC
    r0 = *(0x24 + r3); // lbz @ 0x806EBAB0
    if (<) goto 0x0x806eb8f8;
    r0 = *(0x44 + r1); // lwz @ 0x806EBAC0
    return;
}