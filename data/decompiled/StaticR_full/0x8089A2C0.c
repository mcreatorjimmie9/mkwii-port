/* Function at 0x8089A2C0, size=92 bytes */
/* Stack frame: 0 bytes */

void FUN_8089A2C0(int r3, int r4, int r5, int r6)
{
    r0 = *(0x130 + r3); // lwz @ 0x8089A2C0
    if (>=) goto 0x0x8089a2d4;
    /* li r3, 0 */ // 0x8089A2CC
    return;
    r0 = *(0x134 + r3); // lwz @ 0x8089A2D4
    if (>=) goto 0x0x8089a2e8;
    /* li r3, 1 */ // 0x8089A2E0
    return;
    r6 = *(0x138 + r3); // lwz @ 0x8089A2E8
    if (>=) goto 0x0x8089a2fc;
    /* li r3, 2 */ // 0x8089A2F4
    return;
    /* lis r5, 0 */ // 0x8089A2FC
    /* li r3, 4 */ // 0x8089A300
    r0 = *(0 + r5); // lwz @ 0x8089A304
    r0 = r6 + r0; // 0x8089A308
    /* bgelr  */ // 0x8089A310
    /* li r3, 3 */ // 0x8089A314
    return;
}