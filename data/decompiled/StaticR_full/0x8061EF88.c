/* Function at 0x8061EF88, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8061EF88(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x8061EF90
    /* li r6, 1 */ // 0x8061EF94
    *(0x14 + r1) = r0; // stw @ 0x8061EF98
    /* cntlzw r0, r4 */ // 0x8061EF9C
    /* li r7, 0 */ // 0x8061EFA0
    *(0xc + r1) = r31; // stw @ 0x8061EFA4
    r31 = r4;
    /* srwi r4, r0, 5 */ // 0x8061EFAC
    *(8 + r1) = r30; // stw @ 0x8061EFB0
    r30 = r3;
    FUN_8061E318(); // bl 0x8061E318
    r3 = *(0 + r30); // lwz @ 0x8061EFBC
    r3 = *(4 + r3); // lwz @ 0x8061EFC4
    if (==) goto 0x0x8061efdc;
    r0 = *(0xc + r3); // lwz @ 0x8061EFCC
    r0 = r0 | 8; // 0x8061EFD0
    *(0xc + r3) = r0; // stw @ 0x8061EFD4
    /* b 0x8061efe8 */ // 0x8061EFD8
    r0 = *(0xc + r3); // lwz @ 0x8061EFDC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x8061EFE4
    r0 = *(0x14 + r1); // lwz @ 0x8061EFE8
    r31 = *(0xc + r1); // lwz @ 0x8061EFEC
    r30 = *(8 + r1); // lwz @ 0x8061EFF0
    return;
}