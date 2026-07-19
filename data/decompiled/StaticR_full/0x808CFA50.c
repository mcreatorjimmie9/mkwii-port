/* Function at 0x808CFA50, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_808CFA50(int r3)
{
    /* lis r3, 0 */ // 0x808CFA50
    r3 = *(0 + r3); // lwz @ 0x808CFA54
    r3 = *(0x98 + r3); // lwz @ 0x808CFA58
    r0 = *(0x124 + r3); // lwz @ 0x808CFA5C
    /* clrlwi r3, r0, 0x18 */ // 0x808CFA60
    return;
}