/* Function at 0x807372FC, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807372FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80737308
    r31 = r3;
    r0 = *(7 + r3); // lbz @ 0x80737310
    if (!=) goto 0x0x807373b8;
    /* lis r4, 0 */ // 0x8073731C
    r4 = *(0 + r4); // lwz @ 0x80737320
    r0 = *(0x10 + r4); // lbz @ 0x80737324
    if (!=) goto 0x0x807373b8;
    r0 = *(0x12b + r3); // lbz @ 0x80737330
    if (==) goto 0x0x80737340;
    /* b 0x807373b8 */ // 0x8073733C
    r3 = *(0x1f8 + r3); // lwz @ 0x80737340
    if (==) goto 0x0x8073735c;
    r12 = *(0 + r3); // lwz @ 0x8073734C
    r12 = *(0xc + r12); // lwz @ 0x80737350
    /* mtctr r12 */ // 0x80737354
    /* bctrl  */ // 0x80737358
    r3 = *(0x1f4 + r31); // lwz @ 0x8073735C
    if (==) goto 0x0x807373b8;
    r3 = r3 + 0x74; // 0x80737368
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80737380;
    /* li r3, 0 */ // 0x80737378
    /* b 0x80737384 */ // 0x8073737C
    r3 = *(0xc + r3); // lwz @ 0x80737380
}