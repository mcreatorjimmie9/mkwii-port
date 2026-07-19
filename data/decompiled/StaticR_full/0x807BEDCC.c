/* Function at 0x807BEDCC, size=492 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 8 function(s) */

int FUN_807BEDCC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807BEDD8
    r30 = r3;
    r4 = *(0x198 + r3); // lwz @ 0x807BEDE0
    r3 = *(0 + r4); // lwz @ 0x807BEDE4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BEDEC
    /* clrlwi r0, r3, 0x18 */ // 0x807BEDF0
    r3 = *(0 + r4); // lwz @ 0x807BEDF4
    /* mulli r0, r0, 0x248 */ // 0x807BEDF8
    r3 = *(0x14 + r3); // lwz @ 0x807BEDFC
    r3 = r3 + r0; // 0x807BEE00
    r31 = *(0x8c + r3); // lwz @ 0x807BEE04
    if (==) goto 0x0x807bee18;
    /* li r0, 1 */ // 0x807BEE10
    /* b 0x807bee1c */ // 0x807BEE14
    /* li r0, 0 */ // 0x807BEE18
    if (==) goto 0x0x807bef08;
    r3 = *(0x198 + r30); // lwz @ 0x807BEE24
    r3 = *(0 + r3); // lwz @ 0x807BEE28
    r3 = *(0x10 + r3); // lwz @ 0x807BEE2C
    r3 = *(0x144 + r3); // lwz @ 0x807BEE30
    r3 = *(0x40 + r3); // lwz @ 0x807BEE34
    FUN_807C8DF0(); // bl 0x807C8DF0
    /* cntlzw r0, r3 */ // 0x807BEE3C
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x807BEE40
    if (==) goto 0x0x807bef08;
    r3 = *(0x198 + r30); // lwz @ 0x807BEE48
    r27 = *(8 + r3); // lwz @ 0x807BEE4C
    r3 = r27;
    FUN_807C2330(r3); // bl 0x807C2330
    r28 = r3;
    r3 = r27;
    FUN_807C24E8(r3, r3); // bl 0x807C24E8
    r29 = r3;
    r3 = *(0xc + r27); // lwz @ 0x807BEE68
    /* li r26, 0 */ // 0x807BEE6C
    r12 = *(0 + r3); // lwz @ 0x807BEE70
    r12 = *(0x2c + r12); // lwz @ 0x807BEE74
    /* mtctr r12 */ // 0x807BEE78
    /* bctrl  */ // 0x807BEE7C
    if (!=) goto 0x0x807bee9c;
    r3 = *(0x1a8 + r30); // lwz @ 0x807BEE88
    /* addic. r0, r3, -1 */ // 0x807BEE8C
    *(0x1a8 + r30) = r0; // stw @ 0x807BEE90
    if (>=) goto 0x0x807bee9c;
    /* li r26, 1 */ // 0x807BEE98
    if (==) goto 0x0x807beecc;
    if (==) goto 0x0x807beecc;
    r3 = *(0xc + r27); // lwz @ 0x807BEEAC
    r12 = *(0 + r3); // lwz @ 0x807BEEB0
    r12 = *(0x10 + r12); // lwz @ 0x807BEEB4
    /* mtctr r12 */ // 0x807BEEB8
    /* bctrl  */ // 0x807BEEBC
    if (==) goto 0x0x807beecc;
    /* li r26, 1 */ // 0x807BEEC8
    if (==) goto 0x0x807bef08;
    /* li r0, 1 */ // 0x807BEED8
    *(0x1a0 + r30) = r0; // stb @ 0x807BEEDC
    /* li r0, 0 */ // 0x807BEEE0
    if (==) goto 0x0x807beef0;
    if (!=) goto 0x0x807beef4;
    /* li r0, 1 */ // 0x807BEEF0
    if (==) goto 0x0x807bef08;
    /* lis r3, 0 */ // 0x807BEEFC
    r0 = *(0 + r3); // lha @ 0x807BEF00
    *(0x1a8 + r30) = r0; // stw @ 0x807BEF04
    r3 = *(0x198 + r30); // lwz @ 0x807BEF08
    r3 = *(0 + r3); // lwz @ 0x807BEF0C
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BEF14
    /* clrlwi r0, r3, 0x18 */ // 0x807BEF18
    r3 = *(0 + r4); // lwz @ 0x807BEF1C
    /* mulli r0, r0, 0x248 */ // 0x807BEF20
    r3 = *(0x14 + r3); // lwz @ 0x807BEF24
    r3 = r3 + r0; // 0x807BEF28
    r0 = *(0x8c + r3); // lwz @ 0x807BEF2C
    if (==) goto 0x0x807bef44;
    r31 = r0;
    /* li r0, 1 */ // 0x807BEF3C
    /* b 0x807bef48 */ // 0x807BEF40
    /* li r0, 0 */ // 0x807BEF44
    if (!=) goto 0x0x807bef60;
    r3 = r30;
    r4 = r30 + 0x38; // 0x807BEF54
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807befa4 */ // 0x807BEF5C
    r0 = *(0x1a0 + r30); // lbz @ 0x807BEF60
    if (==) goto 0x0x807befa4;
    r3 = *(0x198 + r30); // lwz @ 0x807BEF6C
    /* li r4, 4 */ // 0x807BEF70
    FUN_807BB884(r4); // bl 0x807BB884
    /* li r0, 0 */ // 0x807BEF7C
    if (==) goto 0x0x807bef8c;
    if (!=) goto 0x0x807bef90;
    /* li r0, 1 */ // 0x807BEF8C
    if (!=) goto 0x0x807befa4;
    r3 = r30;
    r4 = r30 + 0x38; // 0x807BEF9C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807BEFA8
    return;
}