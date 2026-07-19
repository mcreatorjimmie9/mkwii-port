/* Function at 0x80620660, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80620660(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80620660
    /* slwi r0, r3, 2 */ // 0x80620664
    r3 = *(0 + r4); // lwz @ 0x80620668
    /* lfsx f1, r3, r0 */ // 0x8062066C
    return;
}