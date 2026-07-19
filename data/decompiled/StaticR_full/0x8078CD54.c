/* Function at 0x8078CD54, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078CD54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x8078CD5C
    *(0xc + r1) = r31; // stw @ 0x8078CD64
    *(8 + r1) = r30; // stw @ 0x8078CD68
    r0 = *(0 + r3); // lwz @ 0x8078CD6C
    if (!=) goto 0x0x8078ce04;
    /* li r3, 0x108 */ // 0x8078CD78
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x8078cdfc;
    /* lis r4, 0 */ // 0x8078CD8C
    r4 = r4 + 0; // 0x8078CD90
    *(0 + r3) = r4; // stw @ 0x8078CD94
    r3 = r3 + 4; // 0x8078CD98
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
}