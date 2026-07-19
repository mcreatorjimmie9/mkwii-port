/* Function at 0x80781604, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80781604(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80781614
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078161C
    r30 = r3;
    if (==) goto 0x0x80781668;
    r0 = *(0xb0 + r3); // lwz @ 0x80781628
    /* lis r4, 0 */ // 0x8078162C
    r4 = r4 + 0; // 0x80781630
    *(0 + r3) = r4; // stw @ 0x80781634
    if (==) goto 0x0x80781658;
    r3 = r0;
    /* li r4, 1 */ // 0x80781644
    r12 = *(0 + r3); // lwz @ 0x80781648
    r12 = *(8 + r12); // lwz @ 0x8078164C
    /* mtctr r12 */ // 0x80781650
    /* bctrl  */ // 0x80781654
    if (<=) goto 0x0x80781668;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8078166C
    r30 = *(8 + r1); // lwz @ 0x80781670
    r0 = *(0x14 + r1); // lwz @ 0x80781674
    return;
}