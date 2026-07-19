/* Function at 0x806EFC94, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_806EFC94(int r3, int r4, int r5)
{
    /* mulli r0, r4, 0x30 */ // 0x806EFC94
    r0 = r3 + r0; // 0x806EFC98
    r3 = r0 + r5; // 0x806EFC9C
    r3 = *(0x4d + r3); // lbz @ 0x806EFCA0
    return;
}