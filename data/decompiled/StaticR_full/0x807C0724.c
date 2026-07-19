/* Function at 0x807C0724, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807C0724(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x807C073C
    r28 = r3;
    r3 = r4;
    FUN_807C5A4C(r3); // bl 0x807C5A4C
    r30 = r3;
    r31 = r28;
    /* li r29, 0 */ // 0x807C0754
    /* b 0x807c0784 */ // 0x807C0758
    r3 = *(0x24 + r31); // lwz @ 0x807C075C
    r4 = r30;
    r3 = *(0x10 + r3); // lwz @ 0x807C0764
    r3 = *(0x144 + r3); // lwz @ 0x807C0768
    r12 = *(0x34 + r3); // lwz @ 0x807C076C
    r12 = *(0x50 + r12); // lwz @ 0x807C0770
    /* mtctr r12 */ // 0x807C0774
    /* bctrl  */ // 0x807C0778
    r31 = r31 + 4; // 0x807C077C
    r29 = r29 + 1; // 0x807C0780
    r0 = *(0x14 + r28); // lwz @ 0x807C0784
    if (<) goto 0x0x807c075c;
    r0 = *(0x24 + r1); // lwz @ 0x807C0790
    r31 = *(0x1c + r1); // lwz @ 0x807C0794
    r30 = *(0x18 + r1); // lwz @ 0x807C0798
    r29 = *(0x14 + r1); // lwz @ 0x807C079C
    r28 = *(0x10 + r1); // lwz @ 0x807C07A0
    return;
}