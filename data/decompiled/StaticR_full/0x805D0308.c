/* Function at 0x805D0308, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805D0308(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805D031C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805D0324
    r29 = r3;
    r6 = *(4 + r3); // lwz @ 0x805D032C
    r3 = *(8 + r6); // lwz @ 0x805D0330
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805d0348;
    /* li r0, 0 */ // 0x805D0340
    /* b 0x805d036c */ // 0x805D0344
    r3 = *(4 + r29); // lwz @ 0x805D0348
    r3 = *(8 + r3); // lwz @ 0x805D034C
    r0 = *(8 + r3); // lhz @ 0x805D0350
    if (==) goto 0x0x805d0368;
    r3 = *(4 + r3); // lwz @ 0x805D035C
    r0 = *(8 + r3); // lwz @ 0x805D0360
    /* b 0x805d036c */ // 0x805D0364
    /* li r0, 0 */ // 0x805D0368
    if (==) goto 0x0x805d03c0;
    r3 = *(4 + r29); // lwz @ 0x805D0374
    r3 = *(8 + r3); // lwz @ 0x805D0378
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805d0390;
    /* li r4, 0 */ // 0x805D0388
    /* b 0x805d03b4 */ // 0x805D038C
    r3 = *(4 + r29); // lwz @ 0x805D0390
    r3 = *(8 + r3); // lwz @ 0x805D0394
    r0 = *(8 + r3); // lhz @ 0x805D0398
    if (==) goto 0x0x805d03b0;
    r3 = *(4 + r3); // lwz @ 0x805D03A4
    r4 = *(8 + r3); // lwz @ 0x805D03A8
    /* b 0x805d03b4 */ // 0x805D03AC
    /* li r4, 0 */ // 0x805D03B0
    r3 = r30;
    r5 = r31;
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x805D03C0
    r31 = *(0x1c + r1); // lwz @ 0x805D03C4
    r30 = *(0x18 + r1); // lwz @ 0x805D03C8
    r29 = *(0x14 + r1); // lwz @ 0x805D03CC
    return;
}