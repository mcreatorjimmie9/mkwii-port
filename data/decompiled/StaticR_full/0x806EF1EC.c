/* Function at 0x806EF1EC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806EF1EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806EF1F4
    *(0xc + r1) = r31; // stw @ 0x806EF1FC
    *(8 + r1) = r30; // stw @ 0x806EF200
    r0 = *(0 + r3); // lwz @ 0x806EF204
    if (!=) goto 0x0x806ef368;
    /* li r3, 0x260 */ // 0x806EF210
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x806ef360;
    /* li r31, 0 */ // 0x806EF224
    *(0 + r3) = r31; // stb @ 0x806EF228
    /* lis r4, 0 */ // 0x806EF22C
}