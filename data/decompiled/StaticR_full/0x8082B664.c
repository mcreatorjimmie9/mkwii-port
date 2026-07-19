/* Function at 0x8082B664, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_8082B664(int r3, int r4, int r5)
{
    r0 = *(0x78 + r3); // lwz @ 0x8082B664
    /* rlwinm. r0, r0, 0, 7, 7 */ // 0x8082B668
    if (==) goto 0x0x8082b678;
    /* li r4, 0 */ // 0x8082B670
    /* b 0x8082bd68 */ // 0x8082B674
    /* lis r5, 0 */ // 0x8082B678
    /* li r4, 0 */ // 0x8082B67C
    /* lfs f1, 0(r5) */ // 0x8082B680
    /* b 0x8082b84c */ // 0x8082B684
}