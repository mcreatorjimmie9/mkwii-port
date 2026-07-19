/* Function at 0x806BD2AC, size=680 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_806BD2AC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806BD2C0
    *(0x14 + r1) = r29; // stw @ 0x806BD2C4
    r4 = *(0xdb8 + r3); // lwz @ 0x806BD2C8
    r0 = r4 + -1; // 0x806BD2CC
    if (<=) goto 0x0x806bd2ec;
    if (==) goto 0x0x806bd36c;
    if (==) goto 0x0x806bd498;
    /* b 0x806bd530 */ // 0x806BD2E8
    r3 = r3 + 0x2e0; // 0x806BD2EC
    FUN_8064A340(r3); // bl 0x8064A340
    if (==) goto 0x0x806bd310;
    r3 = r31 + 0xc40; // 0x806BD2FC
    /* li r4, 0x1112 */ // 0x806BD300
    /* li r5, 0 */ // 0x806BD304
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* b 0x806bd530 */ // 0x806BD30C
    r3 = r31 + 0x534; // 0x806BD310
    FUN_8064A340(r4, r5, r3); // bl 0x8064A340
    if (==) goto 0x0x806bd334;
    r3 = r31 + 0xc40; // 0x806BD320
    /* li r4, 0x1114 */ // 0x806BD324
    /* li r5, 0 */ // 0x806BD328
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* b 0x806bd530 */ // 0x806BD330
    r3 = r31 + 0x788; // 0x806BD334
    FUN_8064A340(r4, r5, r3); // bl 0x8064A340
    if (==) goto 0x0x806bd358;
    r3 = r31 + 0xc40; // 0x806BD344
    /* li r4, 0x1116 */ // 0x806BD348
    /* li r5, 0 */ // 0x806BD34C
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* b 0x806bd530 */ // 0x806BD354
    r3 = r31 + 0xc40; // 0x806BD358
    /* li r4, 0 */ // 0x806BD35C
    /* li r5, 0 */ // 0x806BD360
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* b 0x806bd530 */ // 0x806BD368
    /* lis r3, 0 */ // 0x806BD36C
    r3 = *(0 + r3); // lwz @ 0x806BD370
    r3 = *(0 + r3); // lwz @ 0x806BD374
    r29 = *(0x140 + r3); // lwz @ 0x806BD378
    if (!=) goto 0x0x806bd38c;
    /* li r29, 0 */ // 0x806BD384
    /* b 0x806bd3e0 */ // 0x806BD388
    /* lis r30, 0 */ // 0x806BD38C
    r30 = r30 + 0; // 0x806BD390
    if (==) goto 0x0x806bd3dc;
    r12 = *(0 + r29); // lwz @ 0x806BD398
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BD3A0
    /* mtctr r12 */ // 0x806BD3A4
    /* bctrl  */ // 0x806BD3A8
    /* b 0x806bd3c4 */ // 0x806BD3AC
    if (!=) goto 0x0x806bd3c0;
    /* li r0, 1 */ // 0x806BD3B8
    /* b 0x806bd3d0 */ // 0x806BD3BC
    r3 = *(0 + r3); // lwz @ 0x806BD3C0
    if (!=) goto 0x0x806bd3b0;
    /* li r0, 0 */ // 0x806BD3CC
    if (==) goto 0x0x806bd3dc;
    /* b 0x806bd3e0 */ // 0x806BD3D8
    /* li r29, 0 */ // 0x806BD3DC
    r0 = *(0x270 + r29); // lwz @ 0x806BD3E0
    if (!=) goto 0x0x806bd530;
    r0 = *(0xdc0 + r31); // lbz @ 0x806BD3EC
    if (!=) goto 0x0x806bd530;
    /* lis r4, 0 */ // 0x806BD3F8
    /* li r0, 1 */ // 0x806BD3FC
    /* lfs f1, 0(r4) */ // 0x806BD400
    r3 = r31;
    *(0xdbc + r31) = r0; // stw @ 0x806BD408
    /* li r4, 1 */ // 0x806BD40C
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x806BD414
    r3 = *(0 + r3); // lwz @ 0x806BD418
    r3 = *(0 + r3); // lwz @ 0x806BD41C
    r29 = *(0x278 + r3); // lwz @ 0x806BD420
    if (!=) goto 0x0x806bd434;
    /* li r29, 0 */ // 0x806BD42C
    /* b 0x806bd488 */ // 0x806BD430
    /* lis r30, 0 */ // 0x806BD434
    r30 = r30 + 0; // 0x806BD438
    if (==) goto 0x0x806bd484;
    r12 = *(0 + r29); // lwz @ 0x806BD440
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BD448
    /* mtctr r12 */ // 0x806BD44C
    /* bctrl  */ // 0x806BD450
    /* b 0x806bd46c */ // 0x806BD454
    if (!=) goto 0x0x806bd468;
    /* li r0, 1 */ // 0x806BD460
    /* b 0x806bd478 */ // 0x806BD464
    r3 = *(0 + r3); // lwz @ 0x806BD468
    if (!=) goto 0x0x806bd458;
    /* li r0, 0 */ // 0x806BD474
    if (==) goto 0x0x806bd484;
    /* b 0x806bd488 */ // 0x806BD480
    /* li r29, 0 */ // 0x806BD484
    /* li r0, 1 */ // 0x806BD488
    *(0x2a40 + r29) = r0; // stb @ 0x806BD48C
    *(0x2a3c + r29) = r0; // stw @ 0x806BD490
    /* b 0x806bd530 */ // 0x806BD494
    /* lis r5, 0 */ // 0x806BD498
    /* li r0, 2 */ // 0x806BD49C
    *(0xdbc + r3) = r0; // stw @ 0x806BD4A0
    /* li r4, 1 */ // 0x806BD4A4
    /* lfs f1, 0(r5) */ // 0x806BD4A8
    FUN_80671C48(r5, r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x806BD4B0
    r3 = *(0 + r3); // lwz @ 0x806BD4B4
    r3 = *(0 + r3); // lwz @ 0x806BD4B8
    r29 = *(0x278 + r3); // lwz @ 0x806BD4BC
    if (!=) goto 0x0x806bd4d0;
    /* li r29, 0 */ // 0x806BD4C8
    /* b 0x806bd524 */ // 0x806BD4CC
    /* lis r30, 0 */ // 0x806BD4D0
    r30 = r30 + 0; // 0x806BD4D4
    if (==) goto 0x0x806bd520;
    r12 = *(0 + r29); // lwz @ 0x806BD4DC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BD4E4
    /* mtctr r12 */ // 0x806BD4E8
    /* bctrl  */ // 0x806BD4EC
    /* b 0x806bd508 */ // 0x806BD4F0
    if (!=) goto 0x0x806bd504;
    /* li r0, 1 */ // 0x806BD4FC
    /* b 0x806bd514 */ // 0x806BD500
    r3 = *(0 + r3); // lwz @ 0x806BD504
    if (!=) goto 0x0x806bd4f4;
    /* li r0, 0 */ // 0x806BD510
    if (==) goto 0x0x806bd520;
    /* b 0x806bd524 */ // 0x806BD51C
    /* li r29, 0 */ // 0x806BD520
    /* li r0, 1 */ // 0x806BD524
    *(0x2a40 + r29) = r0; // stb @ 0x806BD528
    *(0x2a3c + r29) = r0; // stw @ 0x806BD52C
    /* li r0, 0 */ // 0x806BD530
    *(0xdb8 + r31) = r0; // stw @ 0x806BD534
    r31 = *(0x1c + r1); // lwz @ 0x806BD538
    r30 = *(0x18 + r1); // lwz @ 0x806BD53C
    r29 = *(0x14 + r1); // lwz @ 0x806BD540
    r0 = *(0x24 + r1); // lwz @ 0x806BD544
    return;
}