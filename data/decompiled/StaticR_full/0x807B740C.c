/* Function at 0x807B740C, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807B740C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x807B7428
    r28 = r3;
    r5 = *(0x38 + r3); // lwz @ 0x807B7430
    r31 = *(0 + r5); // lwz @ 0x807B7434
    r3 = r31;
    FUN_807B61D0(r3); // bl 0x807B61D0
    r30 = r3;
    r3 = *(0x3c + r28); // lwz @ 0x807B7444
    r4 = r30;
    FUN_807C2338(r3, r4); // bl 0x807C2338
    r3 = *(0x3c + r28); // lwz @ 0x807B7450
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x807B7458
    r12 = *(0x10 + r12); // lwz @ 0x807B745C
    /* mtctr r12 */ // 0x807B7460
    /* bctrl  */ // 0x807B7464
    r3 = *(0x48 + r28); // lwz @ 0x807B7468
    r4 = r29;
    r12 = *(0x34 + r3); // lwz @ 0x807B7470
    r12 = *(0x1c + r12); // lwz @ 0x807B7474
    /* mtctr r12 */ // 0x807B7478
    /* bctrl  */ // 0x807B747C
    r3 = *(0x40 + r28); // lwz @ 0x807B7480
    r4 = r29;
    r12 = *(0x34 + r3); // lwz @ 0x807B7488
    r12 = *(0x1c + r12); // lwz @ 0x807B748C
    /* mtctr r12 */ // 0x807B7490
    /* bctrl  */ // 0x807B7494
    if (!=) goto 0x0x807b74b8;
    r3 = *(0x4c + r28); // lwz @ 0x807B74A0
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x807B74A8
    r12 = *(0x10 + r12); // lwz @ 0x807B74AC
    /* mtctr r12 */ // 0x807B74B0
    /* bctrl  */ // 0x807B74B4
    r3 = *(0x54 + r28); // lwz @ 0x807B74B8
    r12 = *(0 + r3); // lwz @ 0x807B74BC
    r12 = *(0x10 + r12); // lwz @ 0x807B74C0
    /* mtctr r12 */ // 0x807B74C4
    /* bctrl  */ // 0x807B74C8
    r0 = *(0x24 + r1); // lwz @ 0x807B74CC
    r31 = *(0x1c + r1); // lwz @ 0x807B74D0
    r30 = *(0x18 + r1); // lwz @ 0x807B74D4
    r29 = *(0x14 + r1); // lwz @ 0x807B74D8
    r28 = *(0x10 + r1); // lwz @ 0x807B74DC
    return;
}