/* Function at 0x8061DF58, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DF58(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061DF58
    /* slwi r0, r4, 2 */ // 0x8061DF5C
    r3 = *(0x10 + r3); // lwz @ 0x8061DF60
    /* lwzx r3, r3, r0 */ // 0x8061DF64
    return;
}