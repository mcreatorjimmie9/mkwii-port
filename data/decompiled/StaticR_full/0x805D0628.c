/* Function at 0x805D0628, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_805D0628(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805D0638
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805D0640
    r30 = r3;
    if (==) goto 0x0x805d06a0;
    /* lis r4, 0 */ // 0x805D064C
    r4 = r4 + 0; // 0x805D0650
    *(0 + r3) = r4; // stw @ 0x805D0654
    r3 = *(0x20 + r3); // lwz @ 0x805D0658
    FUN_805BA86C(r4, r4); // bl 0x805BA86C
    r3 = *(0x14 + r30); // lwz @ 0x805D0660
    if (==) goto 0x0x805d0684;
    r12 = *(0 + r3); // lwz @ 0x805D066C
    r12 = *(0x1c + r12); // lwz @ 0x805D0670
    /* mtctr r12 */ // 0x805D0674
    /* bctrl  */ // 0x805D0678
    r3 = *(0x10 + r30); // lwz @ 0x805D067C
    FUN_805E3430(); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x805D0688
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805d06a0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805D06A4
    r30 = *(8 + r1); // lwz @ 0x805D06A8
}