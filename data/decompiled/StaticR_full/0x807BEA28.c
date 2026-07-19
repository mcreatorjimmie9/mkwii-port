/* Function at 0x807BEA28, size=244 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_807BEA28(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BEA34
    r31 = r3;
    r4 = *(0x198 + r3); // lwz @ 0x807BEA3C
    r3 = *(0 + r4); // lwz @ 0x807BEA40
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BEA48
    /* clrlwi r0, r3, 0x18 */ // 0x807BEA4C
    r4 = *(0 + r4); // lwz @ 0x807BEA50
    /* mulli r0, r0, 0x248 */ // 0x807BEA54
    /* li r3, 0 */ // 0x807BEA58
    r4 = *(0x14 + r4); // lwz @ 0x807BEA5C
    r4 = r4 + r0; // 0x807BEA60
    r0 = *(0xc8 + r4); // lwz @ 0x807BEA64
    if (==) goto 0x0x807bea80;
    r0 = *(0x208 + r4); // lbz @ 0x807BEA70
    if (!=) goto 0x0x807bea80;
    /* li r3, 1 */ // 0x807BEA7C
    if (==) goto 0x0x807beb00;
    r3 = *(0x198 + r31); // lwz @ 0x807BEA88
    r3 = *(0 + r3); // lwz @ 0x807BEA8C
    r3 = *(0x10 + r3); // lwz @ 0x807BEA90
    r3 = *(0x144 + r3); // lwz @ 0x807BEA94
    r3 = *(0x40 + r3); // lwz @ 0x807BEA98
    FUN_807C8DF0(); // bl 0x807C8DF0
    /* cntlzw r0, r3 */ // 0x807BEAA0
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x807BEAA4
    if (==) goto 0x0x807beb00;
    r0 = *(0x1a2 + r31); // lbz @ 0x807BEAAC
    /* li r3, 0 */ // 0x807BEAB0
    r4 = *(0x1a8 + r31); // lwz @ 0x807BEAB4
    *(0x1a4 + r31) = r3; // stw @ 0x807BEABC
    r0 = r4 + -1; // 0x807BEAC0
    *(0x1a8 + r31) = r0; // stw @ 0x807BEAC4
    if (==) goto 0x0x807beae0;
    /* li r3, 1 */ // 0x807BEACC
    /* li r0, 2 */ // 0x807BEAD0
    *(0x1a0 + r31) = r3; // stb @ 0x807BEAD4
    *(0x1a4 + r31) = r0; // stw @ 0x807BEAD8
    /* b 0x807beb00 */ // 0x807BEADC
    if (>=) goto 0x0x807beb00;
    /* li r0, 1 */ // 0x807BEAE8
    *(0x1a0 + r31) = r0; // stb @ 0x807BEAEC
    r3 = r31;
    /* li r4, 1 */ // 0x807BEAF4
    FUN_807BE7A8(r3, r4); // bl 0x807BE7A8
    *(0x1a4 + r31) = r3; // stw @ 0x807BEAFC
    r3 = r31;
    FUN_807BDF4C(r3, r4, r3); // bl 0x807BDF4C
    r0 = *(0x14 + r1); // lwz @ 0x807BEB08
    r31 = *(0xc + r1); // lwz @ 0x807BEB0C
    return;
}