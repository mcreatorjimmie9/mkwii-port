/* Function at 0x805FA4A0, size=140 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r23 */

int FUN_805FA4A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r23 */
    /* stmw r23, 0x4c(r1) */ // 0x805FA4AC
    r30 = r4;
    r31 = r5;
    r6 = *(0x10 + r4); // lwz @ 0x805FA4B8
    r0 = *(4 + r6); // lwz @ 0x805FA4BC
    if (!=) goto 0x0x805fa4d0;
    r0 = *(0 + r6); // lwz @ 0x805FA4C8
    /* b 0x805fa4d4 */ // 0x805FA4CC
    /* li r0, 0 */ // 0x805FA4D0
    if (!=) goto 0x0x805fa5a8;
    r0 = *(0x10 + r3); // lhz @ 0x805FA4DC
    /* neg r4, r5 */ // 0x805FA4E0
    r3 = r4 | r5; // 0x805FA4E4
    /* li r23, 0 */ // 0x805FA4E8
    /* srwi r25, r3, 0x1f */ // 0x805FA4EC
    /* clrlwi r24, r0, 0x1f */ // 0x805FA4F0
    /* lis r26, 0 */ // 0x805FA4F4
    /* lis r27, 0 */ // 0x805FA4F8
    /* lis r28, 0 */ // 0x805FA4FC
    /* lis r29, 0 */ // 0x805FA500
    /* b 0x805fa590 */ // 0x805FA504
    r4 = *(0x10 + r30); // lwz @ 0x805FA508
    r0 = *(4 + r4); // lwz @ 0x805FA510
    if (!=) goto 0x0x805fa524;
    r4 = *(0 + r4); // lwz @ 0x805FA51C
    /* b 0x805fa528 */ // 0x805FA520
    /* li r4, 0 */ // 0x805FA524
    r5 = r23;
}