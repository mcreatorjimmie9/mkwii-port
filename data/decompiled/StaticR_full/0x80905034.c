/* Function at 0x80905034, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80905034(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, -1 */ // 0x80905040
    *(0x1c + r1) = r31; // stw @ 0x80905044
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8090504C
    r30 = r4;
    r6 = *(4 + r3); // lbz @ 0x80905054
    /* addc r0, r6, r0 */ // 0x80905058
    *(8 + r1) = r0; // stb @ 0x8090505C
    r12 = *(0 + r3); // lwz @ 0x80905060
    r12 = *(0x14 + r12); // lwz @ 0x80905064
    /* mtctr r12 */ // 0x80905068
    /* bctrl  */ // 0x8090506C
    r4 = r3;
    r5 = r30;
    r6 = r31;
    /* li r7, 1 */ // 0x80905080
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x80905088
    r31 = *(0x1c + r1); // lwz @ 0x8090508C
    r30 = *(0x18 + r1); // lwz @ 0x80905090
    return;
}