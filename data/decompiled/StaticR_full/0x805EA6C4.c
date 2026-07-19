/* Function at 0x805EA6C4, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EA6C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EA6CC
    *(0x24 + r1) = r0; // stw @ 0x805EA6D0
    *(0x1c + r1) = r31; // stw @ 0x805EA6D4
    r31 = *(0x2c + r3); // lwz @ 0x805EA6D8
    if (!=) goto 0x0x805ea710;
    /* lis r3, 0 */ // 0x805EA6E4
    /* lis r5, 0 */ // 0x805EA6E8
    /* lis r6, 0 */ // 0x805EA6EC
    /* lis r7, 0 */ // 0x805EA6F0
    r3 = r3 + 0; // 0x805EA6F4
    r5 = r5 + 0; // 0x805EA6F8
    r6 = r6 + 0; // 0x805EA6FC
    r7 = r7 + 0; // 0x805EA700
    /* li r4, 0x5c */ // 0x805EA704
    /* crclr cr1eq */ // 0x805EA708
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r4 = *(0x30 + r31); // lhz @ 0x805EA710
    /* lis r0, 0x4330 */ // 0x805EA714
    *(8 + r1) = r0; // stw @ 0x805EA718
    /* lis r3, 0 */ // 0x805EA71C
    /* xoris r0, r4, 0x8000 */ // 0x805EA720
    /* lfd f1, 0(r3) */ // 0x805EA724
    *(0xc + r1) = r0; // stw @ 0x805EA728
    r31 = *(0x1c + r1); // lwz @ 0x805EA72C
    /* lfd f0, 8(r1) */ // 0x805EA730
    r0 = *(0x24 + r1); // lwz @ 0x805EA734
    /* fsubs f1, f0, f1 */ // 0x805EA738
    return;
}