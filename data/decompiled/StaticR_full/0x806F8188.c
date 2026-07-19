/* Function at 0x806F8188, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F8188(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r0 = *(4 + r3); // lwz @ 0x806F8194
    *(0xc + r1) = r31; // stw @ 0x806F8198
    /* li r31, 0 */ // 0x806F819C
    if (==) goto 0x0x806f81dc;
    r0 = *(8 + r3); // lwz @ 0x806F81A8
    if (==) goto 0x0x806f81dc;
    r0 = *(0 + r3); // lwz @ 0x806F81B4
    if (<) goto 0x0x806f81dc;
    if (>) goto 0x0x806f81dc;
    r3 = r3 + 0xc; // 0x806F81C8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806f81dc;
    /* li r31, 1 */ // 0x806F81D8
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806F81E0
    r0 = *(0x14 + r1); // lwz @ 0x806F81E4
}