/* Function at 0x808EB974, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808EB974(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808EB97C
    /* slwi r0, r3, 2 */ // 0x808EB984
    *(0xc + r1) = r31; // stw @ 0x808EB988
    *(8 + r1) = r30; // stw @ 0x808EB98C
    r3 = *(0 + r4); // lwz @ 0x808EB990
    r3 = *(0 + r3); // lwz @ 0x808EB994
    r3 = r3 + r0; // 0x808EB998
    r30 = *(8 + r3); // lwz @ 0x808EB99C
    if (!=) goto 0x0x808eb9b0;
    /* li r30, 0 */ // 0x808EB9A8
    /* b 0x808eba04 */ // 0x808EB9AC
    /* lis r31, 0 */ // 0x808EB9B0
    r31 = r31 + 0; // 0x808EB9B4
    if (==) goto 0x0x808eba00;
    r12 = *(0 + r30); // lwz @ 0x808EB9BC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808EB9C4
    /* mtctr r12 */ // 0x808EB9C8
    /* bctrl  */ // 0x808EB9CC
    /* b 0x808eb9e8 */ // 0x808EB9D0
    if (!=) goto 0x0x808eb9e4;
    /* li r0, 1 */ // 0x808EB9DC
    /* b 0x808eb9f4 */ // 0x808EB9E0
    r3 = *(0 + r3); // lwz @ 0x808EB9E4
    if (!=) goto 0x0x808eb9d4;
    /* li r0, 0 */ // 0x808EB9F0
    if (==) goto 0x0x808eba00;
    /* b 0x808eba04 */ // 0x808EB9FC
    /* li r30, 0 */ // 0x808EBA00
    if (!=) goto 0x0x808eba14;
    /* li r30, 0 */ // 0x808EBA0C
    /* b 0x808eba68 */ // 0x808EBA10
    /* lis r31, 0 */ // 0x808EBA14
    r31 = r31 + 0; // 0x808EBA18
    if (==) goto 0x0x808eba64;
    r12 = *(0 + r30); // lwz @ 0x808EBA20
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808EBA28
    /* mtctr r12 */ // 0x808EBA2C
    /* bctrl  */ // 0x808EBA30
    /* b 0x808eba4c */ // 0x808EBA34
    if (!=) goto 0x0x808eba48;
    /* li r0, 1 */ // 0x808EBA40
    /* b 0x808eba58 */ // 0x808EBA44
    r3 = *(0 + r3); // lwz @ 0x808EBA48
    if (!=) goto 0x0x808eba38;
    /* li r0, 0 */ // 0x808EBA54
    if (==) goto 0x0x808eba64;
    /* b 0x808eba68 */ // 0x808EBA60
    /* li r30, 0 */ // 0x808EBA64
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EBA6C
    r30 = *(8 + r1); // lwz @ 0x808EBA70
    r0 = *(0x14 + r1); // lwz @ 0x808EBA74
    return;
}