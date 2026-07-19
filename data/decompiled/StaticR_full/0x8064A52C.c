/* Function at 0x8064A52C, size=480 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_8064A52C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8064A548
    *(0x10 + r1) = r28; // stw @ 0x8064A54C
    r5 = *(0x64 + r3); // lwz @ 0x8064A550
    r3 = *(0xc + r5); // lwz @ 0x8064A554
    r28 = *(0x38 + r3); // lwz @ 0x8064A558
    if (!=) goto 0x0x8064a56c;
    /* li r28, 0 */ // 0x8064A564
    /* b 0x8064a5c0 */ // 0x8064A568
    /* lis r29, 0 */ // 0x8064A56C
    r29 = r29 + 0; // 0x8064A570
    if (==) goto 0x0x8064a5bc;
    r12 = *(0 + r28); // lwz @ 0x8064A578
    r3 = r28;
    r12 = *(8 + r12); // lwz @ 0x8064A580
    /* mtctr r12 */ // 0x8064A584
    /* bctrl  */ // 0x8064A588
    /* b 0x8064a5a4 */ // 0x8064A58C
    if (!=) goto 0x0x8064a5a0;
    /* li r0, 1 */ // 0x8064A598
    /* b 0x8064a5b0 */ // 0x8064A59C
    r3 = *(0 + r3); // lwz @ 0x8064A5A0
    if (!=) goto 0x0x8064a590;
    /* li r0, 0 */ // 0x8064A5AC
    if (==) goto 0x0x8064a5bc;
    /* b 0x8064a5c0 */ // 0x8064A5B8
    /* li r28, 0 */ // 0x8064A5BC
    /* li r4, 0 */ // 0x8064A5C0
    r0 = r30 + 0x174; // 0x8064A5C4
    if (==) goto 0x0x8064a5e4;
    r3 = *(0x54 + r28); // lwz @ 0x8064A5D0
    if (!=) goto 0x0x8064a5e4;
    /* li r4, 1 */ // 0x8064A5DC
    /* b 0x8064a660 */ // 0x8064A5E0
    /* li r3, 1 */ // 0x8064A5E4
    if (==) goto 0x0x8064a604;
    r3 = *(0xb0 + r28); // lwz @ 0x8064A5F0
    if (!=) goto 0x0x8064a604;
    /* li r4, 1 */ // 0x8064A5FC
    /* b 0x8064a660 */ // 0x8064A600
    /* li r3, 2 */ // 0x8064A604
    if (==) goto 0x0x8064a624;
    r3 = *(0x10c + r28); // lwz @ 0x8064A610
    if (!=) goto 0x0x8064a624;
    /* li r4, 1 */ // 0x8064A61C
    /* b 0x8064a660 */ // 0x8064A620
    /* li r3, 3 */ // 0x8064A624
    if (==) goto 0x0x8064a644;
    r3 = *(0x168 + r28); // lwz @ 0x8064A630
    if (!=) goto 0x0x8064a644;
    /* li r4, 1 */ // 0x8064A63C
    /* b 0x8064a660 */ // 0x8064A640
    /* li r3, 4 */ // 0x8064A644
    if (==) goto 0x0x8064a660;
    r3 = *(0x1c4 + r28); // lwz @ 0x8064A650
    if (!=) goto 0x0x8064a660;
    /* li r4, 1 */ // 0x8064A65C
    if (!=) goto 0x0x8064a6f4;
    r3 = r30 + 0x98; // 0x8064A668
    /* li r4, 1 */ // 0x8064A66C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8064A674
    r28 = r3;
    if (==) goto 0x0x8064a690;
    if (==) goto 0x0x8064a6e4;
    /* b 0x8064a6f4 */ // 0x8064A68C
    r3 = *(0 + r3); // lwz @ 0x8064A690
    /* slwi r0, r0, 4 */ // 0x8064A694
    /* lwzx r3, r3, r0 */ // 0x8064A698
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8064A6A0
    /* lis r0, 0x4330 */ // 0x8064A6A4
    *(0xc + r1) = r4; // stw @ 0x8064A6A8
    /* lis r3, 0 */ // 0x8064A6AC
    /* lfd f3, 0(r3) */ // 0x8064A6B0
    /* lis r5, 0 */ // 0x8064A6B4
    *(8 + r1) = r0; // stw @ 0x8064A6B8
    r3 = r28;
    /* lfs f1, 0x3c(r28) */ // 0x8064A6C0
    /* li r4, 3 */ // 0x8064A6C4
    /* lfd f2, 8(r1) */ // 0x8064A6C8
    /* lfs f0, 0(r5) */ // 0x8064A6CC
    /* fsubs f2, f2, f3 */ // 0x8064A6D0
    /* fdivs f1, f1, f2 */ // 0x8064A6D4
    /* fsubs f1, f0, f1 */ // 0x8064A6D8
    FUN_8069F718(); // bl 0x8069F718
    /* b 0x8064a6f4 */ // 0x8064A6E0
    /* lis r5, 0 */ // 0x8064A6E4
    /* li r4, 3 */ // 0x8064A6E8
    /* lfs f1, 0(r5) */ // 0x8064A6EC
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r12 = *(0 + r30); // lwz @ 0x8064A6F4
    r3 = r30;
    r4 = r31;
    r12 = *(0x44 + r12); // lwz @ 0x8064A700
    /* mtctr r12 */ // 0x8064A704
    /* bctrl  */ // 0x8064A708
}