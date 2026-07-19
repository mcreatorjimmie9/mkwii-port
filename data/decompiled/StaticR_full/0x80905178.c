/* Function at 0x80905178, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80905178(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, -1 */ // 0x80905184
    *(0x1c + r1) = r31; // stw @ 0x80905188
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80905190
    r30 = r4;
    r6 = *(4 + r3); // lbz @ 0x80905198
    /* addc r0, r6, r0 */ // 0x8090519C
    *(8 + r1) = r0; // stb @ 0x809051A0
    r12 = *(0 + r3); // lwz @ 0x809051A4
    r12 = *(0x14 + r12); // lwz @ 0x809051A8
    /* mtctr r12 */ // 0x809051AC
    /* bctrl  */ // 0x809051B0
    r4 = r3;
    r5 = r30;
    r6 = r31;
    /* li r7, 1 */ // 0x809051C4
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x809051CC
    r31 = *(0x1c + r1); // lwz @ 0x809051D0
    r30 = *(0x18 + r1); // lwz @ 0x809051D4
    return;
}