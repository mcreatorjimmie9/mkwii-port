/* Function at 0x809055E0, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_809055E0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, -1 */ // 0x809055EC
    *(0x1c + r1) = r31; // stw @ 0x809055F0
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x809055F8
    r30 = r4;
    r6 = *(4 + r3); // lbz @ 0x80905600
    /* addc r0, r6, r0 */ // 0x80905604
    *(8 + r1) = r0; // stb @ 0x80905608
    r12 = *(0 + r3); // lwz @ 0x8090560C
    r12 = *(0x14 + r12); // lwz @ 0x80905610
    /* mtctr r12 */ // 0x80905614
    /* bctrl  */ // 0x80905618
    r4 = r3;
    r5 = r30;
    r6 = r31;
    /* li r7, 1 */ // 0x8090562C
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x80905634
    r31 = *(0x1c + r1); // lwz @ 0x80905638
    r30 = *(0x18 + r1); // lwz @ 0x8090563C
    return;
}