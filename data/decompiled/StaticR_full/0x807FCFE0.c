/* Function at 0x807FCFE0, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807FCFE0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    r4 = r5;
    *(0x18 + r1) = r30; // stw @ 0x807FCFF8
    r30 = r3;
    FUN_805A4400(r4, r3); // bl 0x805A4400
    r0 = *(0x78 + r31); // lwz @ 0x807FD008
    r3 = r30;
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x807FD010
    if (!=) goto 0x0x807fd020;
    r4 = *(0x6c + r31); // lbz @ 0x807FD018
    /* b 0x807fd024 */ // 0x807FD01C
    /* li r4, 0xc */ // 0x807FD020
    r12 = *(0 + r3); // lwz @ 0x807FD024
    /* clrlwi r4, r4, 0x18 */ // 0x807FD028
    r12 = *(0xf8 + r12); // lwz @ 0x807FD030
    /* mtctr r12 */ // 0x807FD034
    /* bctrl  */ // 0x807FD038
    r12 = *(0 + r30); // lwz @ 0x807FD03C
    r3 = r30;
    r12 = *(0x100 + r12); // lwz @ 0x807FD044
    /* mtctr r12 */ // 0x807FD048
    /* bctrl  */ // 0x807FD04C
    /* lis r4, 0 */ // 0x807FD050
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x807FD058
    /* li r4, 0x1e0 */ // 0x807FD05C
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x807FD064
    r31 = *(0x1c + r1); // lwz @ 0x807FD068
    r30 = *(0x18 + r1); // lwz @ 0x807FD06C
    return;
}