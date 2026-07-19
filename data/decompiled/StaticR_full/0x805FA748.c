/* Function at 0x805FA748, size=124 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r25 */

int FUN_805FA748(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r25 */
    /* stmw r25, 0x54(r1) */ // 0x805FA754
    r25 = r4;
    r5 = *(0x10 + r4); // lwz @ 0x805FA75C
    r0 = *(4 + r5); // lwz @ 0x805FA760
    if (!=) goto 0x0x805fa774;
    r0 = *(0 + r5); // lwz @ 0x805FA76C
    /* b 0x805fa778 */ // 0x805FA770
    /* li r0, 0 */ // 0x805FA774
    if (!=) goto 0x0x805fa838;
    r0 = *(0x10 + r3); // lhz @ 0x805FA780
    /* li r27, 0 */ // 0x805FA784
    /* lis r28, 0 */ // 0x805FA788
    /* lis r29, 0 */ // 0x805FA78C
    /* clrlwi r26, r0, 0x1f */ // 0x805FA790
    /* lis r30, 0 */ // 0x805FA794
    /* lis r31, 0 */ // 0x805FA798
    /* b 0x805fa820 */ // 0x805FA79C
    r4 = *(0x10 + r25); // lwz @ 0x805FA7A0
    r0 = *(4 + r4); // lwz @ 0x805FA7A8
    if (!=) goto 0x0x805fa7bc;
    r4 = *(0 + r4); // lwz @ 0x805FA7B4
    /* b 0x805fa7c0 */ // 0x805FA7B8
    /* li r4, 0 */ // 0x805FA7BC
    r5 = r27;
}