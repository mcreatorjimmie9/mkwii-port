/* Function at 0x808150D8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808150D8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808150E8
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x808150F0
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x808150F8
    if (!=) goto 0x0x80815108;
    /* lis r4, 0 */ // 0x80815100
    r31 = *(0 + r4); // lwz @ 0x80815104
    r0 = *(4 + r3); // lwz @ 0x80815108
    r4 = r31;
    /* li r5, 4 */ // 0x80815110
    /* slwi r3, r0, 2 */ // 0x80815114
    FUN_805E3430(r4, r5); // bl 0x805E3430
}