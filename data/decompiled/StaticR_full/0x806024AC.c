/* Function at 0x806024AC, size=360 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_806024AC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, -1 */ // 0x806024BC
    *(0x18 + r1) = r30; // stw @ 0x806024C0
    r30 = r3;
    r3 = r3 + 4; // 0x806024C8
    *(0x14 + r1) = r29; // stw @ 0x806024CC
    r29 = *(0x6c + r4); // lbz @ 0x806024D0
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x806024D8
    r5 = *(0 + r4); // lwz @ 0x806024DC
    r0 = *(0xb90 + r5); // lwz @ 0x806024E0
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x806024E4
    if (==) goto 0x0x8060253c;
    /* mulli r0, r29, 0xf0 */ // 0x806024EC
    r4 = r5 + r0; // 0x806024F0
    r4 = *(0xf4 + r4); // lwz @ 0x806024F4
    if (!=) goto 0x0x80602508;
    /* li r0, 0 */ // 0x80602500
    /* b 0x80602534 */ // 0x80602504
    /* clrlwi r0, r3, 0x18 */ // 0x80602508
    /* mulli r0, r0, 0xf0 */ // 0x8060250C
    r3 = r5 + r0; // 0x80602510
    r0 = *(0xf4 + r3); // lwz @ 0x80602514
    if (!=) goto 0x0x80602528;
    /* li r0, 0 */ // 0x80602520
    /* b 0x80602534 */ // 0x80602524
    /* subf r0, r4, r0 */ // 0x80602528
    /* cntlzw r0, r0 */ // 0x8060252C
    /* srwi r0, r0, 5 */ // 0x80602530
    if (!=) goto 0x0x806025b0;
    r3 = *(4 + r30); // lwz @ 0x8060253C
    r3 = *(4 + r3); // lwz @ 0x80602540
    r4 = *(0xc + r3); // lwz @ 0x80602544
    /* rlwinm. r0, r4, 0, 0x10, 0x10 */ // 0x80602548
    if (!=) goto 0x0x806025b0;
    r0 = *(8 + r3); // lwz @ 0x80602550
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x80602554
    if (!=) goto 0x0x806025b0;
    /* rlwinm. r0, r4, 0, 4, 4 */ // 0x8060255C
    if (!=) goto 0x0x806025b0;
    r3 = r30 + 4; // 0x80602564
    /* li r31, 2 */ // 0x80602568
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80602570
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80602578
    r3 = *(0x68 + r3); // lwz @ 0x8060257C
    /* lwzx r3, r3, r0 */ // 0x80602580
    FUN_8073A8FC(r4); // bl 0x8073A8FC
    r3 = r30 + 4; // 0x80602588
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x80602590
    /* lis r4, 0 */ // 0x80602594
    /* lfs f1, 0(r4) */ // 0x80602598
    /* li r4, 0x10c */ // 0x8060259C
    r12 = *(0xe0 + r12); // lwz @ 0x806025A0
    /* mtctr r12 */ // 0x806025A4
    /* bctrl  */ // 0x806025A8
    /* b 0x806025f4 */ // 0x806025AC
    r3 = r30 + 4; // 0x806025B0
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x806025B8
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x806025C0
    r3 = *(0x68 + r3); // lwz @ 0x806025C4
    /* lwzx r3, r3, r0 */ // 0x806025C8
    FUN_8073ADEC(r4); // bl 0x8073ADEC
    r3 = r30 + 4; // 0x806025D0
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x806025D8
    /* lis r4, 0 */ // 0x806025DC
    /* lfs f1, 0(r4) */ // 0x806025E0
    /* li r4, 0x10d */ // 0x806025E4
    r12 = *(0xe4 + r12); // lwz @ 0x806025E8
    /* mtctr r12 */ // 0x806025EC
    /* bctrl  */ // 0x806025F0
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806025F8
    r30 = *(0x18 + r1); // lwz @ 0x806025FC
    r29 = *(0x14 + r1); // lwz @ 0x80602600
    r0 = *(0x24 + r1); // lwz @ 0x80602604
    return;
}