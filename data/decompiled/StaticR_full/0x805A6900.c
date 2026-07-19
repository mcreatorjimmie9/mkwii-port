/* Function at 0x805A6900, size=120 bytes */
/* Stack frame: 0 bytes */

void FUN_805A6900(int r3, int r4, int r5, int r6)
{
    r3 = *(0 + r3); // lwz @ 0x805A6900
    r0 = *(1 + r3); // lbz @ 0x805A6904
    /* extsb. r5, r0 */ // 0x805A6908
    if (>=) goto 0x0x805a6918;
    /* li r3, 0 */ // 0x805A6910
    return;
    /* lis r3, 0 */ // 0x805A6918
    /* clrlwi r4, r5, 0x10 */ // 0x805A691C
    r6 = *(0 + r3); // lwz @ 0x805A6920
    r3 = *(0x30 + r6); // lwz @ 0x805A6924
    if (==) goto 0x0x805a6938;
    r0 = *(4 + r3); // lhz @ 0x805A6930
    /* b 0x805a693c */ // 0x805A6934
    /* li r0, 0 */ // 0x805A6938
    if (>=) goto 0x0x805a6970;
    r4 = *(0x30 + r6); // lwz @ 0x805A6944
    /* clrlwi r3, r5, 0x10 */ // 0x805A6948
    r0 = *(4 + r4); // lhz @ 0x805A694C
    if (>=) goto 0x0x805a6968;
    r3 = *(0 + r4); // lwz @ 0x805A6958
    r0 = r5 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A6960
    return;
    /* li r3, 0 */ // 0x805A6968
    return;
    /* li r3, 0 */ // 0x805A6970
    return;
}