/* Function at 0x808CF934, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_808CF934(int r3, int r4)
{
    r4 = r3 + -0x85; // 0x808CF934
    /* li r3, 1 */ // 0x808CF938
    /* subfic r0, r4, 1 */ // 0x808CF93C
    /* orc r3, r3, r4 */ // 0x808CF940
    /* srwi r0, r0, 1 */ // 0x808CF944
    /* subf r0, r0, r3 */ // 0x808CF948
    /* srwi r3, r0, 0x1f */ // 0x808CF94C
    return;
}