/* Function at 0x807BEB5C, size=408 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_807BEB5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807BEB70
    r4 = *(0x198 + r3); // lwz @ 0x807BEB74
    r3 = *(0 + r4); // lwz @ 0x807BEB78
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BEB80
    /* clrlwi r0, r3, 0x18 */ // 0x807BEB84
    r3 = *(0 + r4); // lwz @ 0x807BEB88
    /* mulli r0, r0, 0x248 */ // 0x807BEB8C
    r3 = *(0x14 + r3); // lwz @ 0x807BEB90
    r3 = r3 + r0; // 0x807BEB94
    r30 = *(0x8c + r3); // lwz @ 0x807BEB98
    if (==) goto 0x0x807bebac;
    /* li r0, 1 */ // 0x807BEBA4
    /* b 0x807bebb0 */ // 0x807BEBA8
    /* li r0, 0 */ // 0x807BEBAC
    if (==) goto 0x0x807bec38;
    r3 = *(0x198 + r31); // lwz @ 0x807BEBB8
    r3 = *(0 + r3); // lwz @ 0x807BEBBC
    r3 = *(0x10 + r3); // lwz @ 0x807BEBC0
    r3 = *(0x144 + r3); // lwz @ 0x807BEBC4
    r3 = *(0x40 + r3); // lwz @ 0x807BEBC8
    FUN_807C8DF0(); // bl 0x807C8DF0
    /* cntlzw r0, r3 */ // 0x807BEBD0
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x807BEBD4
    if (==) goto 0x0x807bec38;
    r0 = *(0x1a2 + r31); // lbz @ 0x807BEBDC
    r3 = *(0x1a8 + r31); // lwz @ 0x807BEBE0
    r0 = r3 + -1; // 0x807BEBE8
    *(0x1a8 + r31) = r0; // stw @ 0x807BEBEC
    if (==) goto 0x0x807bec18;
    if (<=) goto 0x0x807bec04;
    if (!=) goto 0x0x807bec38;
    /* li r3, 1 */ // 0x807BEC04
    /* li r0, 2 */ // 0x807BEC08
    *(0x1a0 + r31) = r3; // stb @ 0x807BEC0C
    *(0x1a4 + r31) = r0; // stw @ 0x807BEC10
    /* b 0x807bec38 */ // 0x807BEC14
    if (>=) goto 0x0x807bec38;
    /* li r0, 1 */ // 0x807BEC20
    *(0x1a0 + r31) = r0; // stb @ 0x807BEC24
    r3 = r31;
    /* li r4, 0 */ // 0x807BEC2C
    FUN_807BE7A8(r3, r4); // bl 0x807BE7A8
    *(0x1a4 + r31) = r3; // stw @ 0x807BEC34
    r3 = *(0x198 + r31); // lwz @ 0x807BEC38
    r3 = *(0 + r3); // lwz @ 0x807BEC3C
    FUN_8061E2D8(r4); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BEC44
    /* clrlwi r0, r3, 0x18 */ // 0x807BEC48
    r3 = *(0 + r4); // lwz @ 0x807BEC4C
    /* mulli r0, r0, 0x248 */ // 0x807BEC50
    r3 = *(0x14 + r3); // lwz @ 0x807BEC54
    r3 = r3 + r0; // 0x807BEC58
    r0 = *(0x8c + r3); // lwz @ 0x807BEC5C
    if (!=) goto 0x0x807bec78;
    r3 = r31;
    r4 = r31 + 0x38; // 0x807BEC6C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807becdc */ // 0x807BEC74
    r0 = *(0x1a0 + r31); // lbz @ 0x807BEC78
    if (==) goto 0x0x807becdc;
    r0 = *(0x1a4 + r31); // lwz @ 0x807BEC84
    if (==) goto 0x0x807beca4;
    if (==) goto 0x0x807becc0;
    if (==) goto 0x0x807becd0;
    /* b 0x807becdc */ // 0x807BECA0
    r3 = *(0x198 + r31); // lwz @ 0x807BECA4
    /* li r4, 4 */ // 0x807BECA8
    FUN_807BB884(r4); // bl 0x807BB884
    r3 = r31;
    r4 = r31 + 0x38; // 0x807BECB4
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807becdc */ // 0x807BECBC
    r3 = r31;
    r4 = r31 + 0xe8; // 0x807BECC4
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807becdc */ // 0x807BECCC
    r3 = r31;
    r4 = r31 + 0x114; // 0x807BECD4
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807BECDC
    r31 = *(0xc + r1); // lwz @ 0x807BECE0
    r30 = *(8 + r1); // lwz @ 0x807BECE4
    return;
}