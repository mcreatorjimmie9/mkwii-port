/* Function at 0x8067E4DC, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8067E4DC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x8067E4E8
    *(0x2c + r1) = r31; // stw @ 0x8067E4F0
    /* lis r31, 0 */ // 0x8067E4F4
    *(0x28 + r1) = r30; // stw @ 0x8067E4F8
    r30 = r3;
    *(0xc + r1) = r0; // stb @ 0x8067E500
    r3 = *(0 + r31); // lwz @ 0x8067E504
    *(0x10 + r1) = r0; // stw @ 0x8067E508
    FUN_806F9214(); // bl 0x806F9214
    r3 = *(0 + r31); // lwz @ 0x8067E510
    FUN_806F8718(r4); // bl 0x806F8718
    /* li r0, 5 */ // 0x8067E51C
    r3 = r30;
    /* li r4, 0 */ // 0x8067E524
    /* li r6, 0 */ // 0x8067E528
    /* mtctr r0 */ // 0x8067E52C
    r5 = *(0x14 + r1); // lwz @ 0x8067E530
    r0 = *(8 + r1); // lwz @ 0x8067E534
    r7 = r5 + r6; // 0x8067E538
    r7 = r7 + -9; // 0x8067E53C
    if (<) goto 0x0x8067e56c;
    if (<) goto 0x0x8067e560;
    if (!=) goto 0x0x8067e56c;
    r0 = *(0x24 + r1); // lbz @ 0x8067E554
    if (!=) goto 0x0x8067e56c;
    *(0x1bfc + r3) = r7; // stw @ 0x8067E560
    r3 = r3 + 4; // 0x8067E564
    r4 = r4 + 1; // 0x8067E568
    r5 = *(0x14 + r1); // lwz @ 0x8067E56C
    r6 = r6 + 1; // 0x8067E570
    r0 = *(8 + r1); // lwz @ 0x8067E574
    r7 = r5 + r6; // 0x8067E578
    r7 = r7 + -9; // 0x8067E57C
    if (<) goto 0x0x8067e5ac;
    if (<) goto 0x0x8067e5a0;
    if (!=) goto 0x0x8067e5ac;
    r0 = *(0x24 + r1); // lbz @ 0x8067E594
    if (!=) goto 0x0x8067e5ac;
    *(0x1bfc + r3) = r7; // stw @ 0x8067E5A0
    r3 = r3 + 4; // 0x8067E5A4
    r4 = r4 + 1; // 0x8067E5A8
    r6 = r6 + 1; // 0x8067E5AC
    if (counter-- != 0) goto 0x0x8067e530;
    r3 = r30 + 0x31c; // 0x8067E5B4
    r5 = r4 + -1; // 0x8067E5B8
    FUN_806A1D40(r4, r6, r3, r5); // bl 0x806A1D40
    r0 = *(0x34 + r1); // lwz @ 0x8067E5C0
    r31 = *(0x2c + r1); // lwz @ 0x8067E5C4
    r30 = *(0x28 + r1); // lwz @ 0x8067E5C8
    return;
}