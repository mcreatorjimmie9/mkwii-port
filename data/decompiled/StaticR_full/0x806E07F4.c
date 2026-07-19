/* Function at 0x806E07F4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E07F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E0800
    r31 = r3;
    FUN_8066C444(); // bl 0x8066C444
    r4 = r3;
    r3 = r31;
    FUN_8066C4AC(r4, r3); // bl 0x8066C4AC
    r0 = *(0x14 + r1); // lwz @ 0x806E0818
    r31 = *(0xc + r1); // lwz @ 0x806E081C
    return;
}