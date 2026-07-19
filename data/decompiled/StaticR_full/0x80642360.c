/* Function at 0x80642360, size=332 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80642360(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80642374
    r30 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r4, 0 */ // 0x80642380
    r3 = r30;
    r4 = r4 + 0; // 0x80642388
    *(0xc + r30) = r4; // stw @ 0x8064238C
    FUN_8064252C(r4, r3, r4); // bl 0x8064252C
    r5 = *(0x14 + r31); // lwz @ 0x80642394
    /* lis r4, 0 */ // 0x80642398
    /* lis r3, 0 */ // 0x8064239C
    /* li r0, 2 */ // 0x806423A0
    r7 = r30 + 0x10; // 0x806423A4
    r4 = r4 + 0; // 0x806423A8
    r3 = r3 + 0; // 0x806423AC
    r8 = *(0 + r5); // lwz @ 0x806423B0
    /* li r9, 0 */ // 0x806423B4
    /* mtctr r0 */ // 0x806423B8
    r5 = r9 rlwinm 2; // rlwinm
    /* clrlwi. r0, r9, 0x18 */ // 0x806423C0
    r6 = r7 + r5; // 0x806423C4
    /* lfsx f0, r4, r5 */ // 0x806423C8
    /* stfs f0, 0x30(r6) */ // 0x806423CC
    /* lfsx f0, r3, r5 */ // 0x806423D0
    /* stfs f0, 0x40(r6) */ // 0x806423D4
    if (!=) goto 0x0x806423e8;
    /* lfs f0, 0x188(r8) */ // 0x806423DC
    /* stfs f0, 0x30(r6) */ // 0x806423E0
    /* b 0x80642420 */ // 0x806423E4
    if (!=) goto 0x0x806423fc;
    /* lfs f0, 0x188(r8) */ // 0x806423F0
    /* stfs f0, 0x40(r6) */ // 0x806423F4
    /* b 0x80642420 */ // 0x806423F8
    if (!=) goto 0x0x80642410;
    /* lfs f0, 0x184(r8) */ // 0x80642404
    /* stfs f0, 0x40(r6) */ // 0x80642408
    /* b 0x80642420 */ // 0x8064240C
    if (!=) goto 0x0x80642420;
    /* lfs f0, 0x184(r8) */ // 0x80642418
    /* stfs f0, 0x30(r6) */ // 0x8064241C
    r9 = r9 + 1; // 0x80642420
    r5 = r9 rlwinm 2; // rlwinm
    r6 = r7 + r5; // 0x80642428
    /* lfsx f0, r4, r5 */ // 0x8064242C
    /* stfs f0, 0x30(r6) */ // 0x80642430
    /* clrlwi. r0, r9, 0x18 */ // 0x80642434
    /* lfsx f0, r3, r5 */ // 0x80642438
    /* stfs f0, 0x40(r6) */ // 0x8064243C
    if (!=) goto 0x0x80642450;
    /* lfs f0, 0x188(r8) */ // 0x80642444
    /* stfs f0, 0x30(r6) */ // 0x80642448
    /* b 0x80642488 */ // 0x8064244C
    if (!=) goto 0x0x80642464;
    /* lfs f0, 0x188(r8) */ // 0x80642458
    /* stfs f0, 0x40(r6) */ // 0x8064245C
    /* b 0x80642488 */ // 0x80642460
    if (!=) goto 0x0x80642478;
    /* lfs f0, 0x184(r8) */ // 0x8064246C
    /* stfs f0, 0x40(r6) */ // 0x80642470
    /* b 0x80642488 */ // 0x80642474
    if (!=) goto 0x0x80642488;
    /* lfs f0, 0x184(r8) */ // 0x80642480
    /* stfs f0, 0x30(r6) */ // 0x80642484
    r9 = r9 + 1; // 0x80642488
    if (counter-- != 0) goto 0x0x806423bc;
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80642494
    r30 = *(8 + r1); // lwz @ 0x80642498
    r0 = *(0x14 + r1); // lwz @ 0x8064249C
    return;
}