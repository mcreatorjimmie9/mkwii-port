/* Function at 0x807A255C, size=144 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_807A255C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0xd4 */ // 0x807A2564
    /* li r5, 0 */ // 0x807A2568
    *(0x14 + r1) = r0; // stw @ 0x807A256C
    /* li r0, 0 */ // 0x807A2570
    *(0x14 + r3) = r0; // stb @ 0x807A2574
    r12 = *(0 + r3); // lwz @ 0x807A2578
    r12 = *(0x20 + r12); // lwz @ 0x807A257C
    /* mtctr r12 */ // 0x807A2580
    /* bctrl  */ // 0x807A2584
    /* lis r3, 0 */ // 0x807A2588
    r3 = *(0 + r3); // lwz @ 0x807A258C
    r0 = *(0x26 + r3); // lha @ 0x807A2590
    if (>) goto 0x0x807a25c0;
    r3 = *(0x1c + r3); // lwz @ 0x807A259C
    if (==) goto 0x0x807a25c0;
    r3 = *(0 + r3); // lwz @ 0x807A25A8
    if (==) goto 0x0x807a25c0;
    /* li r4, 0 */ // 0x807A25B4
    /* li r5, 0 */ // 0x807A25B8
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A25C0
    /* li r4, 0 */ // 0x807A25C4
    r3 = *(0 + r3); // lwz @ 0x807A25C8
    FUN_807AADB8(r5, r3, r4); // bl 0x807AADB8
    /* lis r3, 0 */ // 0x807A25D0
    r3 = *(0 + r3); // lwz @ 0x807A25D4
    FUN_8078DAD4(r4, r3); // bl 0x8078DAD4
    r0 = *(0x14 + r1); // lwz @ 0x807A25DC
    return;
}