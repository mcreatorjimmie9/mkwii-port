/* Function at 0x8061ACF8, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_8061ACF8(int r3, int r4, int r5, int r6)
{
    r0 = r4 rlwinm 1; // rlwinm
    r6 = *(0x18 + r3); // lwz @ 0x8061ACFC
    r0 = r5 + r0; // 0x8061AD00
    /* li r4, 1 */ // 0x8061AD04
    /* clrlwi r0, r0, 0x18 */ // 0x8061AD08
    r0 = r4 << r0; // slw
    r0 = r6 ^ r0; // 0x8061AD10
    *(0x18 + r3) = r0; // stw @ 0x8061AD14
    return;
}