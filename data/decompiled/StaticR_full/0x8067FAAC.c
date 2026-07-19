/* Function at 0x8067FAAC, size=56 bytes */
/* Stack frame: 0 bytes */

void FUN_8067FAAC(int r3, int r4)
{
    if (!=) goto 0x0x8067fabc;
    /* li r3, 0 */ // 0x8067FAB4
    return;
    if (!=) goto 0x0x8067facc;
    /* li r3, 0 */ // 0x8067FAC4
    return;
    r3 = r3 rlwinm 0; // rlwinm
    r0 = r4 rlwinm 0; // rlwinm
    /* subf r0, r3, r0 */ // 0x8067FAD4
    /* cntlzw r0, r0 */ // 0x8067FAD8
    /* srwi r3, r0, 5 */ // 0x8067FADC
    return;
}