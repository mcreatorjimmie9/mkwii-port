/* Function at 0x806F0DBC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806F0DBC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806F0DCC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806F0DD4
    r30 = r3;
    if (==) goto 0x0x806f0df8;
    FUN_806EF380(); // bl 0x806EF380
    FUN_806EA764(); // bl 0x806EA764
    if (<=) goto 0x0x806f0df8;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806F0DFC
    r30 = *(8 + r1); // lwz @ 0x806F0E00
    r0 = *(0x14 + r1); // lwz @ 0x806F0E04
    return;
}