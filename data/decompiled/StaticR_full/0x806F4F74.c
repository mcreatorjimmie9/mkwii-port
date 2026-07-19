/* Function at 0x806F4F74, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F4F74(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806F4F80
    r31 = r3;
    r0 = *(0x9dc + r3); // lwz @ 0x806F4F88
    if (!=) goto 0x0x806f4fb4;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x806f4fb4;
    r3 = *(0x9e8 + r31); // lwz @ 0x806F4FA0
    /* li r0, 0 */ // 0x806F4FA4
    *(0x9e0 + r31) = r3; // stw @ 0x806F4FA8
}