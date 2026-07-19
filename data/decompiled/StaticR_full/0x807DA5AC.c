/* Function at 0x807DA5AC, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_807DA5AC(int r3)
{
    /* lis r3, 0 */ // 0x807DA5AC
    /* fabs f1, f1 */ // 0x807DA5B0
    /* lfs f0, 0(r3) */ // 0x807DA5B4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DA5B8
    /* cror cr0eq, cr0gt, cr0eq */ // 0x807DA5BC
    /* mfcr r3 */ // 0x807DA5C0
    r3 = r3 rlwinm 3; // rlwinm
    return;
}