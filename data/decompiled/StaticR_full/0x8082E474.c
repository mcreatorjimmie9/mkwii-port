/* Function at 0x8082E474, size=148 bytes */
/* Stack frame: 0 bytes */

int FUN_8082E474(int r3, int r4, int r5, int r6)
{
    /* lis r5, 0 */ // 0x8082E474
    r0 = *(0 + r5); // lbz @ 0x8082E478
    if (==) goto 0x0x8082e494;
    r0 = *(0x78 + r3); // lwz @ 0x8082E484
    r0 = r0 rlwinm 0; // rlwinm
    /* cntlzw r0, r0 */ // 0x8082E48C
    /* srwi r0, r0, 5 */ // 0x8082E490
    if (==) goto 0x0x8082e500;
    r0 = *(0x78 + r3); // lwz @ 0x8082E49C
    /* lis r5, 0 */ // 0x8082E4A0
    r5 = *(0 + r5); // lwz @ 0x8082E4A4
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x8082E4A8
    if (!=) goto 0x0x8082e4b8;
    r0 = *(0x6c + r3); // lbz @ 0x8082E4B0
    /* b 0x8082e4bc */ // 0x8082E4B4
    /* li r0, 0xc */ // 0x8082E4B8
    /* mulli r0, r0, 0xf0 */ // 0x8082E4BC
    r3 = r5 + r0; // 0x8082E4C0
    r6 = *(0xf4 + r3); // lwz @ 0x8082E4C4
    if (!=) goto 0x0x8082e4d8;
    /* li r0, 0 */ // 0x8082E4D0
    /* b 0x8082e500 */ // 0x8082E4D4
    /* mulli r0, r4, 0xf0 */ // 0x8082E4D8
    r3 = r5 + r0; // 0x8082E4DC
    r0 = *(0xf4 + r3); // lwz @ 0x8082E4E0
    if (!=) goto 0x0x8082e4f4;
    /* li r0, 0 */ // 0x8082E4EC
    /* b 0x8082e500 */ // 0x8082E4F0
    /* subf r0, r6, r0 */ // 0x8082E4F4
    /* cntlzw r0, r0 */ // 0x8082E4F8
    /* srwi r0, r0, 5 */ // 0x8082E4FC
    r3 = r0;
    return;
}