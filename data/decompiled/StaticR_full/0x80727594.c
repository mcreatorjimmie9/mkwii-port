/* Function at 0x80727594, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80727594(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r0, r5, 2 */ // 0x807275A0
    r31 = r4 + r0; // 0x807275A8
    *(0x18 + r1) = r30; // stw @ 0x807275AC
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x807275B4
    r29 = r6;
    /* b 0x807275e4 */ // 0x807275BC
    r3 = *(0 + r31); // lwz @ 0x807275C0
    if (==) goto 0x0x807275dc;
    r12 = *(0 + r3); // lwz @ 0x807275CC
    r12 = *(0xc + r12); // lwz @ 0x807275D0
    /* mtctr r12 */ // 0x807275D4
    /* bctrl  */ // 0x807275D8
    r31 = r31 + 4; // 0x807275DC
    r30 = r30 + 1; // 0x807275E0
    if (<) goto 0x0x807275c0;
    r0 = *(0x24 + r1); // lwz @ 0x807275EC
    r31 = *(0x1c + r1); // lwz @ 0x807275F0
    r30 = *(0x18 + r1); // lwz @ 0x807275F4
    r29 = *(0x14 + r1); // lwz @ 0x807275F8
    return;
}