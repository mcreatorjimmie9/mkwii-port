/* Function at 0x806F4BA8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F4BA8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806F4BB0
    *(0x14 + r1) = r0; // stw @ 0x806F4BB4
    *(0xc + r1) = r31; // stw @ 0x806F4BB8
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x806F4BC0
    /* addis r4, r4, 2 */ // 0x806F4BC4
    r4 = *(0x4ffc + r4); // lwz @ 0x806F4BC8
    /* addis r4, r4, 2 */ // 0x806F4BCC
    r0 = *(0x330c + r4); // lwz @ 0x806F4BD0
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x806F4BD4
    if (==) goto 0x0x806f4be8;
    r3 = r3 + 0x9c8; // 0x806F4BDC
    FUN_805E3430(r3); // bl 0x805E3430
    /* b 0x806f4bf0 */ // 0x806F4BE4
    r3 = r3 + 0x9c8; // 0x806F4BE8
}