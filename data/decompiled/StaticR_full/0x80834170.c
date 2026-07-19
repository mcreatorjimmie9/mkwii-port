/* Function at 0x80834170, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80834170(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80834178
    *(0x14 + r1) = r0; // stw @ 0x8083417C
    /* lfs f1, 0(r4) */ // 0x80834180
    *(0xc + r1) = r31; // stw @ 0x80834184
    r31 = r3;
    FUN_8083AB34(r4); // bl 0x8083AB34
    r0 = *(0x74 + r31); // lwz @ 0x80834190
    /* clrlwi. r0, r0, 0x1f */ // 0x80834194
    if (!=) goto 0x0x8083423c;
    r0 = *(0x2bc + r31); // lwz @ 0x8083419C
    if (<=) goto 0x0x808341f0;
    r3 = r31;
    /* li r4, 0 */ // 0x808341AC
    /* li r5, 1 */ // 0x808341B0
    FUN_808391EC(r3, r4, r5); // bl 0x808391EC
    if (==) goto 0x0x8083423c;
    r0 = *(0x7c + r31); // lwz @ 0x808341C0
    /* li r3, 4 */ // 0x808341C4
    *(0x2b8 + r31) = r3; // stw @ 0x808341C8
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x808341CC
    if (==) goto 0x0x8083423c;
    r4 = *(0x280 + r31); // lwz @ 0x808341D4
    /* li r3, 1 */ // 0x808341D8
    r0 = *(0xc + r31); // lha @ 0x808341DC
    r4 = *(0x18 + r4); // lbz @ 0x808341E0
    /* clrlwi r5, r0, 0x10 */ // 0x808341E4
    FUN_808275E8(r3); // bl 0x808275E8
    /* b 0x8083423c */ // 0x808341EC
    if (<=) goto 0x0x8083423c;
    r3 = r31;
    /* li r4, 0 */ // 0x808341FC
    /* li r5, 0 */ // 0x80834200
    FUN_808391EC(r3, r4, r5); // bl 0x808391EC
    if (==) goto 0x0x8083423c;
    r0 = *(0x7c + r31); // lwz @ 0x80834210
    /* li r3, 4 */ // 0x80834214
    *(0x2b8 + r31) = r3; // stw @ 0x80834218
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8083421C
    if (==) goto 0x0x8083423c;
    r4 = *(0x280 + r31); // lwz @ 0x80834224
    /* li r3, 1 */ // 0x80834228
    r0 = *(0xc + r31); // lha @ 0x8083422C
    r4 = *(0x18 + r4); // lbz @ 0x80834230
    /* clrlwi r5, r0, 0x10 */ // 0x80834234
    FUN_808275E8(r3); // bl 0x808275E8
    r0 = *(0x14 + r1); // lwz @ 0x8083423C
    r31 = *(0xc + r1); // lwz @ 0x80834240
    return;
}