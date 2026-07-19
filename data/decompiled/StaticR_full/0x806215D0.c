/* Function at 0x806215D0, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_806215D0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x806215E0
    *(8 + r1) = r30; // stw @ 0x806215E4
    r30 = r3;
    /* b 0x80621610 */ // 0x806215EC
    r3 = *(0x34 + r30); // lwz @ 0x806215F0
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x806215F8
    r12 = *(0xc + r3); // lwz @ 0x806215FC
    r12 = *(0xc + r12); // lwz @ 0x80621600
    /* mtctr r12 */ // 0x80621604
    /* bctrl  */ // 0x80621608
    r31 = r31 + 1; // 0x8062160C
    r0 = *(0x30 + r30); // lbz @ 0x80621610
    /* clrlwi r3, r31, 0x18 */ // 0x80621614
    if (<) goto 0x0x806215f0;
    r0 = *(0x14 + r1); // lwz @ 0x80621620
    r31 = *(0xc + r1); // lwz @ 0x80621624
    r30 = *(8 + r1); // lwz @ 0x80621628
    return;
}