/* Function at 0x808B9824, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808B9824(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808B982C
    /* slwi r0, r3, 2 */ // 0x808B9834
    *(0xc + r1) = r31; // stw @ 0x808B9838
    *(8 + r1) = r30; // stw @ 0x808B983C
    r3 = *(0 + r4); // lwz @ 0x808B9840
    r3 = *(0 + r3); // lwz @ 0x808B9844
    r3 = r3 + r0; // 0x808B9848
    r30 = *(8 + r3); // lwz @ 0x808B984C
    if (!=) goto 0x0x808b9860;
    /* li r30, 0 */ // 0x808B9858
    /* b 0x808b98b4 */ // 0x808B985C
    /* lis r31, 0 */ // 0x808B9860
    r31 = r31 + 0; // 0x808B9864
    if (==) goto 0x0x808b98b0;
    r12 = *(0 + r30); // lwz @ 0x808B986C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B9874
    /* mtctr r12 */ // 0x808B9878
    /* bctrl  */ // 0x808B987C
    /* b 0x808b9898 */ // 0x808B9880
    if (!=) goto 0x0x808b9894;
    /* li r0, 1 */ // 0x808B988C
    /* b 0x808b98a4 */ // 0x808B9890
    r3 = *(0 + r3); // lwz @ 0x808B9894
    if (!=) goto 0x0x808b9884;
    /* li r0, 0 */ // 0x808B98A0
    if (==) goto 0x0x808b98b0;
    /* b 0x808b98b4 */ // 0x808B98AC
    /* li r30, 0 */ // 0x808B98B0
    if (!=) goto 0x0x808b98c4;
    /* li r30, 0 */ // 0x808B98BC
    /* b 0x808b9918 */ // 0x808B98C0
    /* lis r31, 0 */ // 0x808B98C4
    r31 = r31 + 0; // 0x808B98C8
    if (==) goto 0x0x808b9914;
    r12 = *(0 + r30); // lwz @ 0x808B98D0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B98D8
    /* mtctr r12 */ // 0x808B98DC
    /* bctrl  */ // 0x808B98E0
    /* b 0x808b98fc */ // 0x808B98E4
    if (!=) goto 0x0x808b98f8;
    /* li r0, 1 */ // 0x808B98F0
    /* b 0x808b9908 */ // 0x808B98F4
    r3 = *(0 + r3); // lwz @ 0x808B98F8
    if (!=) goto 0x0x808b98e8;
    /* li r0, 0 */ // 0x808B9904
    if (==) goto 0x0x808b9914;
    /* b 0x808b9918 */ // 0x808B9910
    /* li r30, 0 */ // 0x808B9914
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B991C
    r30 = *(8 + r1); // lwz @ 0x808B9920
    r0 = *(0x14 + r1); // lwz @ 0x808B9924
    return;
}