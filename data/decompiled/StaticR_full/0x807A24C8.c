/* Function at 0x807A24C8, size=120 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_807A24C8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0xd3 */ // 0x807A24D0
    /* li r5, 0 */ // 0x807A24D4
    *(0x14 + r1) = r0; // stw @ 0x807A24D8
    /* li r0, 1 */ // 0x807A24DC
    *(0x14 + r3) = r0; // stb @ 0x807A24E0
    r12 = *(0 + r3); // lwz @ 0x807A24E4
    r12 = *(0x20 + r12); // lwz @ 0x807A24E8
    /* mtctr r12 */ // 0x807A24EC
    /* bctrl  */ // 0x807A24F0
    /* lis r3, 0 */ // 0x807A24F4
    r3 = *(0 + r3); // lwz @ 0x807A24F8
    r0 = *(0x26 + r3); // lha @ 0x807A24FC
    if (>) goto 0x0x807a252c;
    r3 = *(0x1c + r3); // lwz @ 0x807A2508
    if (==) goto 0x0x807a252c;
    r3 = *(0 + r3); // lwz @ 0x807A2514
    if (==) goto 0x0x807a252c;
    /* li r4, 1 */ // 0x807A2520
    /* li r5, 0 */ // 0x807A2524
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A252C
    /* li r4, 1 */ // 0x807A2530
    r3 = *(0 + r3); // lwz @ 0x807A2534
    FUN_807AADB8(r5, r3, r4); // bl 0x807AADB8
    FUN_805E3430(r3, r4); // bl 0x805E3430
}