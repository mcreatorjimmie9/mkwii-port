/* Function at 0x807B5130, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807B5130(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807B5138
    r5 = r4 + 0; // 0x807B5140
    /* li r0, 1 */ // 0x807B5144
    *(0xc + r1) = r31; // stw @ 0x807B5148
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807B5150
    r30 = *(0x208 + r3); // lwz @ 0x807B5154
    /* lfs f0, 0(r4) */ // 0x807B5158
    /* lis r4, 0 */ // 0x807B515C
    /* stfs f0, 0x10c(r30) */ // 0x807B5160
    /* lfs f0, 4(r5) */ // 0x807B5164
    /* stfs f0, 0x110(r30) */ // 0x807B5168
    /* lfs f0, 8(r5) */ // 0x807B516C
    /* stfs f0, 0x114(r30) */ // 0x807B5170
    *(0x150 + r30) = r0; // stb @ 0x807B5174
    r3 = *(0x1e8 + r3); // lwz @ 0x807B5178
    r0 = *(0 + r4); // lha @ 0x807B517C
    if (!=) goto 0x0x807b5190;
    r3 = r30;
    FUN_807AEA90(r3); // bl 0x807AEA90
    /* lis r3, 0 */ // 0x807B5190
    r4 = *(0x1e8 + r31); // lwz @ 0x807B5194
    r0 = *(0 + r3); // lha @ 0x807B5198
    if (<=) goto 0x0x807b51f0;
    r3 = *(0x1cc + r31); // lwz @ 0x807B51A4
    r3 = *(0 + r3); // lwz @ 0x807B51A8
    r3 = *(4 + r3); // lwz @ 0x807B51AC
    r3 = *(0x14 + r3); // lwz @ 0x807B51B0
    /* rlwinm. r0, r3, 0, 0x13, 0x13 */ // 0x807B51B4
    if (!=) goto 0x0x807b51cc;
    /* rlwinm. r0, r3, 0, 0x11, 0x11 */ // 0x807B51BC
    if (!=) goto 0x0x807b51cc;
    /* rlwinm. r0, r3, 0, 0x15, 0x15 */ // 0x807B51C4
    if (==) goto 0x0x807b51d4;
    /* li r0, 1 */ // 0x807B51CC
    /* b 0x807b51d8 */ // 0x807B51D0
    /* li r0, 0 */ // 0x807B51D4
    if (!=) goto 0x0x807b5200;
    r3 = r31 + 0x60; // 0x807B51E0
    r4 = r31 + 0x98; // 0x807B51E4
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807b5200 */ // 0x807B51EC
    r0 = r4 + 1; // 0x807B51F0
    *(0x1e8 + r31) = r0; // stw @ 0x807B51F4
    r3 = r30;
    FUN_807AF074(r3); // bl 0x807AF074
    r0 = *(0x14 + r1); // lwz @ 0x807B5200
    r31 = *(0xc + r1); // lwz @ 0x807B5204
    r30 = *(8 + r1); // lwz @ 0x807B5208
    return;
}