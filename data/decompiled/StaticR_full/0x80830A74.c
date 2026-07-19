/* Function at 0x80830A74, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80830A74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80830A80
    r31 = r3;
    FUN_8082B688(); // bl 0x8082B688
    /* lis r3, 0 */ // 0x80830A8C
    r4 = *(0xa + r31); // lha @ 0x80830A90
    r3 = *(0 + r3); // lwz @ 0x80830A94
    r3 = *(0x74 + r3); // lwz @ 0x80830A98
    FUN_8071D434(r3); // bl 0x8071D434
    r0 = *(0x14 + r1); // lwz @ 0x80830AA0
    r31 = *(0xc + r1); // lwz @ 0x80830AA4
    return;
}