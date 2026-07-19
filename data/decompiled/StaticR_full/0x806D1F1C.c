/* Function at 0x806D1F1C, size=484 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806D1F1C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806D1F2C
    r30 = r3;
    r0 = *(0x6c + r3); // lwz @ 0x806D1F34
    if (==) goto 0x0x806d1f4c;
    if (==) goto 0x0x806d201c;
    /* b 0x806d20e8 */ // 0x806D1F48
    /* lis r31, 0 */ // 0x806D1F4C
    r3 = *(0 + r31); // lwz @ 0x806D1F50
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806d20e8;
    r3 = *(0 + r31); // lwz @ 0x806D1F60
    FUN_806F58E8(); // bl 0x806F58E8
    if (==) goto 0x0x806d1f7c;
    if (==) goto 0x0x806d1f88;
    /* b 0x806d1f94 */ // 0x806D1F78
    /* li r0, 4 */ // 0x806D1F7C
    *(0x6c + r30) = r0; // stw @ 0x806D1F80
    /* b 0x806d1f9c */ // 0x806D1F84
    /* li r0, 5 */ // 0x806D1F88
    *(0x6c + r30) = r0; // stw @ 0x806D1F8C
    /* b 0x806d1f9c */ // 0x806D1F90
    /* li r0, 5 */ // 0x806D1F94
    *(0x6c + r30) = r0; // stw @ 0x806D1F98
    /* lis r3, 0 */ // 0x806D1F9C
    r3 = *(0 + r3); // lwz @ 0x806D1FA0
    r3 = *(0 + r3); // lwz @ 0x806D1FA4
    r30 = *(0x324 + r3); // lwz @ 0x806D1FA8
    if (!=) goto 0x0x806d1fbc;
    /* li r30, 0 */ // 0x806D1FB4
    /* b 0x806d2010 */ // 0x806D1FB8
    /* lis r31, 0 */ // 0x806D1FBC
    r31 = r31 + 0; // 0x806D1FC0
    if (==) goto 0x0x806d200c;
    r12 = *(0 + r30); // lwz @ 0x806D1FC8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D1FD0
    /* mtctr r12 */ // 0x806D1FD4
    /* bctrl  */ // 0x806D1FD8
    /* b 0x806d1ff4 */ // 0x806D1FDC
    if (!=) goto 0x0x806d1ff0;
    /* li r0, 1 */ // 0x806D1FE8
    /* b 0x806d2000 */ // 0x806D1FEC
    r3 = *(0 + r3); // lwz @ 0x806D1FF0
    if (!=) goto 0x0x806d1fe0;
    /* li r0, 0 */ // 0x806D1FFC
    if (==) goto 0x0x806d200c;
    /* b 0x806d2010 */ // 0x806D2008
    /* li r30, 0 */ // 0x806D200C
    r3 = r30;
    FUN_80649164(r3); // bl 0x80649164
    /* b 0x806d20e8 */ // 0x806D2018
    /* lis r31, 0 */ // 0x806D201C
    r3 = *(0 + r31); // lwz @ 0x806D2020
    FUN_806F58E0(r3); // bl 0x806F58E0
    if (==) goto 0x0x806d20e8;
    r3 = *(0 + r31); // lwz @ 0x806D2030
    FUN_806F58E8(); // bl 0x806F58E8
    if (==) goto 0x0x806d204c;
    if (==) goto 0x0x806d2058;
    /* b 0x806d2064 */ // 0x806D2048
    /* li r0, 7 */ // 0x806D204C
    *(0x6c + r30) = r0; // stw @ 0x806D2050
    /* b 0x806d206c */ // 0x806D2054
    /* li r0, 8 */ // 0x806D2058
    *(0x6c + r30) = r0; // stw @ 0x806D205C
    /* b 0x806d206c */ // 0x806D2060
    /* li r0, 8 */ // 0x806D2064
    *(0x6c + r30) = r0; // stw @ 0x806D2068
    /* lis r3, 0 */ // 0x806D206C
    r3 = *(0 + r3); // lwz @ 0x806D2070
    r3 = *(0 + r3); // lwz @ 0x806D2074
    r30 = *(0x324 + r3); // lwz @ 0x806D2078
    if (!=) goto 0x0x806d208c;
    /* li r30, 0 */ // 0x806D2084
    /* b 0x806d20e0 */ // 0x806D2088
    /* lis r31, 0 */ // 0x806D208C
    r31 = r31 + 0; // 0x806D2090
    if (==) goto 0x0x806d20dc;
    r12 = *(0 + r30); // lwz @ 0x806D2098
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D20A0
    /* mtctr r12 */ // 0x806D20A4
    /* bctrl  */ // 0x806D20A8
    /* b 0x806d20c4 */ // 0x806D20AC
    if (!=) goto 0x0x806d20c0;
    /* li r0, 1 */ // 0x806D20B8
    /* b 0x806d20d0 */ // 0x806D20BC
    r3 = *(0 + r3); // lwz @ 0x806D20C0
    if (!=) goto 0x0x806d20b0;
    /* li r0, 0 */ // 0x806D20CC
    if (==) goto 0x0x806d20dc;
    /* b 0x806d20e0 */ // 0x806D20D8
    /* li r30, 0 */ // 0x806D20DC
    r3 = r30;
    FUN_80649164(r3); // bl 0x80649164
    r0 = *(0x14 + r1); // lwz @ 0x806D20E8
    r31 = *(0xc + r1); // lwz @ 0x806D20EC
    r30 = *(8 + r1); // lwz @ 0x806D20F0
    return;
}