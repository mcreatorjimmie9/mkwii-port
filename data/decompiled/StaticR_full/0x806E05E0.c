/* Function at 0x806E05E0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E05E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x806E05EC
    *(0xc + r1) = r31; // stw @ 0x806E05F0
    /* lis r31, 0 */ // 0x806E05F4
    *(0x1c8 + r3) = r0; // stb @ 0x806E05F8
    r3 = *(0 + r31); // lwz @ 0x806E05FC
    r3 = r3 + 0x34; // 0x806E0600
    FUN_8067FD2C(r3); // bl 0x8067FD2C
    r3 = *(0 + r31); // lwz @ 0x806E0608
    /* li r4, 0 */ // 0x806E060C
    r3 = r3 + 0x34; // 0x806E0610
    FUN_8067F750(r3, r4, r3); // bl 0x8067F750
    r0 = *(0x14 + r1); // lwz @ 0x806E0618
    r31 = *(0xc + r1); // lwz @ 0x806E061C
    return;
}