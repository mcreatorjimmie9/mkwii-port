/* Function at 0x8082E1D0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8082E1D0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8082E1DC
    r31 = r3;
    r3 = *(0x134 + r3); // lwz @ 0x8082E1E4
    FUN_80842EF8(); // bl 0x80842EF8
    r0 = *(0x78 + r31); // lwz @ 0x8082E1EC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r31) = r0; // stw @ 0x8082E1F4
    r31 = *(0xc + r1); // lwz @ 0x8082E1F8
    r0 = *(0x14 + r1); // lwz @ 0x8082E1FC
    return;
}