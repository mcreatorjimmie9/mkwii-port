/* Function at 0x806422B8, size=56 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806422B8(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806422C0
    *(0x64 + r1) = r0; // stw @ 0x806422C4
    r0 = r5 rlwinm 2; // rlwinm
    r3 = r3 + 0; // 0x806422CC
    /* li r5, 0 */ // 0x806422D0
    *(0x5c + r1) = r31; // stw @ 0x806422D4
    r31 = r4;
    /* lwzx r0, r3, r0 */ // 0x806422E0
    *(8 + r1) = r0; // stw @ 0x806422E8
    FUN_805E3430(r4, r3); // bl 0x805E3430
}