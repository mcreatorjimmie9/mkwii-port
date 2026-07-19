/* Function at 0x80660598, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 3 function(s) */

int FUN_80660598(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x806605A4
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r0 = *(0x260 + r3); // lwz @ 0x806605BC
    if (>=) goto 0x0x806606cc;
    r25 = r7;
    /* li r31, 0 */ // 0x806605CC
    /* b 0x806606c0 */ // 0x806605D0
    r3 = r28;
    /* clrlwi r4, r31, 0x10 */ // 0x806605D8
    FUN_805ACCB0(r3); // bl 0x805ACCB0
    r24 = r3;
    if (==) goto 0x0x806606b8;
    r0 = *(0 + r3); // lbz @ 0x806605EC
    if (==) goto 0x0x806606b8;
    r0 = *(0xc4 + r3); // lwz @ 0x806605F8
    if (==) goto 0x0x806606b8;
    if (==) goto 0x0x80660618;
    r0 = *(0xb8 + r3); // lwz @ 0x8066060C
    if (!=) goto 0x0x806606b8;
    if (!=) goto 0x0x80660634;
    r3 = *(0xb8 + r3); // lwz @ 0x80660620
    FUN_805E52A4(); // bl 0x805E52A4
    if (!=) goto 0x0x806606b8;
    /* b 0x8066064c */ // 0x80660630
    if (!=) goto 0x0x8066064c;
    r3 = *(0xb8 + r3); // lwz @ 0x8066063C
    FUN_805E52A4(); // bl 0x805E52A4
    if (!=) goto 0x0x806606b8;
    r0 = *(0x260 + r26); // lwz @ 0x8066064C
    /* li r4, 0 */ // 0x80660654
    /* slwi r0, r0, 4 */ // 0x80660658
    /* stwx r24, r26, r0 */ // 0x8066065C
    r0 = *(0x260 + r26); // lwz @ 0x80660660
    /* slwi r0, r0, 4 */ // 0x80660664
    r3 = r26 + r0; // 0x80660668
    *(4 + r3) = r27; // stw @ 0x8066066C
    r0 = *(0x260 + r26); // lwz @ 0x80660670
    /* slwi r0, r0, 4 */ // 0x80660674
    r3 = r26 + r0; // 0x80660678
    *(8 + r3) = r31; // stw @ 0x8066067C
    if (==) goto 0x0x80660694;
    r0 = *(0 + r25); // lbz @ 0x80660684
    if (!=) goto 0x0x80660694;
    /* li r4, 1 */ // 0x80660690
    r0 = *(0x260 + r26); // lwz @ 0x80660694
    /* slwi r0, r0, 4 */ // 0x80660698
    r3 = r26 + r0; // 0x8066069C
    *(0xc + r3) = r4; // stb @ 0x806606A0
    r3 = *(0x260 + r26); // lwz @ 0x806606A4
    r0 = r3 + 1; // 0x806606A8
    *(0x260 + r26) = r0; // stw @ 0x806606AC
    if (>=) goto 0x0x806606cc;
    r31 = r31 + 1; // 0x806606B8
    r25 = r25 + 1; // 0x806606BC
    r0 = *(4 + r28); // lhz @ 0x806606C0
    if (<) goto 0x0x806605d4;
    r0 = *(0x34 + r1); // lwz @ 0x806606D0
    return;
}