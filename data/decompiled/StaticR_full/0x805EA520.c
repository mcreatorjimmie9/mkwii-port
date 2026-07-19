/* Function at 0x805EA520, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EA520(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EA528
    *(0x24 + r1) = r0; // stw @ 0x805EA52C
    *(0x1c + r1) = r31; // stw @ 0x805EA530
    r31 = *(0x2c + r3); // lwz @ 0x805EA534
    if (!=) goto 0x0x805ea56c;
    /* lis r3, 0 */ // 0x805EA540
    /* lis r5, 0 */ // 0x805EA544
    /* lis r6, 0 */ // 0x805EA548
    /* lis r7, 0 */ // 0x805EA54C
    r3 = r3 + 0; // 0x805EA550
    r5 = r5 + 0; // 0x805EA554
    r6 = r6 + 0; // 0x805EA558
    r7 = r7 + 0; // 0x805EA55C
    /* li r4, 0xa6 */ // 0x805EA560
    /* crclr cr1eq */ // 0x805EA564
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r4 = *(0x24 + r31); // lhz @ 0x805EA56C
    /* lis r0, 0x4330 */ // 0x805EA570
    *(8 + r1) = r0; // stw @ 0x805EA574
    /* lis r3, 0 */ // 0x805EA578
    /* xoris r0, r4, 0x8000 */ // 0x805EA57C
    /* lfd f1, 0(r3) */ // 0x805EA580
    *(0xc + r1) = r0; // stw @ 0x805EA584
    r31 = *(0x1c + r1); // lwz @ 0x805EA588
    /* lfd f0, 8(r1) */ // 0x805EA58C
    r0 = *(0x24 + r1); // lwz @ 0x805EA590
    /* fsubs f1, f0, f1 */ // 0x805EA594
    return;
}