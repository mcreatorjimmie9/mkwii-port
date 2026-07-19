/* Function at 0x807A2294, size=268 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807A2294(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807A229C
    *(0x38 + r1) = r30; // stw @ 0x807A22A8
    *(0x34 + r1) = r29; // stw @ 0x807A22AC
    /* lis r29, 0 */ // 0x807A22B0
    r29 = r29 + 0; // 0x807A22B4
    r4 = *(0 + r4); // lwz @ 0x807A22B8
    r0 = *(0x10 + r4); // lbz @ 0x807A22BC
    if (!=) goto 0x0x807a2384;
    /* lfs f5, 0x24(r29) */ // 0x807A22C8
    /* li r30, 5 */ // 0x807A22CC
    /* lfs f1, 4(r29) */ // 0x807A22D0
    /* li r31, 0 */ // 0x807A22D4
    /* lfs f4, 0x28(r29) */ // 0x807A22D8
    /* lfs f3, 0x2c(r29) */ // 0x807A22DC
    /* lfs f2, 0x30(r29) */ // 0x807A22E0
    /* lfs f0, 0(r29) */ // 0x807A22E4
    /* stfs f5, 8(r1) */ // 0x807A22E8
    /* stfs f4, 0xc(r1) */ // 0x807A22EC
    /* stfs f3, 0x10(r1) */ // 0x807A22F0
    /* stfs f2, 0x14(r1) */ // 0x807A22F4
    /* stfs f1, 0x18(r1) */ // 0x807A22F8
    *(0x1c + r1) = r30; // stw @ 0x807A22FC
    /* stfs f5, 0x20(r1) */ // 0x807A2300
    *(0x24 + r1) = r31; // stw @ 0x807A2304
    /* stfs f0, 0x28(r1) */ // 0x807A2308
    /* stfs f1, 0x2c(r1) */ // 0x807A230C
    r3 = *(0x10 + r3); // lwz @ 0x807A2310
    FUN_806950E4(); // bl 0x806950E4
    r0 = r3 + -2; // 0x807A2318
    if (<=) goto 0x0x807a236c;
    if (!=) goto 0x0x807a2374;
    /* lfs f2, 0x20(r29) */ // 0x807A232C
    /* lfs f4, 0x34(r29) */ // 0x807A2330
    /* lfs f3, 0x38(r29) */ // 0x807A2334
    /* lfs f1, 0(r29) */ // 0x807A2338
    /* lfs f0, 4(r29) */ // 0x807A233C
    *(0x1c + r1) = r30; // stw @ 0x807A2340
    /* stfs f4, 0x20(r1) */ // 0x807A2344
    /* stfs f4, 8(r1) */ // 0x807A2348
    *(0x24 + r1) = r31; // stw @ 0x807A234C
    /* stfs f3, 0xc(r1) */ // 0x807A2350
    /* stfs f2, 0x10(r1) */ // 0x807A2354
    /* stfs f2, 0x14(r1) */ // 0x807A2358
    /* stfs f1, 0x28(r1) */ // 0x807A235C
    /* stfs f2, 0x2c(r1) */ // 0x807A2360
    /* stfs f0, 0x18(r1) */ // 0x807A2364
    /* b 0x807a2374 */ // 0x807A2368
    /* lfs f0, 0x3c(r29) */ // 0x807A236C
    /* stfs f0, 0x18(r1) */ // 0x807A2370
    /* lis r3, 0 */ // 0x807A2374
    r3 = *(0 + r3); // lwz @ 0x807A237C
    FUN_8078DA3C(r3, r4); // bl 0x8078DA3C
    r0 = *(0x44 + r1); // lwz @ 0x807A2384
    r31 = *(0x3c + r1); // lwz @ 0x807A2388
    r30 = *(0x38 + r1); // lwz @ 0x807A238C
    r29 = *(0x34 + r1); // lwz @ 0x807A2390
    return;
}