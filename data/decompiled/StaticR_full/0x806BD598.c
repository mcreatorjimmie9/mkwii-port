/* Function at 0x806BD598, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806BD598(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BD5A0
    *(0x18 + r1) = r30; // stw @ 0x806BD5AC
    *(0x14 + r1) = r29; // stw @ 0x806BD5B0
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BD5B8
    r3 = *(0 + r3); // lwz @ 0x806BD5BC
    r30 = *(0x280 + r3); // lwz @ 0x806BD5C0
    if (!=) goto 0x0x806bd5d4;
    /* li r30, 0 */ // 0x806BD5CC
    /* b 0x806bd628 */ // 0x806BD5D0
    /* lis r31, 0 */ // 0x806BD5D4
    r31 = r31 + 0; // 0x806BD5D8
    if (==) goto 0x0x806bd624;
    r12 = *(0 + r30); // lwz @ 0x806BD5E0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BD5E8
    /* mtctr r12 */ // 0x806BD5EC
    /* bctrl  */ // 0x806BD5F0
    /* b 0x806bd60c */ // 0x806BD5F4
    if (!=) goto 0x0x806bd608;
    /* li r0, 1 */ // 0x806BD600
    /* b 0x806bd618 */ // 0x806BD604
    r3 = *(0 + r3); // lwz @ 0x806BD608
    if (!=) goto 0x0x806bd5f8;
    /* li r0, 0 */ // 0x806BD614
    if (==) goto 0x0x806bd624;
    /* b 0x806bd628 */ // 0x806BD620
    /* li r30, 0 */ // 0x806BD624
    /* li r0, 0 */ // 0x806BD628
    *(0x247c + r30) = r0; // stw @ 0x806BD62C
    r3 = r29;
    /* li r4, 0x9e */ // 0x806BD634
    r12 = *(0 + r29); // lwz @ 0x806BD638
    /* li r5, 0 */ // 0x806BD63C
    r12 = *(0x24 + r12); // lwz @ 0x806BD640
    /* mtctr r12 */ // 0x806BD644
    /* bctrl  */ // 0x806BD648
    r3 = r29 + 0xc40; // 0x806BD64C
    /* li r4, 0x1113 */ // 0x806BD650
    /* li r5, 0 */ // 0x806BD654
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* li r0, 1 */ // 0x806BD65C
    *(0xdb8 + r29) = r0; // stw @ 0x806BD660
    r31 = *(0x1c + r1); // lwz @ 0x806BD664
    r30 = *(0x18 + r1); // lwz @ 0x806BD668
    r29 = *(0x14 + r1); // lwz @ 0x806BD66C
    r0 = *(0x24 + r1); // lwz @ 0x806BD670
    return;
}