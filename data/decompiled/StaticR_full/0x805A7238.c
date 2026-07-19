/* Function at 0x805A7238, size=100 bytes */
/* Stack frame: 0 bytes */

void FUN_805A7238(int r3, int r4)
{
    r3 = *(0x10 + r3); // lwz @ 0x805A7238
    r4 = *(0 + r4); // lbz @ 0x805A723C
    if (==) goto 0x0x805a7250;
    r0 = *(4 + r3); // lhz @ 0x805A7248
    /* b 0x805a7254 */ // 0x805A724C
    /* li r0, 0 */ // 0x805A7250
    if (>=) goto 0x0x805a7280;
    r0 = *(4 + r3); // lhz @ 0x805A725C
    if (>=) goto 0x0x805a7278;
    r3 = *(0 + r3); // lwz @ 0x805A7268
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A7270
    /* b 0x805a7284 */ // 0x805A7274
    /* li r3, 0 */ // 0x805A7278
    /* b 0x805a7284 */ // 0x805A727C
    /* li r3, 0 */ // 0x805A7280
    if (!=) goto 0x0x805a7294;
    /* li r3, 0 */ // 0x805A728C
    return;
    r3 = *(0x11 + r3); // lbz @ 0x805A7294
    return;
}