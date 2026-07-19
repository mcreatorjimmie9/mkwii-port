/* Function at 0x8070F4FC, size=324 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8070F4FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8070F510
    *(0x14 + r1) = r29; // stw @ 0x8070F514
    /* li r29, 0 */ // 0x8070F518
    r12 = *(0 + r3); // lwz @ 0x8070F51C
    r12 = *(0x30 + r12); // lwz @ 0x8070F520
    /* mtctr r12 */ // 0x8070F524
    /* bctrl  */ // 0x8070F528
    /* lis r4, 0x101 */ // 0x8070F52C
    r0 = *(0x20 + r3); // lwz @ 0x8070F530
    r3 = r4 + 0x101; // 0x8070F534
    /* andc. r0, r3, r0 */ // 0x8070F538
    if (!=) goto 0x0x8070f558;
    /* lis r3, 0 */ // 0x8070F540
    r3 = *(0 + r3); // lwz @ 0x8070F544
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x8070f558;
    /* li r29, 1 */ // 0x8070F554
    r6 = *(0x108 + r31); // lhz @ 0x8070F558
    /* li r5, 0 */ // 0x8070F55C
    if (!=) goto 0x0x8070f580;
    r3 = *(0x18c + r31); // lwz @ 0x8070F568
    r4 = *(0x1ac + r31); // lwz @ 0x8070F56C
    r0 = r3 + -0x1e; // 0x8070F570
    if (<=) goto 0x0x8070f580;
    /* li r5, 1 */ // 0x8070F57C
    /* addis r3, r6, 1 */ // 0x8070F580
    /* li r4, 0 */ // 0x8070F584
    r0 = r3 + -1; // 0x8070F588
    /* clrlwi r0, r0, 0x10 */ // 0x8070F58C
    if (>) goto 0x0x8070f59c;
    /* li r4, 1 */ // 0x8070F598
    /* li r0, 0 */ // 0x8070F5A0
    if (!=) goto 0x0x8070f5b0;
    if (==) goto 0x0x8070f5b4;
    /* li r0, 1 */ // 0x8070F5B0
    /* cntlzw r0, r0 */ // 0x8070F5B8
    /* srwi r30, r0, 5 */ // 0x8070F5BC
    if (==) goto 0x0x8070f610;
    if (!=) goto 0x0x8070f610;
    r3 = *(0x158 + r31); // lwz @ 0x8070F5CC
    r12 = *(0 + r3); // lwz @ 0x8070F5D0
    r12 = *(0xc + r12); // lwz @ 0x8070F5D4
    /* mtctr r12 */ // 0x8070F5D8
    /* bctrl  */ // 0x8070F5DC
    r3 = *(0x158 + r31); // lwz @ 0x8070F5E0
    r4 = r31 + 0x30; // 0x8070F5E4
    r12 = *(0 + r3); // lwz @ 0x8070F5E8
    r12 = *(0x74 + r12); // lwz @ 0x8070F5EC
    /* mtctr r12 */ // 0x8070F5F0
    /* bctrl  */ // 0x8070F5F4
    r3 = *(0x158 + r31); // lwz @ 0x8070F5F8
    /* lfs f1, 0x40(r31) */ // 0x8070F5FC
    r12 = *(0 + r3); // lwz @ 0x8070F600
    r12 = *(0x6c + r12); // lwz @ 0x8070F604
    /* mtctr r12 */ // 0x8070F608
    /* bctrl  */ // 0x8070F60C
    if (!=) goto 0x0x8070f620;
    if (==) goto 0x0x8070f634;
    r3 = *(0x158 + r31); // lwz @ 0x8070F620
    r12 = *(0 + r3); // lwz @ 0x8070F624
    r12 = *(0x10 + r12); // lwz @ 0x8070F628
    /* mtctr r12 */ // 0x8070F62C
    /* bctrl  */ // 0x8070F630
    r3 = *(0x158 + r31); // lwz @ 0x8070F634
    r3 = r3 + 0x74; // 0x8070F638
    FUN_805E3430(r3); // bl 0x805E3430
}