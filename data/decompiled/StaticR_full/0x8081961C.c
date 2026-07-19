/* Function at 0x8081961C, size=124 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r20 */
/* Calls: 1 function(s) */

int FUN_8081961C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r20 */
    /* stmw r20, 0x20(r1) */ // 0x80819628
    /* lis r30, 0 */ // 0x8081962C
    r29 = r3;
    /* li r28, 0 */ // 0x80819634
    r30 = r30 + 0; // 0x80819638
    /* li r31, 0 */ // 0x8081963C
    /* lis r21, 0 */ // 0x80819640
    /* lis r22, 0 */ // 0x80819644
    /* lis r23, 0 */ // 0x80819648
    /* lis r24, 0 */ // 0x8081964C
    /* lis r25, 0 */ // 0x80819650
    /* lis r26, 0 */ // 0x80819654
    /* lis r27, 0 */ // 0x80819658
    /* b 0x80819708 */ // 0x8081965C
    r5 = *(0 + r29); // lwz @ 0x80819660
    r4 = *(0 + r30); // lwz @ 0x80819668
    r0 = *(0xc + r5); // lwz @ 0x8081966C
    *(0xc + r1) = r0; // stw @ 0x80819670
    FUN_805E3430(r3); // bl 0x805E3430
    r20 = r3;
    if (==) goto 0x0x80819700;
    if (!=) goto 0x0x808196a4;
    r3 = r21 + 0; // 0x80819688
    r5 = r22 + 0; // 0x8081968C
    r6 = r23 + 0; // 0x80819690
    r7 = r24 + 0; // 0x80819694
}