/* Function at 0x806C3670, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806C3670(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806C3678
    /* li r5, 0 */ // 0x806C367C
    *(0x14 + r1) = r0; // stw @ 0x806C3680
    *(0xc + r1) = r31; // stw @ 0x806C3684
    *(8 + r1) = r30; // stw @ 0x806C3688
    r30 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x806C3690
    r12 = *(0x10 + r12); // lwz @ 0x806C3694
    /* mtctr r12 */ // 0x806C3698
    r3 = r3 + 0x58; // 0x806C369C
    /* bctrl  */ // 0x806C36A0
    r3 = r30;
    r4 = r30 + 0x58; // 0x806C36A8
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30;
    /* li r4, 0 */ // 0x806C36B4
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    /* lis r31, 0 */ // 0x806C36BC
    /* li r4, 4 */ // 0x806C36C0
    r3 = *(0 + r31); // lwz @ 0x806C36C4
    /* li r5, 0 */ // 0x806C36C8
    /* li r6, -1 */ // 0x806C36CC
    /* li r7, 0 */ // 0x806C36D0
    r3 = *(0x90 + r3); // lwz @ 0x806C36D4
    FUN_80684E28(r5, r6, r7); // bl 0x80684E28
    r3 = *(0 + r31); // lwz @ 0x806C36DC
    r3 = *(0x90 + r3); // lwz @ 0x806C36E0
    FUN_806843C8(r7); // bl 0x806843C8
    /* lis r31, 0 */ // 0x806C36E8
    r3 = *(0 + r31); // lwz @ 0x806C36EC
    r3 = *(0x18 + r3); // lwz @ 0x806C36F0
    FUN_805ABD4C(); // bl 0x805ABD4C
    if (==) goto 0x0x806c3750;
    r31 = *(0 + r31); // lwz @ 0x806C3700
    r3 = *(0x18 + r31); // lwz @ 0x806C3704
    FUN_805ABD4C(); // bl 0x805ABD4C
    if (==) goto 0x0x806c371c;
    r3 = *(0x18 + r31); // lwz @ 0x806C3714
    /* b 0x806c3720 */ // 0x806C3718
    /* li r3, 0 */ // 0x806C371C
    /* li r0, 0x500 */ // 0x806C3720
    r5 = r30 + 0x6c; // 0x806C3724
    r4 = r3 + -4; // 0x806C3728
    /* mtctr r0 */ // 0x806C372C
    r3 = *(4 + r4); // lwz @ 0x806C3730
    r0 = *(8 + r4); // lwzu @ 0x806C3734
    *(4 + r5) = r3; // stw @ 0x806C3738
    *(8 + r5) = r0; // stwu @ 0x806C373C
    if (counter-- != 0) goto 0x0x806c3730;
    /* li r0, 1 */ // 0x806C3744
    *(0x6c + r30) = r0; // stb @ 0x806C3748
    /* b 0x806c3758 */ // 0x806C374C
    /* li r0, 0 */ // 0x806C3750
    *(0x6c + r30) = r0; // stb @ 0x806C3754
    r3 = r30;
    /* li r4, 0 */ // 0x806C375C
    /* li r5, 0 */ // 0x806C3760
    FUN_806724E0(r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x806C3768
    r31 = *(0xc + r1); // lwz @ 0x806C376C
    r30 = *(8 + r1); // lwz @ 0x806C3770
    return;
}