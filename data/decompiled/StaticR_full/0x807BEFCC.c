/* Function at 0x807BEFCC, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_807BEFCC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BEFD8
    r31 = r3;
    r4 = *(0x198 + r3); // lwz @ 0x807BEFE0
    r3 = *(0 + r4); // lwz @ 0x807BEFE4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BEFEC
    /* clrlwi r0, r3, 0x18 */ // 0x807BEFF0
    r3 = *(0 + r4); // lwz @ 0x807BEFF4
    /* mulli r0, r0, 0x248 */ // 0x807BEFF8
    r3 = *(0x14 + r3); // lwz @ 0x807BEFFC
    r3 = r3 + r0; // 0x807BF000
    r0 = *(0x8c + r3); // lwz @ 0x807BF004
    if (==) goto 0x0x807bf04c;
    r3 = *(0x198 + r31); // lwz @ 0x807BF010
    r3 = *(0 + r3); // lwz @ 0x807BF014
    r3 = *(0x10 + r3); // lwz @ 0x807BF018
    r3 = *(0x144 + r3); // lwz @ 0x807BF01C
    r3 = *(0x40 + r3); // lwz @ 0x807BF020
    FUN_807C8DF0(); // bl 0x807C8DF0
    /* cntlzw r0, r3 */ // 0x807BF028
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x807BF02C
    if (==) goto 0x0x807bf04c;
    /* li r0, 1 */ // 0x807BF034
    *(0x1a0 + r31) = r0; // stb @ 0x807BF038
    r3 = r31;
    /* li r4, 0 */ // 0x807BF040
    FUN_807BE7A8(r3, r4); // bl 0x807BE7A8
    *(0x1a4 + r31) = r3; // stw @ 0x807BF048
    r3 = *(0x198 + r31); // lwz @ 0x807BF04C
    /* li r4, 4 */ // 0x807BF050
    FUN_807BB884(r4, r4); // bl 0x807BB884
    r0 = *(0x1a0 + r31); // lbz @ 0x807BF058
    if (==) goto 0x0x807bf0b0;
    r0 = *(0x1a4 + r31); // lwz @ 0x807BF064
    if (==) goto 0x0x807bf084;
    if (==) goto 0x0x807bf094;
    if (==) goto 0x0x807bf0a4;
    /* b 0x807bf0b0 */ // 0x807BF080
    r3 = r31;
    r4 = r31 + 0x38; // 0x807BF088
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807bf0b0 */ // 0x807BF090
    r3 = r31;
    r4 = r31 + 0xe8; // 0x807BF098
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807bf0b0 */ // 0x807BF0A0
    r3 = r31;
    r4 = r31 + 0x114; // 0x807BF0A8
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807BF0B0
    r31 = *(0xc + r1); // lwz @ 0x807BF0B4
    return;
}