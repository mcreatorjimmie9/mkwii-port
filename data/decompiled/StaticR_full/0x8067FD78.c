/* Function at 0x8067FD78, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_8067FD78(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8067FD84
    r27 = r4;
    /* li r30, 0 */ // 0x8067FD8C
    /* lis r31, 0 */ // 0x8067FD90
    /* clrlwi r0, r30, 0x18 */ // 0x8067FD94
    r3 = *(0 + r31); // lwz @ 0x8067FD98
    /* mulli r0, r0, 0x920 */ // 0x8067FD9C
    r28 = r27;
    r3 = r3 + r0; // 0x8067FDA4
    r29 = r3 + 0x1720; // 0x8067FDA8
    r12 = *(0 + r29); // lwz @ 0x8067FDAC
    r3 = r29;
    r12 = *(0x10 + r12); // lwz @ 0x8067FDB4
    /* mtctr r12 */ // 0x8067FDB8
    /* bctrl  */ // 0x8067FDBC
    if (<=) goto 0x0x8067fdcc;
    /* li r28, 0 */ // 0x8067FDC8
    r12 = *(0 + r29); // lwz @ 0x8067FDCC
    r3 = r29;
    r12 = *(0x2c + r12); // lwz @ 0x8067FDD4
    /* mtctr r12 */ // 0x8067FDD8
    /* bctrl  */ // 0x8067FDDC
    if (==) goto 0x0x8067fe00;
    r12 = *(0 + r29); // lwz @ 0x8067FDE8
    r3 = r29;
    r4 = r28;
    r12 = *(0x28 + r12); // lwz @ 0x8067FDF4
    /* mtctr r12 */ // 0x8067FDF8
    /* bctrl  */ // 0x8067FDFC
    r30 = r30 + 1; // 0x8067FE00
    if (<) goto 0x0x8067fd94;
    r0 = *(0x24 + r1); // lwz @ 0x8067FE10
    return;
}