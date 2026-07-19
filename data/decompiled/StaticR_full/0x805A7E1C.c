/* Function at 0x805A7E1C, size=120 bytes */
/* Stack frame: 0 bytes */

int FUN_805A7E1C(int r3, int r4, int r5)
{
    r3 = *(0x18 + r3); // lwz @ 0x805A7E1C
    r4 = *(0 + r4); // lbz @ 0x805A7E20
    if (==) goto 0x0x805a7e34;
    r0 = *(4 + r3); // lhz @ 0x805A7E2C
    /* b 0x805a7e38 */ // 0x805A7E30
    /* li r0, 0 */ // 0x805A7E34
    if (>=) goto 0x0x805a7e64;
    r0 = *(4 + r3); // lhz @ 0x805A7E40
    if (>=) goto 0x0x805a7e5c;
    r3 = *(0 + r3); // lwz @ 0x805A7E4C
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r0, r3, r0 */ // 0x805A7E54
    /* b 0x805a7e68 */ // 0x805A7E58
    /* li r0, 0 */ // 0x805A7E5C
    /* b 0x805a7e68 */ // 0x805A7E60
    /* li r0, 0 */ // 0x805A7E64
    if (!=) goto 0x0x805a7e78;
    /* li r3, 0xff */ // 0x805A7E70
    return;
    if (<) goto 0x0x805a7e88;
    /* li r3, 0xff */ // 0x805A7E80
    return;
    r3 = r0 + r5; // 0x805A7E88
    r3 = *(0xa + r3); // lbz @ 0x805A7E8C
    return;
}