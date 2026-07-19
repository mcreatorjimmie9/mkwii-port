/* Function at 0x806ED014, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806ED014(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806ED024
    *(8 + r1) = r30; // stw @ 0x806ED028
    /* li r30, 0 */ // 0x806ED02C
    r5 = *(0 + r31); // lwz @ 0x806ED030
    r0 = r30 rlwinm 5; // rlwinm
    r3 = r30 rlwinm 2; // rlwinm
    r4 = r5 + r0; // 0x806ED03C
    r0 = *(0x27a0 + r4); // lwz @ 0x806ED040
    /* mulli r0, r0, 0x30 */ // 0x806ED044
    r0 = r5 + r0; // 0x806ED048
    r3 = r3 + r0; // 0x806ED04C
    r3 = *(0x150 + r3); // lwz @ 0x806ED050
    r3 = *(4 + r3); // lwz @ 0x806ED054
    FUN_806E9F24(); // bl 0x806E9F24
    r30 = r30 + 1; // 0x806ED05C
    if (<) goto 0x0x806ed030;
    r0 = *(0x14 + r1); // lwz @ 0x806ED068
    r31 = *(0xc + r1); // lwz @ 0x806ED06C
    r30 = *(8 + r1); // lwz @ 0x806ED070
    return;
}