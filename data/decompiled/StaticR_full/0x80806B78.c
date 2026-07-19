/* Function at 0x80806B78, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80806B78(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 1 */ // 0x80806B84
    *(0xc + r1) = r31; // stw @ 0x80806B88
    r31 = r3;
    *(0xe0 + r3) = r0; // stw @ 0x80806B90
    r12 = *(0 + r3); // lwz @ 0x80806B94
    r12 = *(0x90 + r12); // lwz @ 0x80806B98
    /* mtctr r12 */ // 0x80806B9C
    /* bctrl  */ // 0x80806BA0
    r3 = *(0xb0 + r31); // lwz @ 0x80806BA4
    r12 = *(0 + r3); // lwz @ 0x80806BA8
    r12 = *(0xf4 + r12); // lwz @ 0x80806BAC
    /* mtctr r12 */ // 0x80806BB0
    /* bctrl  */ // 0x80806BB4
    r3 = *(0x10 + r31); // lwz @ 0x80806BB8
    /* li r4, 0 */ // 0x80806BBC
    r12 = *(0 + r3); // lwz @ 0x80806BC0
    r12 = *(0xc + r12); // lwz @ 0x80806BC4
    /* mtctr r12 */ // 0x80806BC8
    /* bctrl  */ // 0x80806BCC
    /* li r0, 0 */ // 0x80806BD0
    *(0x130 + r31) = r0; // stw @ 0x80806BD4
    /* lis r3, 0 */ // 0x80806BD8
    /* lis r4, 0 */ // 0x80806BDC
    *(0x144 + r31) = r0; // stb @ 0x80806BE0
    r5 = *(0 + r3); // lwz @ 0x80806BE4
    r3 = *(0 + r4); // lwz @ 0x80806BE8
    r0 = *(0xb70 + r5); // lwz @ 0x80806BEC
    if (!=) goto 0x0x80806c34;
    r0 = *(0xb9e + r5); // lhz @ 0x80806BF8
    if (!=) goto 0x0x80806c34;
    r31 = *(0x10 + r3); // lwz @ 0x80806C04
    /* li r4, 0x1ab */ // 0x80806C08
    r12 = *(0 + r31); // lwz @ 0x80806C0C
    r3 = r31;
    r12 = *(0x38 + r12); // lwz @ 0x80806C14
    /* mtctr r12 */ // 0x80806C18
    /* bctrl  */ // 0x80806C1C
    if (==) goto 0x0x80806c34;
    r3 = *(8 + r31); // lwz @ 0x80806C28
    r0 = r3 + 1; // 0x80806C2C
    *(8 + r31) = r0; // stw @ 0x80806C30
    r0 = *(0x14 + r1); // lwz @ 0x80806C34
    r31 = *(0xc + r1); // lwz @ 0x80806C38
    return;
}