/* Function at 0x8082E20C, size=72 bytes */
/* Stack frame: 0 bytes */

int FUN_8082E20C(int r3, int r4, int r5, int r6)
{
    r4 = *(0x78 + r3); // lwz @ 0x8082E20C
    /* li r5, 0 */ // 0x8082E210
    /* rlwinm. r0, r4, 0, 3, 3 */ // 0x8082E214
    if (==) goto 0x0x8082e224;
    /* li r5, 1 */ // 0x8082E21C
    /* b 0x8082e230 */ // 0x8082E220
    /* rlwinm. r0, r4, 0, 2, 2 */ // 0x8082E224
    if (==) goto 0x0x8082e230;
    /* li r5, 2 */ // 0x8082E22C
    r0 = *(0x6c + r3); // lbz @ 0x8082E230
    /* lis r4, 0 */ // 0x8082E234
    r6 = *(0 + r4); // lwz @ 0x8082E238
    r4 = r3;
    /* mulli r0, r0, 0x248 */ // 0x8082E240
    r3 = *(0x14 + r6); // lwz @ 0x8082E244
    r3 = r3 + r0; // 0x8082E248
    r3 = r3 + 0xb4; // 0x8082E24C
    /* b 0x808208dc */ // 0x8082E250
}