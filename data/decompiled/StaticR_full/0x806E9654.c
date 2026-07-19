/* Function at 0x806E9654, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E9654(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r0 = r4 rlwinm 2; // rlwinm
    *(0xc + r1) = r31; // stw @ 0x806E9664
    r31 = r3 + r0; // 0x806E9668
    r4 = *(0x1b0 + r31); // lwz @ 0x806E966C
    r3 = *(0 + r4); // lwz @ 0x806E9670
    r4 = *(8 + r4); // lwz @ 0x806E9674
    FUN_805E3430(); // bl 0x805E3430
}