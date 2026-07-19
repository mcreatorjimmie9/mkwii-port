/* Function at 0x807C2400, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807C2400(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807C2410
    r30 = r3;
    r0 = *(4 + r3); // lbz @ 0x807C2418
    if (==) goto 0x0x807c24cc;
    r3 = *(0xc + r3); // lwz @ 0x807C2424
    r12 = *(0 + r3); // lwz @ 0x807C2428
    r12 = *(0x28 + r12); // lwz @ 0x807C242C
    /* mtctr r12 */ // 0x807C2430
    /* bctrl  */ // 0x807C2434
    if (==) goto 0x0x807c2448;
    /* li r3, 0 */ // 0x807C2440
    /* b 0x807c24d0 */ // 0x807C2444
    r5 = *(0xc + r30); // lwz @ 0x807C2448
    /* lis r3, 0 */ // 0x807C244C
    r4 = *(0x10 + r30); // lwz @ 0x807C2450
    /* lfs f2, 0x10(r5) */ // 0x807C2454
    /* lfs f1, 0x10(r4) */ // 0x807C2458
    /* lfs f0, 0(r3) */ // 0x807C245C
    /* fmuls f2, f2, f1 */ // 0x807C2460
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807C2464
    /* mfcr r31 */ // 0x807C2468
    /* srwi r31, r31, 0x1f */ // 0x807C246C
    FUN_807DA5AC(); // bl 0x807DA5AC
    if (==) goto 0x0x807c2484;
    if (==) goto 0x0x807c248c;
    /* li r3, 1 */ // 0x807C2484
    /* b 0x807c24d0 */ // 0x807C2488
    r3 = *(0xc + r30); // lwz @ 0x807C248C
    r12 = *(0 + r3); // lwz @ 0x807C2490
    r12 = *(0x20 + r12); // lwz @ 0x807C2494
    /* mtctr r12 */ // 0x807C2498
    /* bctrl  */ // 0x807C249C
    if (!=) goto 0x0x807c24c4;
    r3 = *(0xc + r30); // lwz @ 0x807C24A8
    r12 = *(0 + r3); // lwz @ 0x807C24AC
    r12 = *(0x24 + r12); // lwz @ 0x807C24B0
    /* mtctr r12 */ // 0x807C24B4
    /* bctrl  */ // 0x807C24B8
    if (==) goto 0x0x807c24cc;
    /* li r3, 1 */ // 0x807C24C4
    /* b 0x807c24d0 */ // 0x807C24C8
    /* li r3, 0 */ // 0x807C24CC
    r0 = *(0x14 + r1); // lwz @ 0x807C24D0
    r31 = *(0xc + r1); // lwz @ 0x807C24D4
    r30 = *(8 + r1); // lwz @ 0x807C24D8
    return;
}