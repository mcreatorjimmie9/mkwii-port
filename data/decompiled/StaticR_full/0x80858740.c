/* Function at 0x80858740, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80858740(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80858750
    *(0x18 + r1) = r30; // stw @ 0x80858754
    /* li r30, 0 */ // 0x80858758
    *(0x14 + r1) = r29; // stw @ 0x8085875C
    r29 = r3;
    FUN_8061E2E8(); // bl 0x8061E2E8
    r0 = r3 + -1; // 0x80858768
    /* cntlzw r0, r0 */ // 0x8085876C
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x80858770
    if (==) goto 0x0x80858788;
    r0 = *(0xfa + r29); // lhz @ 0x80858778
    if (!=) goto 0x0x80858788;
    /* li r30, 1 */ // 0x80858784
    if (==) goto 0x0x808587a8;
    r3 = *(0 + r29); // lwz @ 0x80858790
    r3 = *(0 + r3); // lwz @ 0x80858794
    r0 = *(8 + r3); // lwz @ 0x80858798
    if (==) goto 0x0x808587a8;
    /* li r31, 1 */ // 0x808587A4
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x808587AC
    r30 = *(0x18 + r1); // lwz @ 0x808587B0
    r29 = *(0x14 + r1); // lwz @ 0x808587B4
    r0 = *(0x24 + r1); // lwz @ 0x808587B8
    return;
}