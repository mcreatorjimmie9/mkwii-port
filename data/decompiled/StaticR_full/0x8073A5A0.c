/* Function at 0x8073A5A0, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8073A5A0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073A5B0
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x8073A5B8
    if (!=) goto 0x0x8073a62c;
    /* lis r4, 0 */ // 0x8073A5C4
    r4 = *(0 + r4); // lwz @ 0x8073A5C8
    r0 = *(0x10 + r4); // lbz @ 0x8073A5CC
    if (!=) goto 0x0x8073a62c;
    r0 = *(4 + r3); // lbz @ 0x8073A5D8
    if (==) goto 0x0x8073a5e8;
    /* b 0x8073a62c */ // 0x8073A5E4
    r31 = *(0x23c + r3); // lwz @ 0x8073A5E8
    if (==) goto 0x0x8073a62c;
    r12 = *(0 + r31); // lwz @ 0x8073A5F4
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8073A5FC
    /* mtctr r12 */ // 0x8073A600
    /* bctrl  */ // 0x8073A604
    r0 = *(0xb0 + r30); // lbz @ 0x8073A608
    if (==) goto 0x0x8073a62c;
    r12 = *(0 + r31); // lwz @ 0x8073A614
    r3 = r31;
    r4 = r30 + 0x72c; // 0x8073A61C
    r12 = *(0x70 + r12); // lwz @ 0x8073A620
    /* mtctr r12 */ // 0x8073A624
    /* bctrl  */ // 0x8073A628
    r0 = *(0x14 + r1); // lwz @ 0x8073A62C
    r31 = *(0xc + r1); // lwz @ 0x8073A630
    r30 = *(8 + r1); // lwz @ 0x8073A634
    return;
}