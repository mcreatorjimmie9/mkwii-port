/* Function at 0x806EFB08, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_806EFB08(int r3, int r4, int r5)
{
    /* mulli r4, r4, 0x30 */ // 0x806EFB08
    /* slwi r0, r5, 2 */ // 0x806EFB0C
    r3 = r3 + r4; // 0x806EFB10
    r3 = r3 + r0; // 0x806EFB14
    r3 = *(0x24 + r3); // lwz @ 0x806EFB18
    return;
}