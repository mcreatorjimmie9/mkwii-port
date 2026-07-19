/* Function at 0x807EE5B0, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807EE5B0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x807EE5B8
    *(0x18 + r1) = r30; // stw @ 0x807EE5C4
    *(0x14 + r1) = r29; // stw @ 0x807EE5C8
    r29 = r3;
    r30 = *(0xc4 + r3); // lwz @ 0x807EE5D0
    if (<) goto 0x0x807ee5ec;
    r0 = *(0xb4 + r3); // lwz @ 0x807EE5DC
    if (>=) goto 0x0x807ee5ec;
    /* li r4, 1 */ // 0x807EE5E8
    if (!=) goto 0x0x807ee604;
    r12 = *(0xb0 + r3); // lwzu @ 0x807EE5F4
    r12 = *(0x18 + r12); // lwz @ 0x807EE5F8
    /* mtctr r12 */ // 0x807EE5FC
    /* bctrl  */ // 0x807EE600
    r4 = *(0xb8 + r29); // lwz @ 0x807EE604
    /* slwi r0, r30, 2 */ // 0x807EE608
    /* lis r3, 0 */ // 0x807EE60C
    /* li r31, 1 */ // 0x807EE610
    /* lwzx r30, r4, r0 */ // 0x807EE614
    /* li r4, 0 */ // 0x807EE618
    /* lfs f1, 0(r3) */ // 0x807EE61C
    *(0xc8 + r30) = r31; // stw @ 0x807EE620
    *(0xb0 + r30) = r31; // stw @ 0x807EE624
    r3 = *(0x20 + r30); // lwz @ 0x807EE628
    r12 = *(0 + r3); // lwz @ 0x807EE62C
    r12 = *(0x10 + r12); // lwz @ 0x807EE630
    /* mtctr r12 */ // 0x807EE634
    /* bctrl  */ // 0x807EE638
    r3 = *(0x20 + r30); // lwz @ 0x807EE63C
    *(0x17 + r3) = r31; // stb @ 0x807EE640
    r3 = *(0xc4 + r29); // lwz @ 0x807EE644
    r0 = *(0xbc + r29); // lwz @ 0x807EE648
    r3 = r3 + 1; // 0x807EE64C
    *(0xc4 + r29) = r3; // stw @ 0x807EE650
    if (!=) goto 0x0x807ee664;
    /* li r0, 0 */ // 0x807EE65C
    *(0xc4 + r29) = r0; // stw @ 0x807EE660
    r0 = *(0x24 + r1); // lwz @ 0x807EE664
    r31 = *(0x1c + r1); // lwz @ 0x807EE668
    r30 = *(0x18 + r1); // lwz @ 0x807EE66C
    r29 = *(0x14 + r1); // lwz @ 0x807EE670
    return;
}