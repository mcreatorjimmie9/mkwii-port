/* Function at 0x806678AC, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806678AC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x806678C0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806678C8
    r29 = r3;
    if (==) goto 0x0x80667914;
    r31 = *(0 + r3); // lwz @ 0x806678D4
    /* b 0x806678fc */ // 0x806678D8
    /* or. r3, r31, r31 */ // 0x806678DC
    r31 = *(0xac + r31); // lwz @ 0x806678E0
    if (==) goto 0x0x806678fc;
    r12 = *(0 + r3); // lwz @ 0x806678E8
    /* li r4, 1 */ // 0x806678EC
    r12 = *(8 + r12); // lwz @ 0x806678F0
    /* mtctr r12 */ // 0x806678F4
    /* bctrl  */ // 0x806678F8
    if (!=) goto 0x0x806678dc;
    if (<=) goto 0x0x80667914;
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80667914
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x8066791C
    r29 = *(0x14 + r1); // lwz @ 0x80667920
    r0 = *(0x24 + r1); // lwz @ 0x80667924
    return;
}