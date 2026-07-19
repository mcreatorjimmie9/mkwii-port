/* Function at 0x805B155C, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805B155C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x805B1570
    r29 = r3;
    r31 = *(4 + r3); // lwz @ 0x805B1578
    r30 = *(8 + r3); // lwz @ 0x805B157C
    r3 = r31;
    if (==) goto 0x0x805b1594;
    r4 = *(0x51 + r31); // lbz @ 0x805B158C
    /* b 0x805b1598 */ // 0x805B1590
    /* li r4, 0 */ // 0x805B1594
    r12 = *(0 + r3); // lwz @ 0x805B1598
    r12 = *(0x38 + r12); // lwz @ 0x805B159C
    /* mtctr r12 */ // 0x805B15A0
    /* bctrl  */ // 0x805B15A4
    if (==) goto 0x0x805b15b8;
    *(8 + r29) = r30; // stw @ 0x805B15B0
    /* b 0x805b15bc */ // 0x805B15B4
    *(8 + r29) = r31; // stw @ 0x805B15B8
    r0 = *(0x24 + r1); // lwz @ 0x805B15BC
    r31 = *(0x1c + r1); // lwz @ 0x805B15C0
    r30 = *(0x18 + r1); // lwz @ 0x805B15C4
    r29 = *(0x14 + r1); // lwz @ 0x805B15C8
    return;
}