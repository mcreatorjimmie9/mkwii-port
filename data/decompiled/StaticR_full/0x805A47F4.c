/* Function at 0x805A47F4, size=104 bytes */
/* Stack frame: 0 bytes */

void FUN_805A47F4(int r3, int r4, int r5)
{
    r5 = *(0xc + r3); // lwz @ 0x805A47F4
    /* li r3, 0 */ // 0x805A47F8
    if (==) goto 0x0x805a4814;
    r0 = *(4 + r5); // lhz @ 0x805A4804
    if (==) goto 0x0x805a4814;
    /* li r3, 1 */ // 0x805A4810
    if (==) goto 0x0x805a4824;
    r0 = *(4 + r5); // lhz @ 0x805A481C
    /* b 0x805a4828 */ // 0x805A4820
    /* li r0, 0 */ // 0x805A4824
    if (>=) goto 0x0x805a4854;
    r0 = *(4 + r5); // lhz @ 0x805A4830
    if (>=) goto 0x0x805a484c;
    r3 = *(0 + r5); // lwz @ 0x805A483C
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A4844
    return;
    /* li r3, 0 */ // 0x805A484C
    return;
    /* li r3, 0 */ // 0x805A4854
    return;
}