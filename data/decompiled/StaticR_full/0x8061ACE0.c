/* Function at 0x8061ACE0, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8061ACE0(int r3, int r4, int r5)
{
    /* li r0, 1 */ // 0x8061ACE0
    r5 = *(0x10 + r3); // lwz @ 0x8061ACE4
    r0 = r0 << r4; // slw
    r0 = r5 ^ r0; // 0x8061ACEC
    *(0x10 + r3) = r0; // stw @ 0x8061ACF0
    return;
}