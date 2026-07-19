/* Function at 0x8068608C, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_8068608C(int r3, int r4)
{
    r4 = *(0x37c + r3); // lwz @ 0x8068608C
    if (>=) goto 0x0x806860a0;
    /* li r3, 0 */ // 0x80686098
    return;
    r0 = r4 + -1; // 0x806860A0
    /* slwi r0, r0, 2 */ // 0x806860A4
    r3 = r3 + r0; // 0x806860A8
    r3 = *(0x354 + r3); // lwz @ 0x806860AC
    return;
}