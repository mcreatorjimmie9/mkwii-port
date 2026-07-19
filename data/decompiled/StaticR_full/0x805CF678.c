/* Function at 0x805CF678, size=288 bytes */
/* Stack frame: 320 bytes */
/* Saved registers: r21 */
/* Calls: 3 function(s) */

int FUN_805CF678(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -320(r1) */
    /* saved r21 */
    /* stmw r21, 0x114(r1) */ // 0x805CF684
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r9 = *(4 + r3); // lwz @ 0x805CF6A0
    r3 = *(4 + r9); // lwz @ 0x805CF6A4
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805cf844;
    r3 = *(4 + r23); // lwz @ 0x805CF6B4
    r3 = *(4 + r3); // lwz @ 0x805CF6B8
    r12 = *(0 + r3); // lwz @ 0x805CF6BC
    r12 = *(0xc + r12); // lwz @ 0x805CF6C0
    /* mtctr r12 */ // 0x805CF6C4
    /* bctrl  */ // 0x805CF6C8
    /* lis r21, 0 */ // 0x805CF6CC
    /* li r31, 1 */ // 0x805CF6D0
    r21 = r21 + 0; // 0x805CF6D4
    /* li r30, 0 */ // 0x805CF6D8
    /* li r29, 0 */ // 0x805CF6DC
    /* li r22, 1 */ // 0x805CF6E0
    /* clrlwi r4, r29, 0x18 */ // 0x805CF6E4
    r0 = r22 << r4; // slw
    /* and. r0, r28, r0 */ // 0x805CF6EC
    if (==) goto 0x0x805cf758;
    r6 = r4 + 1; // 0x805CF6F4
    r5 = r21 + 0x5b; // 0x805CF6FC
    /* li r4, 0x80 */ // 0x805CF700
    /* crclr cr1eq */ // 0x805CF704
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
    r4 = *(4 + r23); // lwz @ 0x805CF70C
    /* clrlwi r3, r31, 0x10 */ // 0x805CF710
    r6 = *(4 + r4); // lwz @ 0x805CF714
    r0 = *(8 + r6); // lhz @ 0x805CF718
    if (>=) goto 0x0x805cf744;
    r3 = *(0x18 + r6); // lwz @ 0x805CF724
    r0 = r31 rlwinm 2; // rlwinm
    /* li r5, 0x80 */ // 0x805CF730
    /* stwx r22, r3, r0 */ // 0x805CF734
    r3 = *(0x10 + r6); // lwz @ 0x805CF738
    /* lwzx r3, r3, r0 */ // 0x805CF73C
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r30 = r30 + 1; // 0x805CF744
    r31 = r31 + 1; // 0x805CF748
    /* clrlwi r0, r30, 0x10 */ // 0x805CF74C
    if (>) goto 0x0x805cf764;
    r29 = r29 + 1; // 0x805CF758
    if (<) goto 0x0x805cf6e4;
    r4 = *(4 + r23); // lwz @ 0x805CF764
    /* clrlwi r3, r31, 0x10 */ // 0x805CF768
    r4 = *(4 + r4); // lwz @ 0x805CF76C
    r0 = *(8 + r4); // lhz @ 0x805CF770
    if (>=) goto 0x0x805cf79c;
    r3 = *(0x18 + r4); // lwz @ 0x805CF77C
    r5 = r31 rlwinm 2; // rlwinm
    /* li r0, 2 */ // 0x805CF784
    /* stwx r0, r3, r5 */ // 0x805CF788
    r3 = *(0x14 + r4); // lwz @ 0x805CF78C
    /* stwx r25, r3, r5 */ // 0x805CF790
    r3 = *(0xc + r4); // lwz @ 0x805CF794
}