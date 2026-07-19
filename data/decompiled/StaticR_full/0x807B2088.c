/* Function at 0x807B2088, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807B2088(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B209C
    r30 = r3;
    r3 = r3 + 0x60; // 0x807B20A4
    r4 = r30 + 0xc4; // 0x807B20A8
    FUN_807CF1A0(r3, r4); // bl 0x807CF1A0
    if (==) goto 0x0x807b215c;
    r3 = *(0xc + r30); // lwz @ 0x807B20BC
    if (==) goto 0x0x807b20e0;
    if (==) goto 0x0x807b2100;
    if (==) goto 0x0x807b2120;
    if (==) goto 0x0x807b2140;
    /* b 0x807b215c */ // 0x807B20DC
    /* lis r6, 0 */ // 0x807B20E0
    /* lis r5, 0 */ // 0x807B20E4
    r3 = *(0x28 + r3); // lwz @ 0x807B20E8
    /* li r4, 0 */ // 0x807B20EC
    /* lfs f1, 0(r6) */ // 0x807B20F0
    /* lfs f2, 0(r5) */ // 0x807B20F4
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* b 0x807b215c */ // 0x807B20FC
    /* lis r6, 0 */ // 0x807B2100
    /* lis r5, 0 */ // 0x807B2104
    r3 = *(0x28 + r3); // lwz @ 0x807B2108
    /* li r4, 1 */ // 0x807B210C
    /* lfs f1, 0(r6) */ // 0x807B2110
    /* lfs f2, 0(r5) */ // 0x807B2114
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* b 0x807b215c */ // 0x807B211C
    /* lis r6, 0 */ // 0x807B2120
    /* lis r5, 0 */ // 0x807B2124
    r3 = *(0x28 + r3); // lwz @ 0x807B2128
    /* li r4, 2 */ // 0x807B212C
    /* lfs f1, 0(r6) */ // 0x807B2130
    /* lfs f2, 0(r5) */ // 0x807B2134
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* b 0x807b215c */ // 0x807B213C
    /* lis r6, 0 */ // 0x807B2140
    /* lis r5, 0 */ // 0x807B2144
    r3 = *(0x28 + r3); // lwz @ 0x807B2148
    /* li r4, 3 */ // 0x807B214C
    /* lfs f1, 0(r6) */ // 0x807B2150
    /* lfs f2, 0(r5) */ // 0x807B2154
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r0 = *(0x14 + r1); // lwz @ 0x807B215C
    r31 = *(0xc + r1); // lwz @ 0x807B2160
    r30 = *(8 + r1); // lwz @ 0x807B2164
    return;
}