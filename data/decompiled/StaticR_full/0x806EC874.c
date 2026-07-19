/* Function at 0x806EC874, size=64 bytes */
/* Stack frame: 0 bytes */

int FUN_806EC874(int r3, int r4)
{
    r0 = *(0x3d + r3); // lbz @ 0x806EC874
    if (==) goto 0x0x806ec89c;
    r0 = *(0x2c + r3); // lwz @ 0x806EC880
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x806EC884
    if (==) goto 0x0x806ec894;
    /* li r4, 0 */ // 0x806EC88C
    /* b 0x806ec8a0 */ // 0x806EC890
    /* li r4, 1 */ // 0x806EC894
    /* b 0x806ec8a0 */ // 0x806EC898
    /* li r4, 2 */ // 0x806EC89C
    /* subfic r3, r4, 2 */ // 0x806EC8A0
    r0 = r4 + -2; // 0x806EC8A4
    r0 = r3 | r0; // 0x806EC8A8
    /* srwi r3, r0, 0x1f */ // 0x806EC8AC
    return;
}