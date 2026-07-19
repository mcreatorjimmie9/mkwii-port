/* Function at 0x805EEFD4, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_805EEFD4(int r4)
{
    *(0x40 + r3) = r4; // stw @ 0x805EEFD4
    r4 = *(0x10 + r4); // lbz @ 0x805EEFD8
    /* extsb r4, r4 */ // 0x805EEFDC
    /* b 0x805ed640 */ // 0x805EEFE0
}