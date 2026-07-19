/* Function at 0x808B858C, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808B858C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808B85A4
    r28 = r3;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r30, r3, 0x18 */ // 0x808B85B0
    /* li r29, 0 */ // 0x808B85B4
    /* li r31, 0 */ // 0x808B85B8
    /* b 0x808b860c */ // 0x808B85BC
    r0 = *(0x10 + r28); // lwz @ 0x808B85C0
    if (!=) goto 0x0x808b85e0;
    r0 = *(0x914 + r28); // lwz @ 0x808B85CC
    r4 = *(0x3ec + r28); // lwz @ 0x808B85D0
    r3 = r0 + r31; // 0x808B85D4
    FUN_806CA628(); // bl 0x806CA628
    /* b 0x808b8604 */ // 0x808B85DC
    r12 = *(0 + r28); // lwz @ 0x808B85E0
    r3 = r28;
    r12 = *(0x10 + r12); // lwz @ 0x808B85E8
    /* mtctr r12 */ // 0x808B85EC
    /* bctrl  */ // 0x808B85F0
    r0 = *(0x914 + r28); // lwz @ 0x808B85F4
    r4 = r3;
    r3 = r0 + r31; // 0x808B85FC
    FUN_806CA628(r4); // bl 0x806CA628
    r31 = r31 + 0x188; // 0x808B8604
    r29 = r29 + 1; // 0x808B8608
    if (<) goto 0x0x808b85c0;
    r0 = *(0x24 + r1); // lwz @ 0x808B8614
    r31 = *(0x1c + r1); // lwz @ 0x808B8618
    r30 = *(0x18 + r1); // lwz @ 0x808B861C
    r29 = *(0x14 + r1); // lwz @ 0x808B8620
    r28 = *(0x10 + r1); // lwz @ 0x808B8624
    return;
}