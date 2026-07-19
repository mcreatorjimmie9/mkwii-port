/* Function at 0x807D92C0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D92C0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D92CC
    r31 = r3;
    FUN_807D6D98(); // bl 0x807D6D98
    /* lis r4, 0 */ // 0x807D92D8
    r3 = r31;
    /* lfs f0, 0(r4) */ // 0x807D92E0
    r4 = r31 + 0x64; // 0x807D92E4
    /* stfs f0, 0x200(r31) */ // 0x807D92E8
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D92F0
    r31 = *(0xc + r1); // lwz @ 0x807D92F4
    return;
}