/* Function at 0x807D628C, size=376 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_807D628C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x807D62A8
    r28 = r3;
    r31 = *(4 + r3); // lwz @ 0x807D62B0
    r30 = *(0 + r31); // lwz @ 0x807D62B4
    r3 = r30;
    FUN_807B6180(r3); // bl 0x807B6180
    r0 = *(8 + r28); // lwz @ 0x807D62C0
    if (==) goto 0x0x807d62d8;
    if (==) goto 0x0x807d6318;
    /* b 0x807d63a8 */ // 0x807D62D4
    r0 = *(0x28 + r29); // lbz @ 0x807D62D8
    r3 = r28;
    *(0x2c + r28) = r0; // stb @ 0x807D62E0
    r4 = r28 + 0x24; // 0x807D62E4
    /* lfs f0, 0x20(r29) */ // 0x807D62E8
    /* stfs f0, 0x28(r28) */ // 0x807D62EC
    /* lfs f0, 0x1c(r29) */ // 0x807D62F0
    /* stfs f0, 0x24(r28) */ // 0x807D62F4
    r12 = *(0 + r28); // lwz @ 0x807D62F8
    r12 = *(0x14 + r12); // lwz @ 0x807D62FC
    /* mtctr r12 */ // 0x807D6300
    /* bctrl  */ // 0x807D6304
    r3 = r31;
    /* li r4, 1 */ // 0x807D630C
    FUN_807BB884(r3, r4); // bl 0x807BB884
    /* b 0x807d63a8 */ // 0x807D6314
    r0 = *(0x27 + r29); // lbz @ 0x807D6318
    r3 = r28;
    *(0x20 + r28) = r0; // stb @ 0x807D6320
    r4 = r28 + 0x10; // 0x807D6324
    r12 = *(0 + r28); // lwz @ 0x807D6328
    r12 = *(0x18 + r12); // lwz @ 0x807D632C
    /* mtctr r12 */ // 0x807D6330
    /* bctrl  */ // 0x807D6334
    r3 = r31;
    /* li r4, 1 */ // 0x807D633C
    FUN_807BB884(r3, r4); // bl 0x807BB884
    r3 = r30;
    FUN_807B61BC(r3, r4, r3); // bl 0x807B61BC
    if (==) goto 0x0x807d6378;
    r0 = *(0x25 + r29); // lbz @ 0x807D6354
    if (==) goto 0x0x807d6368;
    /* li r0, 0 */ // 0x807D6360
    *(8 + r28) = r0; // stw @ 0x807D6364
    /* lis r3, 0 */ // 0x807D6368
    /* lfs f0, 0(r3) */ // 0x807D636C
    /* stfs f0, 0x1c(r28) */ // 0x807D6370
    /* b 0x807d63a8 */ // 0x807D6374
    /* lis r3, 0 */ // 0x807D6378
    /* lfs f1, 0x1c(r28) */ // 0x807D637C
    /* lfs f0, 0(r3) */ // 0x807D6380
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D6384
    if (<=) goto 0x0x807d6398;
    /* li r0, 0 */ // 0x807D638C
    *(8 + r28) = r0; // stw @ 0x807D6390
    /* b 0x807d63a8 */ // 0x807D6394
    /* lis r3, 0 */ // 0x807D6398
    /* lfs f0, 0(r3) */ // 0x807D639C
    /* fadds f0, f1, f0 */ // 0x807D63A0
    /* stfs f0, 0x1c(r28) */ // 0x807D63A4
    r3 = r28;
    r7 = r29;
    /* li r4, 1 */ // 0x807D63B0
    /* li r5, 0 */ // 0x807D63B4
    /* li r6, 1 */ // 0x807D63B8
    FUN_807D5F44(r3, r7, r4, r5, r6); // bl 0x807D5F44
    /* lfs f1, 0x14(r30) */ // 0x807D63C0
    /* lis r3, 0 */ // 0x807D63C4
    /* lfs f0, 0(r3) */ // 0x807D63C8
    /* fabs f1, f1 */ // 0x807D63CC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D63D0
    if (<=) goto 0x0x807d63e4;
    r0 = *(0x1c + r30); // lwz @ 0x807D63D8
    r0 = r0 | 0x10; // 0x807D63DC
    *(0x1c + r30) = r0; // stw @ 0x807D63E0
    r0 = *(0x24 + r1); // lwz @ 0x807D63E4
    r31 = *(0x1c + r1); // lwz @ 0x807D63E8
    r30 = *(0x18 + r1); // lwz @ 0x807D63EC
    r29 = *(0x14 + r1); // lwz @ 0x807D63F0
    r28 = *(0x10 + r1); // lwz @ 0x807D63F4
    return;
}