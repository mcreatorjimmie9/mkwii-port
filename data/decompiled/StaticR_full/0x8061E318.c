/* Function at 0x8061E318, size=424 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8061E318(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8061E324
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r7;
    r8 = *(0 + r3); // lwz @ 0x8061E338
    r3 = *(4 + r8); // lwz @ 0x8061E33C
    r0 = *(0xc + r3); // lwz @ 0x8061E340
    /* rlwinm. r0, r0, 0, 0xc, 0xc */ // 0x8061E344
    if (==) goto 0x0x8061e354;
    if (==) goto 0x0x8061e4ac;
    r3 = *(8 + r8); // lwz @ 0x8061E354
    r4 = r29;
    r12 = *(0xc + r3); // lwz @ 0x8061E35C
    r12 = *(0xc + r12); // lwz @ 0x8061E360
    /* mtctr r12 */ // 0x8061E364
    /* bctrl  */ // 0x8061E368
    /* li r26, 0 */ // 0x8061E36C
    /* li r27, 0 */ // 0x8061E370
    /* b 0x8061e39c */ // 0x8061E374
    r3 = *(0xc + r4); // lwz @ 0x8061E378
    r4 = r29;
    /* lwzx r3, r3, r27 */ // 0x8061E380
    r12 = *(0xc + r3); // lwz @ 0x8061E384
    r12 = *(0xc + r12); // lwz @ 0x8061E388
    /* mtctr r12 */ // 0x8061E38C
    /* bctrl  */ // 0x8061E390
    r27 = r27 + 4; // 0x8061E394
    r26 = r26 + 1; // 0x8061E398
    r4 = *(0 + r28); // lwz @ 0x8061E39C
    r3 = *(0 + r4); // lwz @ 0x8061E3A0
    r0 = *(0xc + r3); // lhz @ 0x8061E3A4
    if (<) goto 0x0x8061e378;
    /* li r26, 0 */ // 0x8061E3B0
    /* li r27, 0 */ // 0x8061E3B4
    /* b 0x8061e3e0 */ // 0x8061E3B8
    r3 = *(0x10 + r4); // lwz @ 0x8061E3BC
    r4 = r29;
    /* lwzx r3, r3, r27 */ // 0x8061E3C4
    r12 = *(0xc + r3); // lwz @ 0x8061E3C8
    r12 = *(0xc + r12); // lwz @ 0x8061E3CC
    /* mtctr r12 */ // 0x8061E3D0
    /* bctrl  */ // 0x8061E3D4
    r27 = r27 + 4; // 0x8061E3D8
    r26 = r26 + 1; // 0x8061E3DC
    r4 = *(0 + r28); // lwz @ 0x8061E3E0
    r3 = *(0 + r4); // lwz @ 0x8061E3E4
    r0 = *(0xe + r3); // lhz @ 0x8061E3E8
    if (<) goto 0x0x8061e3bc;
    r3 = *(0x20 + r4); // lwz @ 0x8061E3F4
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x8061E3FC
    r12 = *(0xc + r12); // lwz @ 0x8061E400
    /* mtctr r12 */ // 0x8061E404
    /* bctrl  */ // 0x8061E408
    if (==) goto 0x0x8061e45c;
    /* li r26, 0 */ // 0x8061E414
    /* li r31, 0 */ // 0x8061E418
    /* b 0x8061e444 */ // 0x8061E41C
    r3 = r4 + r31; // 0x8061E420
    r4 = r29;
    r3 = *(0xd8 + r3); // lwz @ 0x8061E428
    r12 = *(0 + r3); // lwz @ 0x8061E42C
    r12 = *(0x10 + r12); // lwz @ 0x8061E430
    /* mtctr r12 */ // 0x8061E434
    /* bctrl  */ // 0x8061E438
    r31 = r31 + 4; // 0x8061E43C
    r26 = r26 + 1; // 0x8061E440
    r3 = *(0 + r28); // lwz @ 0x8061E444
    r4 = *(0x14 + r3); // lwz @ 0x8061E448
    r0 = *(0xf0 + r4); // lwz @ 0x8061E44C
    if (<) goto 0x0x8061e420;
    /* b 0x8061e4a0 */ // 0x8061E458
    /* li r26, 0 */ // 0x8061E45C
    /* li r31, 0 */ // 0x8061E460
    /* b 0x8061e48c */ // 0x8061E464
    r3 = r4 + r31; // 0x8061E468
    r4 = r29;
    r3 = *(0xd8 + r3); // lwz @ 0x8061E470
    r12 = *(0 + r3); // lwz @ 0x8061E474
    r12 = *(0xc + r12); // lwz @ 0x8061E478
    /* mtctr r12 */ // 0x8061E47C
    /* bctrl  */ // 0x8061E480
    r31 = r31 + 4; // 0x8061E484
    r26 = r26 + 1; // 0x8061E488
    r3 = *(0 + r28); // lwz @ 0x8061E48C
    r4 = *(0x14 + r3); // lwz @ 0x8061E490
    r0 = *(0xf0 + r4); // lwz @ 0x8061E494
    if (<) goto 0x0x8061e468;
    r3 = *(0x60 + r3); // lwz @ 0x8061E4A0
    r4 = r30;
    FUN_80645140(r4); // bl 0x80645140
    r0 = *(0x24 + r1); // lwz @ 0x8061E4B0
    return;
}