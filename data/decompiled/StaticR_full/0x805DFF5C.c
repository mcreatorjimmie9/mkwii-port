/* Function at 0x805DFF5C, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_805DFF5C(int r3)
{
    /* lis r3, 0 */ // 0x805DFF5C
    r3 = r3 + 0; // 0x805DFF60
    r3 = *(0xa4 + r3); // lbz @ 0x805DFF64
    return;
}