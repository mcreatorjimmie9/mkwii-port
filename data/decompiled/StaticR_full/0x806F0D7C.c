/* Function at 0x806F0D7C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806F0D7C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806F0D88
    r31 = r3;
    FUN_806EF1EC(); // bl 0x806EF1EC
    FUN_806EA6A0(); // bl 0x806EA6A0
    /* lis r3, 0 */ // 0x806F0D98
    r3 = *(0 + r3); // lwz @ 0x806F0D9C
    FUN_806E9938(r3); // bl 0x806E9938
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806F0DA8
    r0 = *(0x14 + r1); // lwz @ 0x806F0DAC
    return;
}