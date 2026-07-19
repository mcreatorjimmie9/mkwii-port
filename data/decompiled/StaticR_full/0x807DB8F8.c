/* Function at 0x807DB8F8, size=184 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_807DB8F8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r3, -0x8000 */ // 0x807DB900
    *(0x34 + r1) = r0; // stw @ 0x807DB904
    /* stmw r24, 0x10(r1) */ // 0x807DB908
    r24 = r5;
    r27 = r3 + -1; // 0x807DB910
    /* li r26, 0 */ // 0x807DB914
    /* li r25, 0 */ // 0x807DB918
    /* lis r31, 0 */ // 0x807DB91C
    r30 = *(0x14 + r4); // lwz @ 0x807DB920
    r29 = *(0x1d + r4); // lbz @ 0x807DB924
    r0 = *(0x10 + r4); // lbz @ 0x807DB928
    *(8 + r1) = r0; // stb @ 0x807DB92C
    r28 = *(0x11 + r4); // lbz @ 0x807DB930
    /* b 0x807db990 */ // 0x807DB934
    r3 = *(0 + r31); // lwz @ 0x807DB938
    /* clrlwi r5, r25, 0x18 */ // 0x807DB940
    FUN_805A71BC(r4); // bl 0x805A71BC
    r5 = r3;
    if (==) goto 0x0x807db960;
    /* clrlwi r0, r3, 0x18 */ // 0x807DB954
    if (==) goto 0x0x807db98c;
    /* li r3, 0 */ // 0x807DB964
    if (==) goto 0x0x807db97c;
    r4 = *(8 + r1); // lbz @ 0x807DB96C
    r3 = r24;
    /* clrlwi r5, r5, 0x18 */ // 0x807DB974
    FUN_8091EAA8(r3, r3); // bl 0x8091EAA8
    if (>=) goto 0x0x807db98c;
    r27 = r3;
    r26 = r25;
    r25 = r25 + 1; // 0x807DB98C
    if (<) goto 0x0x807db938;
    /* clrlwi r3, r26, 0x18 */ // 0x807DB998
    r0 = *(0x34 + r1); // lwz @ 0x807DB9A0
    return;
}