/* Function at 0x805A3DC0, size=116 bytes */
/* Stack frame: 0 bytes */

void FUN_805A3DC0(int r3, int r4, int r5)
{
    r3 = *(0 + r3); // lwz @ 0x805A3DC0
    r0 = *(0x28 + r3); // lha @ 0x805A3DC4
    if (!=) goto 0x0x805a3dd8;
    /* li r3, 0 */ // 0x805A3DD0
    return;
    /* lis r3, 0 */ // 0x805A3DD8
    /* clrlwi r4, r0, 0x10 */ // 0x805A3DDC
    r5 = *(0 + r3); // lwz @ 0x805A3DE0
    r3 = *(0x24 + r5); // lwz @ 0x805A3DE4
    if (==) goto 0x0x805a3df8;
    r0 = *(4 + r3); // lhz @ 0x805A3DF0
    /* b 0x805a3dfc */ // 0x805A3DF4
    /* li r0, 0 */ // 0x805A3DF8
    if (>=) goto 0x0x805a3e2c;
    r3 = *(0x24 + r5); // lwz @ 0x805A3E04
    r0 = *(4 + r3); // lhz @ 0x805A3E08
    if (>=) goto 0x0x805a3e24;
    r3 = *(0 + r3); // lwz @ 0x805A3E14
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A3E1C
    return;
    /* li r3, 0 */ // 0x805A3E24
    return;
    /* li r3, 0 */ // 0x805A3E2C
    return;
}