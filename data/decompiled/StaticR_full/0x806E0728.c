/* Function at 0x806E0728, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E0728(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E0734
    r31 = r3;
    FUN_8066C2F0(); // bl 0x8066C2F0
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806E0744
    r0 = *(0x14 + r1); // lwz @ 0x806E0748
    return;
}