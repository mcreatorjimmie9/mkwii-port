/* Function at 0x805A4968, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805A4968(int r3, int r4)
{
    r3 = *(0x18 + r3); // lwz @ 0x805A4968
    if (==) goto 0x0x805a497c;
    r0 = *(4 + r3); // lhz @ 0x805A4974
    /* b 0x805a4980 */ // 0x805A4978
    /* li r0, 0 */ // 0x805A497C
    if (>=) goto 0x0x805a49ac;
    r0 = *(4 + r3); // lhz @ 0x805A4988
    if (>=) goto 0x0x805a49a4;
    r3 = *(0 + r3); // lwz @ 0x805A4994
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A499C
    return;
    /* li r3, 0 */ // 0x805A49A4
    return;
    /* li r3, 0 */ // 0x805A49AC
    return;
}