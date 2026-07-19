/* Function at 0x8067E318, size=452 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_8067E318(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8067E32C
    *(0x14 + r1) = r29; // stw @ 0x8067E330
    r0 = *(4 + r3); // lwz @ 0x8067E334
    if (!=) goto 0x0x8067e358;
    r0 = *(0x1c24 + r3); // lbz @ 0x8067E340
    if (==) goto 0x0x8067e358;
    FUN_8067E4DC(); // bl 0x8067E4DC
    /* li r0, 0 */ // 0x8067E350
    *(0x1c24 + r31) = r0; // stb @ 0x8067E354
    r3 = r31 + 0x31c; // 0x8067E358
    /* li r4, 0 */ // 0x8067E35C
    FUN_806A1CC0(r3, r4); // bl 0x806A1CC0
    r3 = r31 + 0x19fc; // 0x8067E364
    /* li r4, 0 */ // 0x8067E368
    /* li r5, 0 */ // 0x8067E36C
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    r0 = *(4 + r31); // lwz @ 0x8067E374
    if (==) goto 0x0x8067e38c;
    if (==) goto 0x0x8067e3ac;
    /* b 0x8067e3c8 */ // 0x8067E388
    r3 = *(0x520 + r31); // lwz @ 0x8067E38C
    /* li r0, 0 */ // 0x8067E390
    /* slwi r3, r3, 2 */ // 0x8067E394
    r3 = r31 + r3; // 0x8067E398
    r3 = *(0x1b7c + r3); // lwz @ 0x8067E39C
    *(0x1b78 + r31) = r3; // stw @ 0x8067E3A0
    *(0x1c25 + r31) = r0; // stb @ 0x8067E3A4
    /* b 0x8067e3c8 */ // 0x8067E3A8
    r3 = *(0x520 + r31); // lwz @ 0x8067E3AC
    /* li r0, 0 */ // 0x8067E3B0
    /* slwi r3, r3, 2 */ // 0x8067E3B4
    r3 = r31 + r3; // 0x8067E3B8
    r3 = *(0x1bfc + r3); // lwz @ 0x8067E3BC
    *(0x1b78 + r31) = r3; // stw @ 0x8067E3C0
    *(0x1c25 + r31) = r0; // stb @ 0x8067E3C4
    r0 = *(0xf5c + r31); // lwz @ 0x8067E3C8
    /* lis r3, 0 */ // 0x8067E3CC
    *(0x1b74 + r31) = r0; // stw @ 0x8067E3D0
    r3 = *(0 + r3); // lwz @ 0x8067E3D4
    r3 = *(0 + r3); // lwz @ 0x8067E3D8
    r29 = *(0x25c + r3); // lwz @ 0x8067E3DC
    if (!=) goto 0x0x8067e3f0;
    /* li r29, 0 */ // 0x8067E3E8
    /* b 0x8067e444 */ // 0x8067E3EC
    /* lis r30, 0 */ // 0x8067E3F0
    r30 = r30 + 0; // 0x8067E3F4
    if (==) goto 0x0x8067e440;
    r12 = *(0 + r29); // lwz @ 0x8067E3FC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8067E404
    /* mtctr r12 */ // 0x8067E408
    /* bctrl  */ // 0x8067E40C
    /* b 0x8067e428 */ // 0x8067E410
    if (!=) goto 0x0x8067e424;
    /* li r0, 1 */ // 0x8067E41C
    /* b 0x8067e434 */ // 0x8067E420
    r3 = *(0 + r3); // lwz @ 0x8067E424
    if (!=) goto 0x0x8067e414;
    /* li r0, 0 */ // 0x8067E430
    if (==) goto 0x0x8067e440;
    /* b 0x8067e444 */ // 0x8067E43C
    /* li r29, 0 */ // 0x8067E440
    /* lis r30, 0 */ // 0x8067E444
    r3 = *(0 + r30); // lwz @ 0x8067E44C
    FUN_805D9544(r4); // bl 0x805D9544
    r3 = *(0 + r30); // lwz @ 0x8067E454
    FUN_805D956C(r4, r4); // bl 0x805D956C
    r0 = *(0x1b74 + r31); // lwz @ 0x8067E460
    if (==) goto 0x0x8067e480;
    if (==) goto 0x0x8067e48c;
    if (==) goto 0x0x8067e4a0;
    /* b 0x8067e4b0 */ // 0x8067E47C
    r3 = r29;
    FUN_806642AC(r3); // bl 0x806642AC
    /* b 0x8067e4b0 */ // 0x8067E488
    r4 = *(8 + r1); // lhz @ 0x8067E48C
    r3 = r29;
    r5 = *(0xa + r1); // lhz @ 0x8067E494
    FUN_806644FC(r3); // bl 0x806644FC
    /* b 0x8067e4b0 */ // 0x8067E49C
    r4 = *(8 + r1); // lhz @ 0x8067E4A0
    r3 = r29;
    r5 = *(0xa + r1); // lhz @ 0x8067E4A8
    FUN_806643B0(r3); // bl 0x806643B0
    /* li r3, 0 */ // 0x8067E4B0
    /* li r0, -1 */ // 0x8067E4B4
    *(0x1b70 + r31) = r0; // stw @ 0x8067E4B8
    *(0x1c25 + r31) = r3; // stb @ 0x8067E4BC
    r31 = *(0x1c + r1); // lwz @ 0x8067E4C0
    r30 = *(0x18 + r1); // lwz @ 0x8067E4C4
    r29 = *(0x14 + r1); // lwz @ 0x8067E4C8
    r0 = *(0x24 + r1); // lwz @ 0x8067E4CC
    return;
}