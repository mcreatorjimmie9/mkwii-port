/* Function at 0x80735278, size=240 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80735278(int r3, int r4)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    /* li r4, 0 */ // 0x8073528C
    *(0x88 + r1) = r30; // stw @ 0x80735290
    r30 = r3;
    *(0x84 + r1) = r29; // stw @ 0x80735298
    *(0x80 + r1) = r28; // stw @ 0x8073529C
    r28 = *(0x724 + r3); // lwz @ 0x807352A0
    if (<) goto 0x0x807352c4;
    /* lis r3, 0 */ // 0x807352AC
    r3 = r3 + 0; // 0x807352B0
    r0 = *(4 + r3); // lwz @ 0x807352B4
    if (>=) goto 0x0x807352c4;
    /* li r4, 1 */ // 0x807352C0
    if (!=) goto 0x0x807352e0;
    /* lis r3, 0 */ // 0x807352CC
    r12 = *(0 + r3); // lwzu @ 0x807352D0
    r12 = *(0x18 + r12); // lwz @ 0x807352D4
    /* mtctr r12 */ // 0x807352D8
    /* bctrl  */ // 0x807352DC
    /* lis r29, 0 */ // 0x807352E0
    /* slwi r0, r28, 2 */ // 0x807352E4
    r29 = r29 + 0; // 0x807352E8
    r4 = *(8 + r29); // lwz @ 0x807352F0
    /* lwzx r4, r4, r0 */ // 0x807352F4
    r4 = *(0x6c + r4); // lwz @ 0x807352F8
    r12 = *(0 + r4); // lwz @ 0x807352FC
    r12 = *(0x20 + r12); // lwz @ 0x80735300
    /* mtctr r12 */ // 0x80735304
    /* bctrl  */ // 0x80735308
    r28 = *(0x724 + r30); // lwz @ 0x8073530C
    /* li r3, 0 */ // 0x80735310
    if (<) goto 0x0x8073532c;
    r0 = *(4 + r29); // lwz @ 0x8073531C
    if (>=) goto 0x0x8073532c;
    /* li r3, 1 */ // 0x80735328
    if (!=) goto 0x0x80735348;
    /* lis r3, 0 */ // 0x80735334
    r12 = *(0 + r3); // lwzu @ 0x80735338
    r12 = *(0x18 + r12); // lwz @ 0x8073533C
    /* mtctr r12 */ // 0x80735340
    /* bctrl  */ // 0x80735344
    /* lis r4, 0 */ // 0x80735348
    /* slwi r0, r28, 2 */ // 0x8073534C
    r4 = r4 + 0; // 0x80735350
    r4 = *(8 + r4); // lwz @ 0x80735358
    /* lwzx r4, r4, r0 */ // 0x8073535C
    r4 = *(0x6c + r4); // lwz @ 0x80735360
    FUN_805E3430(r4, r3); // bl 0x805E3430
}