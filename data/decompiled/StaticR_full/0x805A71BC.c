/* Function at 0x805A71BC, size=124 bytes */
/* Stack frame: 0 bytes */

void FUN_805A71BC(int r3, int r4, int r5)
{
    r3 = *(0x10 + r3); // lwz @ 0x805A71BC
    r4 = *(0 + r4); // lbz @ 0x805A71C0
    if (==) goto 0x0x805a71d4;
    r0 = *(4 + r3); // lhz @ 0x805A71CC
    /* b 0x805a71d8 */ // 0x805A71D0
    /* li r0, 0 */ // 0x805A71D4
    if (>=) goto 0x0x805a7204;
    r0 = *(4 + r3); // lhz @ 0x805A71E0
    if (>=) goto 0x0x805a71fc;
    r3 = *(0 + r3); // lwz @ 0x805A71EC
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A71F4
    /* b 0x805a7208 */ // 0x805A71F8
    /* li r3, 0 */ // 0x805A71FC
    /* b 0x805a7208 */ // 0x805A7200
    /* li r3, 0 */ // 0x805A7204
    if (!=) goto 0x0x805a7218;
    /* li r3, 0xff */ // 0x805A7210
    return;
    r0 = *(0x11 + r3); // lbz @ 0x805A7218
    if (<) goto 0x0x805a722c;
    /* li r3, 0xff */ // 0x805A7224
    return;
    r3 = *(0xc + r3); // lwz @ 0x805A722C
    /* lbzx r3, r3, r5 */ // 0x805A7230
    return;
}