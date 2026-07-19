/* Function at 0x808F6BBC, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808F6BBC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F6BC8
    r31 = r4;
    /* subf r4, r4, r5 */ // 0x808F6BD0
    FUN_805E364C(); // bl 0x805E364C
    r3 = r31 + r3; // 0x808F6BD8
    r31 = *(0xc + r1); // lwz @ 0x808F6BDC
    r0 = *(0x14 + r1); // lwz @ 0x808F6BE0
    return;
}