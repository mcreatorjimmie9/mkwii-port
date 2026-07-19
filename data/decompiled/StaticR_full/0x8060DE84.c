/* Function at 0x8060DE84, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8060DE84(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8060DE90
    r31 = r3;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060DE9C
    r0 = r3 rlwinm 2; // rlwinm
    r5 = *(0 + r4); // lwz @ 0x8060DEA4
    /* li r8, 0 */ // 0x8060DEA8
    r3 = r31;
    /* li r4, 0x264 */ // 0x8060DEB0
    r7 = *(0x68 + r5); // lwz @ 0x8060DEB4
    /* li r5, 0 */ // 0x8060DEB8
    /* li r6, 1 */ // 0x8060DEBC
    /* lwzx r7, r7, r0 */ // 0x8060DEC0
    *(0x50 + r7) = r8; // stw @ 0x8060DEC4
    FUN_8060DFB4(r5, r6); // bl 0x8060DFB4
    r0 = *(0x14 + r1); // lwz @ 0x8060DECC
    r31 = *(0xc + r1); // lwz @ 0x8060DED0
    return;
}