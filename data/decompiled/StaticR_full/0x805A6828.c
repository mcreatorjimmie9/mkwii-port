/* Function at 0x805A6828, size=216 bytes */
/* Stack frame: 0 bytes */

void FUN_805A6828(int r3, int r4, int r5)
{
    r5 = *(0x2c + r3); // lwz @ 0x805A6828
    if (==) goto 0x0x805a683c;
    r0 = *(4 + r5); // lhz @ 0x805A6834
    /* b 0x805a6840 */ // 0x805A6838
    /* li r0, 0 */ // 0x805A683C
    if (>=) goto 0x0x805a68f8;
    if (==) goto 0x0x805a6858;
    r0 = *(4 + r5); // lhz @ 0x805A6850
    /* b 0x805a685c */ // 0x805A6854
    /* li r0, 0 */ // 0x805A6858
    if (>=) goto 0x0x805a6888;
    r0 = *(4 + r5); // lhz @ 0x805A6864
    if (>=) goto 0x0x805a6880;
    r5 = *(0 + r5); // lwz @ 0x805A6870
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r4, r5, r0 */ // 0x805A6878
    /* b 0x805a688c */ // 0x805A687C
    /* li r4, 0 */ // 0x805A6880
    /* b 0x805a688c */ // 0x805A6884
    /* li r4, 0 */ // 0x805A6888
    if (==) goto 0x0x805a68f8;
    r4 = *(4 + r4); // lwz @ 0x805A6894
    r0 = *(2 + r4); // lbz @ 0x805A6898
    /* extsb. r4, r0 */ // 0x805A689C
    if (<) goto 0x0x805a68f8;
    r5 = *(0x30 + r3); // lwz @ 0x805A68A4
    /* clrlwi r3, r4, 0x10 */ // 0x805A68A8
    if (==) goto 0x0x805a68bc;
    r0 = *(4 + r5); // lhz @ 0x805A68B4
    /* b 0x805a68c0 */ // 0x805A68B8
    /* li r0, 0 */ // 0x805A68BC
    if (>=) goto 0x0x805a68f0;
    r0 = *(4 + r5); // lhz @ 0x805A68C8
    /* clrlwi r3, r4, 0x10 */ // 0x805A68CC
    if (>=) goto 0x0x805a68e8;
    r3 = *(0 + r5); // lwz @ 0x805A68D8
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A68E0
    return;
    /* li r3, 0 */ // 0x805A68E8
    return;
    /* li r3, 0 */ // 0x805A68F0
    return;
    /* li r3, 0 */ // 0x805A68F8
    return;
}