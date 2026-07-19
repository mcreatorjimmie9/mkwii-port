/* Function at 0x8061EBF4, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_8061EBF4(int r3, int r4)
{
    r4 = *(0 + r3); // lwz @ 0x8061EBF4
    /* li r3, 1 */ // 0x8061EBF8
    r4 = *(4 + r4); // lwz @ 0x8061EBFC
    r0 = *(8 + r4); // lwz @ 0x8061EC00
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8061EC04
    /* bnelr  */ // 0x8061EC08
    r4 = *(0xc + r4); // lwz @ 0x8061EC0C
    r0 = r4 rlwinm 0; // rlwinm
    /* rlwimi. r0, r4, 0, 0x11, 0x12 */ // 0x8061EC14
    /* bnelr  */ // 0x8061EC18
    /* li r3, 0 */ // 0x8061EC1C
    return;
}