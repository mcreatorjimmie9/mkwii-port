/* Function at 0x80754008, size=280 bytes */
/* Stack frame: 0 bytes */

void FUN_80754008(int r3, int r4, int r5, int r6, int r7)
{
    r6 = *(0x130 + r3); // lwz @ 0x80754008
    /* lis r5, 0 */ // 0x8075400C
    r7 = *(0x12c + r3); // lwz @ 0x80754010
    r5 = r5 + 0; // 0x80754014
    /* li r4, 0 */ // 0x80754018
    /* mullw. r0, r7, r6 */ // 0x8075401C
    if (>=) goto 0x0x80754030;
    if (==) goto 0x0x80754030;
    /* li r4, 1 */ // 0x8075402C
    /* li r0, 0 */ // 0x80754034
    if (==) goto 0x0x80754048;
    if (!=) goto 0x0x80754048;
    /* li r0, 1 */ // 0x80754044
    /* li r4, 0 */ // 0x8075404C
    if (==) goto 0x0x80754060;
    if (!=) goto 0x0x80754060;
    /* li r4, 1 */ // 0x8075405C
    if (==) goto 0x0x80754074;
    r0 = *(0xbc + r3); // lwz @ 0x80754068
    *(0x118 + r3) = r0; // sth @ 0x8075406C
    /* b 0x80754084 */ // 0x80754070
    if (==) goto 0x0x80754084;
    r0 = *(0xbc + r3); // lwz @ 0x8075407C
    *(0x11a + r3) = r0; // sth @ 0x80754080
    r4 = *(0x118 + r3); // lhz @ 0x80754084
    if (==) goto 0x0x807540c4;
    r6 = *(0xbc + r3); // lwz @ 0x80754090
    if (<) goto 0x0x807540c4;
    r0 = *(0x44 + r5); // lha @ 0x8075409C
    r0 = r4 + r0; // 0x807540A0
    if (>=) goto 0x0x807540c4;
    /* subf r0, r4, r6 */ // 0x807540AC
    /* lfs f1, 0x34(r5) */ // 0x807540B0
    /* lfs f2, 0x38(r5) */ // 0x807540B4
    /* clrlwi r4, r0, 0x10 */ // 0x807540B8
    /* lfs f3, 0xf8(r3) */ // 0x807540BC
    /* b 0x8075417c */ // 0x807540C0
    r4 = *(0x11a + r3); // lhz @ 0x807540C4
    if (==) goto 0x0x80754108;
    r6 = *(0xbc + r3); // lwz @ 0x807540D0
    if (<) goto 0x0x80754108;
    r0 = *(0x44 + r5); // lha @ 0x807540DC
    r0 = r4 + r0; // 0x807540E0
    if (>=) goto 0x0x80754108;
    /* lfs f0, 0x34(r5) */ // 0x807540EC
    /* subf r0, r4, r6 */ // 0x807540F0
    /* lfs f2, 0x38(r5) */ // 0x807540F4
    /* clrlwi r4, r0, 0x10 */ // 0x807540F8
    /* fneg f1, f0 */ // 0x807540FC
    /* lfs f3, 0xf8(r3) */ // 0x80754100
    /* b 0x8075417c */ // 0x80754104
    r0 = *(0xbc + r3); // lwz @ 0x80754108
    /* lfs f1, 0x110(r3) */ // 0x8075410C
    /* lfs f2, 0x2c(r5) */ // 0x80754110
    /* clrlwi r4, r0, 0x10 */ // 0x80754114
    /* lfs f3, 0x30(r5) */ // 0x80754118
    /* b 0x8075417c */ // 0x8075411C
}