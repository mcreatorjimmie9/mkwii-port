/* Function at 0x806E57C4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_806E57C4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E57D0
    /* lis r31, 0 */ // 0x806E57D4
    r0 = *(0 + r31); // lwz @ 0x806E57D8
    if (==) goto 0x0x806e5814;
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0 + r31); // lwz @ 0x806E57E8
    if (==) goto 0x0x806e5808;
    r12 = *(0 + r3); // lwz @ 0x806E57F4
    /* li r4, 1 */ // 0x806E57F8
}