/* Function at 0x805A7EF8, size=120 bytes */
/* Stack frame: 0 bytes */

int FUN_805A7EF8(int r3, int r4, int r5)
{
    r3 = *(0x18 + r3); // lwz @ 0x805A7EF8
    r4 = *(0 + r4); // lbz @ 0x805A7EFC
    if (==) goto 0x0x805a7f10;
    r0 = *(4 + r3); // lhz @ 0x805A7F08
    /* b 0x805a7f14 */ // 0x805A7F0C
    /* li r0, 0 */ // 0x805A7F10
    if (>=) goto 0x0x805a7f40;
    r0 = *(4 + r3); // lhz @ 0x805A7F1C
    if (>=) goto 0x0x805a7f38;
    r3 = *(0 + r3); // lwz @ 0x805A7F28
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r0, r3, r0 */ // 0x805A7F30
    /* b 0x805a7f44 */ // 0x805A7F34
    /* li r0, 0 */ // 0x805A7F38
    /* b 0x805a7f44 */ // 0x805A7F3C
    /* li r0, 0 */ // 0x805A7F40
    if (!=) goto 0x0x805a7f54;
    /* li r3, 0xff */ // 0x805A7F4C
    return;
    if (<) goto 0x0x805a7f64;
    /* li r3, 0xff */ // 0x805A7F5C
    return;
    r3 = r0 + r5; // 0x805A7F64
    r3 = *(4 + r3); // lbz @ 0x805A7F68
    return;
}