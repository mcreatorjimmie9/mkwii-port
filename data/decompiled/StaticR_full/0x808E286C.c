/* Function at 0x808E286C, size=160 bytes */
/* Stack frame: 0 bytes */

void FUN_808E286C(int r3)
{
    r0 = *(0xa8 + r3); // lwz @ 0x808E286C
    if (==) goto 0x0x808e288c;
    if (==) goto 0x0x808e28b4;
    if (==) goto 0x0x808e28dc;
    /* b 0x808e2904 */ // 0x808E2888
    r0 = *(0x9c + r3); // lwz @ 0x808E288C
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x808E2890
    if (==) goto 0x0x808e28a4;
    if (==) goto 0x0x808e28ac;
    /* b 0x808e2904 */ // 0x808E28A0
    /* li r3, 0x18 */ // 0x808E28A4
    return;
    /* li r3, 0x19 */ // 0x808E28AC
    return;
    r0 = *(0x9c + r3); // lwz @ 0x808E28B4
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x808E28B8
    if (==) goto 0x0x808e28cc;
    if (==) goto 0x0x808e28d4;
    /* b 0x808e2904 */ // 0x808E28C8
    /* li r3, 0x1e */ // 0x808E28CC
    return;
    /* li r3, 0x1f */ // 0x808E28D4
    return;
    r0 = *(0x9c + r3); // lwz @ 0x808E28DC
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x808E28E0
    if (==) goto 0x0x808e28f4;
    if (==) goto 0x0x808e28fc;
    /* b 0x808e2904 */ // 0x808E28F0
    /* li r3, 0x24 */ // 0x808E28F4
    return;
    /* li r3, 0x25 */ // 0x808E28FC
    return;
    /* li r3, -1 */ // 0x808E2904
    return;
}