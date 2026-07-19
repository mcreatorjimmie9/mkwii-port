/* Function at 0x806E3990, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E3990(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806E39A0
    *(8 + r1) = r30; // stw @ 0x806E39A4
    /* li r30, 0 */ // 0x806E39A8
    r3 = *(0 + r31); // lwz @ 0x806E39AC
    r0 = r30 rlwinm 2; // rlwinm
    r3 = r3 + r0; // 0x806E39B4
    r0 = *(0x276c + r3); // lwz @ 0x806E39B8
    /* mulli r0, r0, 0x30 */ // 0x806E39BC
    r3 = r0 + r3; // 0x806E39C0
    r3 = *(0xf0 + r3); // lwz @ 0x806E39C4
    r3 = *(8 + r3); // lwz @ 0x806E39C8
    FUN_806E9F24(); // bl 0x806E9F24
    r30 = r30 + 1; // 0x806E39D0
    if (<) goto 0x0x806e39ac;
    r0 = *(0x14 + r1); // lwz @ 0x806E39DC
    r31 = *(0xc + r1); // lwz @ 0x806E39E0
    r30 = *(8 + r1); // lwz @ 0x806E39E4
    return;
}