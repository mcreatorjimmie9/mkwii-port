/* Function at 0x80623374, size=356 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_80623374(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80623384
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8062338C
    r30 = r4;
    if (!=) goto 0x0x80623400;
    r3 = *(0x18 + r3); // lwz @ 0x80623398
    FUN_8061DFF8(); // bl 0x8061DFF8
    r3 = r3 + 0x264; // 0x806233A0
    FUN_8061692C(r3); // bl 0x8061692C
    /* lis r3, 0 */ // 0x806233A8
    /* lis r4, 0 */ // 0x806233AC
    r5 = *(0 + r3); // lwz @ 0x806233B0
    r3 = *(0 + r4); // lwz @ 0x806233B4
    r0 = *(0xb70 + r5); // lwz @ 0x806233B8
    if (!=) goto 0x0x806233dc;
    r0 = *(0xb9e + r5); // lhz @ 0x806233C4
    if (!=) goto 0x0x806233dc;
    r3 = *(0x10 + r3); // lwz @ 0x806233D0
    /* li r0, 2 */ // 0x806233D4
    *(0xc + r3) = r0; // stw @ 0x806233D8
    r3 = *(0x18 + r31); // lwz @ 0x806233DC
    r4 = *(0 + r3); // lwz @ 0x806233E0
    r4 = *(4 + r4); // lwz @ 0x806233E4
    r0 = *(0x14 + r4); // lwz @ 0x806233E8
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x806233EC
    if (==) goto 0x0x806234c0;
    /* li r4, 0x1c */ // 0x806233F4
    FUN_8061F03C(r4); // bl 0x8061F03C
    /* b 0x806234c0 */ // 0x806233FC
    if (<=) goto 0x0x8062348c;
    r3 = *(0x18 + r3); // lwz @ 0x80623408
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lis r4, 0 */ // 0x80623410
    /* slwi r0, r30, 3 */ // 0x80623414
    r4 = r4 + 0; // 0x80623418
    r4 = r4 + r0; // 0x8062341C
    r4 = *(4 + r4); // lha @ 0x80623420
    FUN_8060F968(r4, r4); // bl 0x8060F968
    /* lis r3, 0 */ // 0x80623428
    /* lis r4, 0 */ // 0x8062342C
    r5 = *(0 + r3); // lwz @ 0x80623430
    r3 = *(0 + r4); // lwz @ 0x80623434
    r0 = *(0xb70 + r5); // lwz @ 0x80623438
    if (!=) goto 0x0x8062345c;
    r0 = *(0xb9e + r5); // lhz @ 0x80623444
    if (!=) goto 0x0x8062345c;
    r3 = *(0x10 + r3); // lwz @ 0x80623450
    r4 = r30;
    FUN_805E412C(r4); // bl 0x805E412C
    r3 = *(0x18 + r31); // lwz @ 0x8062345C
    r4 = *(0 + r3); // lwz @ 0x80623460
    r4 = *(4 + r4); // lwz @ 0x80623464
    r0 = *(0x14 + r4); // lwz @ 0x80623468
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8062346C
    if (==) goto 0x0x806234c0;
    /* li r4, 0x1b */ // 0x80623474
    FUN_8061F03C(r4); // bl 0x8061F03C
    r3 = *(0x18 + r31); // lwz @ 0x8062347C
    FUN_8061ECBC(r4); // bl 0x8061ECBC
    *(0x57 + r3) = r30; // stb @ 0x80623484
    /* b 0x806234c0 */ // 0x80623488
    /* lis r3, 0 */ // 0x8062348C
    /* lis r4, 0 */ // 0x80623490
    r5 = *(0 + r3); // lwz @ 0x80623494
    r3 = *(0 + r4); // lwz @ 0x80623498
    r0 = *(0xb70 + r5); // lwz @ 0x8062349C
    if (!=) goto 0x0x806234c0;
    r0 = *(0xb9e + r5); // lhz @ 0x806234A8
    if (!=) goto 0x0x806234c0;
    r3 = *(0x10 + r3); // lwz @ 0x806234B4
    /* li r0, 2 */ // 0x806234B8
    *(0xc + r3) = r0; // stw @ 0x806234BC
    r0 = *(0x14 + r1); // lwz @ 0x806234C0
    r31 = *(0xc + r1); // lwz @ 0x806234C4
    r30 = *(8 + r1); // lwz @ 0x806234C8
    return;
}