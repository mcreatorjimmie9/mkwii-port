/* Function at 0x806EFB20, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_806EFB20(int r3, int r4, int r5)
{
    /* mulli r4, r4, 0x30 */ // 0x806EFB20
    /* slwi r0, r5, 2 */ // 0x806EFB24
    r3 = r3 + r4; // 0x806EFB28
    r3 = r3 + r0; // 0x806EFB2C
    r3 = *(0x2c + r3); // lwz @ 0x806EFB30
    return;
}