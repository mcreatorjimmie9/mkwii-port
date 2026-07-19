/* Function at 0x805FC638, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805FC638(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805FC650
    r29 = r3;
    FUN_806207C8(); // bl 0x806207C8
    r0 = *(0x228 + r29); // lbz @ 0x805FC65C
    if (!=) goto 0x0x805fc6a4;
    /* li r31, 0 */ // 0x805FC668
    /* b 0x805fc694 */ // 0x805FC66C
    r3 = *(0x238 + r29); // lwz @ 0x805FC670
    r0 = r31 rlwinm 2; // rlwinm
    r4 = r30;
    /* lwzx r3, r3, r0 */ // 0x805FC67C
    r12 = *(0xc + r3); // lwz @ 0x805FC680
    r12 = *(0x34 + r12); // lwz @ 0x805FC684
    /* mtctr r12 */ // 0x805FC688
    /* bctrl  */ // 0x805FC68C
    r31 = r31 + 1; // 0x805FC690
    r0 = *(0x23c + r29); // lhz @ 0x805FC694
    /* clrlwi r3, r31, 0x18 */ // 0x805FC698
    if (<) goto 0x0x805fc670;
    r0 = *(0x24 + r1); // lwz @ 0x805FC6A4
    r31 = *(0x1c + r1); // lwz @ 0x805FC6A8
    r30 = *(0x18 + r1); // lwz @ 0x805FC6AC
    r29 = *(0x14 + r1); // lwz @ 0x805FC6B0
    return;
}