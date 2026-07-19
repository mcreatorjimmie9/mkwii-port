/* Function at 0x8060E870, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8060E870(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8060E87C
    r31 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060E884
    r4 = *(4 + r5); // lwz @ 0x8060E888
    r0 = *(0xc + r4); // lwz @ 0x8060E88C
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x8060E890
    if (==) goto 0x0x8060e8d0;
    r4 = *(4 + r5); // lwz @ 0x8060E898
    r0 = *(0xc + r4); // lwz @ 0x8060E89C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060E8A4
    FUN_8061E010(); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060E8AC
    /* lis r4, 0 */ // 0x8060E8B0
    /* lfs f1, 0(r4) */ // 0x8060E8B4
    /* li r4, 0x1a5 */ // 0x8060E8B8
    r12 = *(0xe0 + r12); // lwz @ 0x8060E8BC
    /* mtctr r12 */ // 0x8060E8C0
    /* bctrl  */ // 0x8060E8C4
    r3 = *(0x260 + r31); // lwz @ 0x8060E8C8
    FUN_806426B0(r4); // bl 0x806426B0
    r0 = *(0x14 + r1); // lwz @ 0x8060E8D0
    r31 = *(0xc + r1); // lwz @ 0x8060E8D4
    return;
}