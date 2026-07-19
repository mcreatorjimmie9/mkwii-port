/* Function at 0x80786804, size=124 bytes */
/* Stack frame: 0 bytes */

void FUN_80786804(int r3, int r4, int r5, int r6)
{
    /* lis r6, 0 */ // 0x80786808
    r6 = r6 + 0; // 0x8078680C
    if (!=) goto 0x0x80786820;
    /* lis r3, 0 */ // 0x80786814
    r3 = *(0 + r3); // lwz @ 0x80786818
    r5 = *(0x4c + r3); // lbz @ 0x8078681C
    r0 = r5 + -2; // 0x80786820
    if (<=) goto 0x0x80786844;
    if (>) goto 0x0x8078683c;
    /* lfs f1, 0(r6) */ // 0x80786834
    return;
    /* lfs f1, 0(r6) */ // 0x8078683C
    return;
    /* extsb. r0, r4 */ // 0x80786844
    if (==) goto 0x0x80786868;
    if (==) goto 0x0x80786868;
    if (==) goto 0x0x80786870;
    if (==) goto 0x0x80786870;
    /* b 0x80786878 */ // 0x80786864
    /* lfs f1, 0x24(r6) */ // 0x80786868
    return;
    /* lfs f1, 4(r6) */ // 0x80786870
    return;
    /* lfs f1, 0(r6) */ // 0x80786878
    return;
}