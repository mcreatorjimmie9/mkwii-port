/* Function at 0x808B8634, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808B8634(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808B864C
    r28 = r3;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r30, r3, 0x18 */ // 0x808B8658
    /* li r29, 0 */ // 0x808B865C
    /* li r31, 0 */ // 0x808B8660
    /* b 0x808b86b4 */ // 0x808B8664
    r0 = *(0x10 + r28); // lwz @ 0x808B8668
    if (!=) goto 0x0x808b869c;
    r12 = *(0 + r28); // lwz @ 0x808B8674
    r3 = r28;
    r12 = *(0x10 + r12); // lwz @ 0x808B867C
    /* mtctr r12 */ // 0x808B8680
    /* bctrl  */ // 0x808B8684
    r0 = *(0x914 + r28); // lwz @ 0x808B8688
    r4 = r3;
    r3 = r0 + r31; // 0x808B8690
    FUN_806CA628(r4); // bl 0x806CA628
    /* b 0x808b86ac */ // 0x808B8698
    r0 = *(0x914 + r28); // lwz @ 0x808B869C
    r4 = *(0x3ec + r28); // lwz @ 0x808B86A0
    r3 = r0 + r31; // 0x808B86A4
    FUN_806CA628(); // bl 0x806CA628
    r31 = r31 + 0x188; // 0x808B86AC
    r29 = r29 + 1; // 0x808B86B0
    if (<) goto 0x0x808b8668;
    r0 = *(0x24 + r1); // lwz @ 0x808B86BC
    r31 = *(0x1c + r1); // lwz @ 0x808B86C0
    r30 = *(0x18 + r1); // lwz @ 0x808B86C4
    r29 = *(0x14 + r1); // lwz @ 0x808B86C8
    r28 = *(0x10 + r1); // lwz @ 0x808B86CC
    return;
}