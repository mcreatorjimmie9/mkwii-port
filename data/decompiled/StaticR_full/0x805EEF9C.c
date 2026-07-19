/* Function at 0x805EEF9C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_805EEF9C(int r3)
{
    r3 = *(0x28 + r3); // lwz @ 0x805EEF9C
    r0 = *(0x38 + r3); // lhz @ 0x805EEFA0
    /* clrlwi r3, r0, 0x1f */ // 0x805EEFA4
    return;
}