/* Function at 0x806A7440, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806A7440(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806A7448
    *(0x18 + r1) = r30; // stw @ 0x806A7454
    *(0x14 + r1) = r29; // stw @ 0x806A7458
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806A7460
    r3 = *(0 + r3); // lwz @ 0x806A7464
    r30 = *(0x144 + r3); // lwz @ 0x806A7468
    if (!=) goto 0x0x806a747c;
    /* li r30, 0 */ // 0x806A7474
    /* b 0x806a74d0 */ // 0x806A7478
    /* lis r31, 0 */ // 0x806A747C
    r31 = r31 + 0; // 0x806A7480
    if (==) goto 0x0x806a74cc;
    r12 = *(0 + r30); // lwz @ 0x806A7488
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806A7490
    /* mtctr r12 */ // 0x806A7494
    /* bctrl  */ // 0x806A7498
    /* b 0x806a74b4 */ // 0x806A749C
    if (!=) goto 0x0x806a74b0;
    /* li r0, 1 */ // 0x806A74A8
    /* b 0x806a74c0 */ // 0x806A74AC
    r3 = *(0 + r3); // lwz @ 0x806A74B0
    if (!=) goto 0x0x806a74a0;
    /* li r0, 0 */ // 0x806A74BC
    if (==) goto 0x0x806a74cc;
    /* b 0x806a74d0 */ // 0x806A74C8
    /* li r30, 0 */ // 0x806A74CC
    r12 = *(0 + r30); // lwz @ 0x806A74D0
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806A74D8
    /* mtctr r12 */ // 0x806A74DC
    /* bctrl  */ // 0x806A74E0
    r12 = *(0 + r30); // lwz @ 0x806A74E4
    r3 = r30;
    /* li r4, 0x10cd */ // 0x806A74EC
    /* li r5, 0 */ // 0x806A74F0
    r12 = *(0x68 + r12); // lwz @ 0x806A74F4
    /* mtctr r12 */ // 0x806A74F8
    /* bctrl  */ // 0x806A74FC
    r12 = *(0 + r29); // lwz @ 0x806A7500
    r3 = r29;
    /* li r4, 0x4f */ // 0x806A7508
    /* li r5, 0 */ // 0x806A750C
    r12 = *(0x24 + r12); // lwz @ 0x806A7510
    /* mtctr r12 */ // 0x806A7514
    /* bctrl  */ // 0x806A7518
    r0 = *(0x24 + r1); // lwz @ 0x806A751C
    r31 = *(0x1c + r1); // lwz @ 0x806A7520
    r30 = *(0x18 + r1); // lwz @ 0x806A7524
    r29 = *(0x14 + r1); // lwz @ 0x806A7528
    return;
}