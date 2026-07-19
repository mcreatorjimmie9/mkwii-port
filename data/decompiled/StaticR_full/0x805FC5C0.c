/* Function at 0x805FC5C0, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805FC5C0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805FC5D0
    r30 = r3;
    FUN_8062075C(); // bl 0x8062075C
    r0 = *(0x228 + r30); // lbz @ 0x805FC5DC
    if (!=) goto 0x0x805fc620;
    /* li r31, 0 */ // 0x805FC5E8
    /* b 0x805fc610 */ // 0x805FC5EC
    r3 = *(0x238 + r30); // lwz @ 0x805FC5F0
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805FC5F8
    r12 = *(0xc + r3); // lwz @ 0x805FC5FC
    r12 = *(0x30 + r12); // lwz @ 0x805FC600
    /* mtctr r12 */ // 0x805FC604
    /* bctrl  */ // 0x805FC608
    r31 = r31 + 1; // 0x805FC60C
    r0 = *(0x23c + r30); // lhz @ 0x805FC610
    /* clrlwi r3, r31, 0x18 */ // 0x805FC614
    if (<) goto 0x0x805fc5f0;
    r0 = *(0x14 + r1); // lwz @ 0x805FC620
    r31 = *(0xc + r1); // lwz @ 0x805FC624
    r30 = *(8 + r1); // lwz @ 0x805FC628
    return;
}