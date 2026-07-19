/* Function at 0x8086E708, size=116 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r18 */
/* Calls: 1 function(s) */

int FUN_8086E708(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r18 */
    /* stmw r18, 0x28(r1) */ // 0x8086E714
    r26 = r3;
    /* li r27, 0 */ // 0x8086E71C
    /* lis r19, 0 */ // 0x8086E720
    r28 = r26;
    /* lis r20, 0 */ // 0x8086E728
    /* lis r21, 0 */ // 0x8086E72C
    /* lis r22, 0 */ // 0x8086E730
    /* lis r23, 0 */ // 0x8086E734
    /* lis r24, 0 */ // 0x8086E738
    /* li r25, 0xc8 */ // 0x8086E73C
    /* b 0x8086e838 */ // 0x8086E740
    r30 = *(0x18 + r28); // lwz @ 0x8086E744
    r4 = *(0 + r30); // lwz @ 0x8086E74C
    r0 = *(0xc + r4); // lwz @ 0x8086E750
    *(0x10 + r1) = r0; // stw @ 0x8086E754
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    /* li r29, 0 */ // 0x8086E764
    if (==) goto 0x0x8086e830;
    /* b 0x8086e828 */ // 0x8086E76C
    r5 = *(0 + r30); // lwz @ 0x8086E770
    r4 = r29;
}