/* Function at 0x8090510C, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8090510C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80905120
    r30 = r4;
    r6 = *(4 + r3); // lbz @ 0x80905128
    /* addic r0, r6, -1 */ // 0x8090512C
    /* subfe r0, r0, r6 */ // 0x80905130
    *(8 + r1) = r0; // stb @ 0x80905134
    r12 = *(0 + r3); // lwz @ 0x80905138
    r12 = *(0x14 + r12); // lwz @ 0x8090513C
    /* mtctr r12 */ // 0x80905140
    /* bctrl  */ // 0x80905144
    r4 = r3;
    r5 = r30;
    r6 = r31;
    /* li r7, 1 */ // 0x80905158
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x80905160
    r31 = *(0x1c + r1); // lwz @ 0x80905164
    r30 = *(0x18 + r1); // lwz @ 0x80905168
    return;
}