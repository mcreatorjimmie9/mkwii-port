/* Function at 0x80672420, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80672420(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8067242C
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x80672434
    if (!=) goto 0x0x8067244c;
    /* lis r4, 0 */ // 0x80672440
    /* lfs f0, 0(r4) */ // 0x80672444
    /* b 0x80672454 */ // 0x80672448
    /* lis r4, 0 */ // 0x8067244C
    /* lfs f0, 0(r4) */ // 0x80672450
    /* lis r4, 0 */ // 0x80672454
    /* stfs f0, 0xc(r1) */ // 0x80672458
    r4 = r4 + 0; // 0x8067245C
    r3 = r3 + 0x24; // 0x80672460
    *(8 + r1) = r4; // stw @ 0x80672464
    FUN_8064E1DC(r4, r3, r4); // bl 0x8064E1DC
    /* li r3, 6 */ // 0x80672470
    /* li r0, -1 */ // 0x80672474
    *(8 + r31) = r3; // stw @ 0x80672478
    r3 = r31;
    *(0x1c + r31) = r0; // stw @ 0x80672480
    r12 = *(0 + r31); // lwz @ 0x80672484
    r12 = *(0x44 + r12); // lwz @ 0x80672488
    /* mtctr r12 */ // 0x8067248C
    /* bctrl  */ // 0x80672490
    r0 = *(0x24 + r1); // lwz @ 0x80672494
    r31 = *(0x1c + r1); // lwz @ 0x80672498
    return;
}