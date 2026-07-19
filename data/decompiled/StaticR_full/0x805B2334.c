/* Function at 0x805B2334, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B2334(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B2340
    r31 = r3;
    r3 = *(0xe8 + r3); // lwz @ 0x805B2348
    FUN_805B48D4(); // bl 0x805B48D4
    r3 = *(4 + r31); // lwz @ 0x805B2350
    /* li r5, 0 */ // 0x805B2354
    /* li r4, 0x2c */ // 0x805B2358
    /* li r0, -1 */ // 0x805B235C
    *(0xdc + r31) = r5; // stw @ 0x805B2364
    *(0xe0 + r31) = r5; // stw @ 0x805B2368
    *(0x10 + r31) = r4; // stw @ 0x805B236C
    *(0x18 + r31) = r5; // stw @ 0x805B2370
    *(0x14 + r31) = r0; // stb @ 0x805B2374
    *(0xc2 + r31) = r5; // sth @ 0x805B2378
    *(0xc4 + r31) = r5; // sth @ 0x805B237C
    if (==) goto 0x0x805b23ac;
    r4 = *(4 + r31); // lwz @ 0x805B2384
    if (==) goto 0x0x805b2398;
    r4 = *(0x51 + r4); // lbz @ 0x805B2390
    /* b 0x805b239c */ // 0x805B2394
    /* li r4, 0 */ // 0x805B2398
    r12 = *(0 + r3); // lwz @ 0x805B239C
    r12 = *(0x44 + r12); // lwz @ 0x805B23A0
    /* mtctr r12 */ // 0x805B23A4
    /* bctrl  */ // 0x805B23A8
    /* li r0, 0 */ // 0x805B23AC
    *(0xc6 + r31) = r0; // stb @ 0x805B23B0
    r31 = *(0xc + r1); // lwz @ 0x805B23B4
    r0 = *(0x14 + r1); // lwz @ 0x805B23B8
    return;
}