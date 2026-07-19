/* Function at 0x8061DEE0, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DEE0(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061DEE0
    r3 = *(4 + r3); // lwz @ 0x8061DEE4
    r0 = *(0x14 + r3); // lwz @ 0x8061DEE8
    /* clrlwi r3, r0, 0x1f */ // 0x8061DEEC
    return;
}