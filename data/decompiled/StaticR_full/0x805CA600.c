/* Function at 0x805CA600, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805CA600(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805CA614
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805CA61C
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x805CA624
    r12 = *(0x14 + r12); // lwz @ 0x805CA628
    /* mtctr r12 */ // 0x805CA62C
    /* bctrl  */ // 0x805CA630
    r4 = r3;
    r5 = r30;
    r6 = r31;
    r3 = r29 + 4; // 0x805CA640
    /* li r7, 1 */ // 0x805CA644
    FUN_805BC8D0(r4, r5, r6, r3, r7); // bl 0x805BC8D0
    r0 = *(0x24 + r1); // lwz @ 0x805CA64C
    r31 = *(0x1c + r1); // lwz @ 0x805CA650
    r30 = *(0x18 + r1); // lwz @ 0x805CA654
    r29 = *(0x14 + r1); // lwz @ 0x805CA658
    return;
}