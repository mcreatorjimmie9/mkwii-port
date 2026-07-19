/* Function at 0x807FD07C, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807FD07C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x807FD084
    *(0x1c + r1) = r31; // stw @ 0x807FD08C
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x807FD094
    r30 = r3;
    r3 = *(0 + r6); // lwz @ 0x807FD09C
    r0 = *(0x55 + r3); // lbz @ 0x807FD0A0
    if (!=) goto 0x0x807fd114;
    r4 = r5;
    FUN_805A4400(r4, r3); // bl 0x805A4400
    r0 = *(0x78 + r31); // lwz @ 0x807FD0B8
    r3 = r30;
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x807FD0C0
    if (!=) goto 0x0x807fd0d0;
    r4 = *(0x6c + r31); // lbz @ 0x807FD0C8
    /* b 0x807fd0d4 */ // 0x807FD0CC
    /* li r4, 0xc */ // 0x807FD0D0
    r12 = *(0 + r3); // lwz @ 0x807FD0D4
    /* clrlwi r4, r4, 0x18 */ // 0x807FD0D8
    r12 = *(0xf8 + r12); // lwz @ 0x807FD0E0
    /* mtctr r12 */ // 0x807FD0E4
    /* bctrl  */ // 0x807FD0E8
    r12 = *(0 + r30); // lwz @ 0x807FD0EC
    r3 = r30;
    r12 = *(0x100 + r12); // lwz @ 0x807FD0F4
    /* mtctr r12 */ // 0x807FD0F8
    /* bctrl  */ // 0x807FD0FC
    /* lis r4, 0 */ // 0x807FD100
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x807FD108
    /* li r4, 0x1e0 */ // 0x807FD10C
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x807FD114
    r31 = *(0x1c + r1); // lwz @ 0x807FD118
    r30 = *(0x18 + r1); // lwz @ 0x807FD11C
    return;
}