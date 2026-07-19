/* Function at 0x8061D97C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_8061D97C(int r3, int r4)
{
    r3 = *(0x20 + r3); // lwz @ 0x8061D97C
    /* slwi r0, r4, 2 */ // 0x8061D980
    /* lwzx r3, r3, r0 */ // 0x8061D984
    return;
}