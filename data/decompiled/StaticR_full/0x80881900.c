/* Function at 0x80881900, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_80881900(int r3, int r4)
{
    r4 = *(4 + r3); // lhz @ 0x80881900
    /* li r3, 0x3e7 */ // 0x80881904
    r0 = r4 + -0x3e7; // 0x80881908
    /* orc r3, r4, r3 */ // 0x8088190C
    /* srwi r0, r0, 1 */ // 0x80881910
    /* subf r0, r0, r3 */ // 0x80881914
    /* srwi r3, r0, 0x1f */ // 0x80881918
    return;
}