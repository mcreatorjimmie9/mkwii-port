/* Function at 0x807973A0, size=336 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807973A0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807973BC
    *(0x10 + r1) = r28; // stw @ 0x807973C0
    r0 = *(0xd2 + r3); // lbz @ 0x807973C4
    /* extsb r0, r0 */ // 0x807973C8
    if (<=) goto 0x0x807974d4;
    /* lis r5, 0 */ // 0x807973D4
    /* lfs f1, 0xec(r3) */ // 0x807973D8
    /* lfs f0, 0(r5) */ // 0x807973DC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807973E0
    if (<=) goto 0x0x807974d4;
    /* li r0, 0 */ // 0x807973E8
    *(0xd2 + r3) = r0; // stb @ 0x807973EC
    /* b 0x807973f8 */ // 0x807973F0
    /* b 0x807974d4 */ // 0x807973F4
    r3 = *(0x18 + r4); // lwz @ 0x807973F8
    if (==) goto 0x0x8079742c;
    r28 = *(8 + r3); // lhz @ 0x80797404
    if (!=) goto 0x0x80797444;
    r12 = *(0 + r31); // lwz @ 0x80797410
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x80797418
    /* mtctr r12 */ // 0x8079741C
    /* bctrl  */ // 0x80797420
    r28 = r3;
    /* b 0x80797444 */ // 0x80797428
    r12 = *(0 + r31); // lwz @ 0x8079742C
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x80797434
    /* mtctr r12 */ // 0x80797438
    /* bctrl  */ // 0x8079743C
    r28 = r3;
    r3 = *(0xdc + r30); // lwz @ 0x80797444
    /* li r7, 0 */ // 0x80797448
    r3 = *(0 + r3); // lwz @ 0x8079744C
    r3 = *(4 + r3); // lwz @ 0x80797450
    r0 = *(8 + r3); // lwz @ 0x80797454
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x80797458
    if (!=) goto 0x0x80797474;
    r3 = *(0xc + r3); // lwz @ 0x80797460
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x80797464
    if (!=) goto 0x0x80797474;
    /* rlwinm. r0, r3, 0, 4, 4 */ // 0x8079746C
    if (==) goto 0x0x8079747c;
    /* li r29, 1 */ // 0x80797474
    /* b 0x80797480 */ // 0x80797478
    /* li r29, 0 */ // 0x8079747C
    if (==) goto 0x0x807974c0;
    /* clrlwi r0, r28, 0x10 */ // 0x80797488
    if (==) goto 0x0x8079749c;
    if (!=) goto 0x0x807974c0;
    r12 = *(0 + r30); // lwz @ 0x8079749C
    /* lis r5, 0 */ // 0x807974A0
    r3 = r30;
    /* li r4, 0x110 */ // 0x807974A8
    r12 = *(0xe4 + r12); // lwz @ 0x807974AC
    /* lfs f1, 0(r5) */ // 0x807974B0
    /* mtctr r12 */ // 0x807974B4
    /* bctrl  */ // 0x807974B8
    /* li r7, 1 */ // 0x807974BC
    r3 = r30;
    r4 = r31;
    r6 = r29;
    /* clrlwi r5, r28, 0x10 */ // 0x807974CC
    FUN_807974F4(r7, r3, r4, r6); // bl 0x807974F4
    r0 = *(0x24 + r1); // lwz @ 0x807974D4
    r31 = *(0x1c + r1); // lwz @ 0x807974D8
    r30 = *(0x18 + r1); // lwz @ 0x807974DC
    r29 = *(0x14 + r1); // lwz @ 0x807974E0
    r28 = *(0x10 + r1); // lwz @ 0x807974E4
}