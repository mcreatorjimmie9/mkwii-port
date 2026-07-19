/* Function at 0x8077A00C, size=32 bytes */
/* Stack frame: 16 bytes */

void FUN_8077A00C(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x8077A010
    r3 = *(0xe8 + r3); // lwz @ 0x8077A014
    *(8 + r1) = r0; // stw @ 0x8077A018
    /* xoris r0, r3, 0x8000 */ // 0x8077A01C
    *(0xc + r1) = r0; // stw @ 0x8077A020
    return;
}