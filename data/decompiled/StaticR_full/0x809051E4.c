/* Function at 0x809051E4, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_809051E4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x809051F8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80905200
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x80905208
    r12 = *(0x14 + r12); // lwz @ 0x8090520C
    /* mtctr r12 */ // 0x80905210
    /* bctrl  */ // 0x80905214
    r4 = r3;
    r5 = r30;
    r6 = r31;
    r3 = r29 + 4; // 0x80905224
    /* li r7, 1 */ // 0x80905228
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x80905230
    r31 = *(0x1c + r1); // lwz @ 0x80905234
    r30 = *(0x18 + r1); // lwz @ 0x80905238
    r29 = *(0x14 + r1); // lwz @ 0x8090523C
    return;
}