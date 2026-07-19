/* Function at 0x8090E308, size=308 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8090E308(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* addis r0, r4, -0x400 */ // 0x8090E314
    *(0x1c + r1) = r31; // stw @ 0x8090E31C
    r31 = r3;
    if (!=) goto 0x0x8090e434;
    r0 = *(0 + r5); // lwz @ 0x8090E328
    /* rlwinm. r0, r0, 0, 5, 5 */ // 0x8090E32C
    if (==) goto 0x0x8090e344;
    r3 = r5;
    /* lis r4, 0x400 */ // 0x8090E338
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x8090e348 */ // 0x8090E340
    /* li r3, 0 */ // 0x8090E344
    if (==) goto 0x0x8090e434;
    /* lis r3, 0 */ // 0x8090E350
    r3 = *(0 + r3); // lwz @ 0x8090E354
    r0 = *(4 + r3); // lhz @ 0x8090E358
    r0 = r0 rlwinm 0x1b; // rlwinm
    if (!=) goto 0x0x8090e434;
    r0 = *(0x114 + r31); // lwz @ 0x8090E368
    if (!=) goto 0x0x8090e434;
    /* lis r3, 0 */ // 0x8090E374
    r4 = *(0x10e + r31); // lhz @ 0x8090E378
    r0 = *(0 + r3); // lhz @ 0x8090E37C
    if (!=) goto 0x0x8090e420;
    /* lis r4, 0 */ // 0x8090E388
    /* lis r3, 0 */ // 0x8090E38C
    r6 = *(0 + r4); // lwz @ 0x8090E390
    /* li r4, 0x2a */ // 0x8090E394
    /* lfs f1, 0(r3) */ // 0x8090E398
    /* li r5, 1 */ // 0x8090E39C
    r3 = *(0xc + r6); // lwz @ 0x8090E3A0
    r3 = *(0 + r3); // lwz @ 0x8090E3A4
    r3 = *(0x48 + r3); // lwz @ 0x8090E3A8
    FUN_805B1660(r5); // bl 0x805B1660
    /* lis r3, 0 */ // 0x8090E3B0
    r4 = *(0x10e + r31); // lhz @ 0x8090E3B4
    r0 = *(0 + r3); // lhz @ 0x8090E3B8
    /* subf. r0, r4, r0 */ // 0x8090E3BC
    if (!=) goto 0x0x8090e3f0;
    /* lis r3, 0 */ // 0x8090E3C4
    r3 = *(0 + r3); // lwz @ 0x8090E3C8
    if (==) goto 0x0x8090e408;
    r12 = *(0 + r3); // lwz @ 0x8090E3D4
    /* li r4, 0x31c */ // 0x8090E3D8
    /* li r5, 0 */ // 0x8090E3DC
    r12 = *(0x20 + r12); // lwz @ 0x8090E3E0
    /* mtctr r12 */ // 0x8090E3E4
    /* bctrl  */ // 0x8090E3E8
    /* b 0x8090e408 */ // 0x8090E3EC
    *(8 + r1) = r0; // sth @ 0x8090E3F0
    /* .byte 0xe0, 0x23, 0xb0, 0x00 */ // 0x8090E3F8
    r3 = r31;
    /* li r4, 0x31b */ // 0x8090E400
    FUN_808A0AC8(r3, r3, r4); // bl 0x808A0AC8
    /* li r0, 0 */ // 0x8090E408
    /* li r3, 3 */ // 0x8090E40C
    *(0x114 + r31) = r3; // stw @ 0x8090E410
    *(0x118 + r31) = r0; // stw @ 0x8090E414
    *(0x11c + r31) = r0; // stw @ 0x8090E418
    /* b 0x8090e434 */ // 0x8090E41C
    /* lis r4, 0 */ // 0x8090E420
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8090E428
    /* li r4, 0x31d */ // 0x8090E42C
    FUN_808A0AC8(r4, r3, r4); // bl 0x808A0AC8
    r31 = *(0x1c + r1); // lwz @ 0x8090E434
    /* li r3, 1 */ // 0x8090E438
}