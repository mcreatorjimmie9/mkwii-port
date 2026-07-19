/* Function at 0x80817728, size=208 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_80817728(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* stfd f31, 0x38(r1) */ // 0x80817734
    /* fmr f31, f3 */ // 0x80817738
    /* stfd f30, 0x30(r1) */ // 0x8081773C
    /* fmr f30, f2 */ // 0x80817740
    /* stfd f29, 0x28(r1) */ // 0x80817744
    /* fmr f29, f1 */ // 0x80817748
    /* stmw r25, 0xc(r1) */ // 0x8081774C
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r9 = *(0x18 + r3); // lwz @ 0x80817768
    r0 = *(0x14 + r3); // lwz @ 0x8081776C
    if (<) goto 0x0x80817780;
    /* li r3, 0 */ // 0x80817778
    /* b 0x808177d8 */ // 0x8081777C
    /* mulli r0, r9, 0x24 */ // 0x80817780
    r5 = *(0x10 + r3); // lwz @ 0x80817784
    r3 = r26;
    /* li r4, 8 */ // 0x8081778C
    r31 = r5 + r0; // 0x80817790
    FUN_80816C30(r3, r4); // bl 0x80816C30
    /* fmr f1, f29 */ // 0x80817798
    r0 = r3;
    /* fmr f2, f30 */ // 0x808177A0
    r3 = r31;
    /* fmr f3, f31 */ // 0x808177A8
    r4 = r26;
    r5 = r27;
    r7 = r28;
    r8 = r29;
    r9 = r30;
    /* clrlwi r6, r0, 0x10 */ // 0x808177C0
    FUN_80817894(r5, r7, r8, r9); // bl 0x80817894
    r4 = *(0x18 + r25); // lwz @ 0x808177C8
    r3 = r31;
    r0 = r4 + 1; // 0x808177D0
    *(0x18 + r25) = r0; // stw @ 0x808177D4
    /* lfd f31, 0x38(r1) */ // 0x808177D8
    /* lfd f30, 0x30(r1) */ // 0x808177DC
    /* lfd f29, 0x28(r1) */ // 0x808177E0
    r0 = *(0x44 + r1); // lwz @ 0x808177E8
    return;
}