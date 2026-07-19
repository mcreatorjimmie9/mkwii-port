/* Function at 0x8061EB90, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_8061EB90(int r3, int r4)
{
    r4 = *(0 + r3); // lwz @ 0x8061EB90
    /* li r3, 1 */ // 0x8061EB94
    r4 = *(4 + r4); // lwz @ 0x8061EB98
    r0 = *(8 + r4); // lwz @ 0x8061EB9C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8061EBA0
    /* bnelr  */ // 0x8061EBA4
    r4 = *(0xc + r4); // lwz @ 0x8061EBA8
    r0 = r4 rlwinm 0; // rlwinm
    /* rlwimi. r0, r4, 0, 0x11, 0x12 */ // 0x8061EBB0
    /* bnelr  */ // 0x8061EBB4
    /* li r3, 0 */ // 0x8061EBB8
    return;
}