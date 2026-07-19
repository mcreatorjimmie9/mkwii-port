/* Function at 0x808CF914, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_808CF914(int r3, int r4)
{
    r4 = r3 + -0x7f; // 0x808CF914
    /* li r3, 2 */ // 0x808CF918
    /* subfic r0, r4, 2 */ // 0x808CF91C
    /* orc r3, r3, r4 */ // 0x808CF920
    /* srwi r0, r0, 1 */ // 0x808CF924
    /* subf r0, r0, r3 */ // 0x808CF928
    /* srwi r3, r0, 0x1f */ // 0x808CF92C
    return;
}