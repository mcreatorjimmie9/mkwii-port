/* Function at 0x8090872C, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8090872C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80908740
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80908748
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x80908750
    r12 = *(0x14 + r12); // lwz @ 0x80908754
    /* mtctr r12 */ // 0x80908758
    /* bctrl  */ // 0x8090875C
    r4 = r3;
    r5 = r30;
    r6 = r31;
    r3 = r29 + 4; // 0x8090876C
    /* li r7, 1 */ // 0x80908770
    FUN_805BC8D0(r4, r5, r6, r3, r7); // bl 0x805BC8D0
    r4 = *(4 + r29); // lbz @ 0x80908778
    /* li r0, 1 */ // 0x8090877C
    /* addc r0, r4, r0 */ // 0x80908780
    *(4 + r29) = r0; // stb @ 0x80908784
    r31 = *(0x1c + r1); // lwz @ 0x80908788
    r30 = *(0x18 + r1); // lwz @ 0x8090878C
    r29 = *(0x14 + r1); // lwz @ 0x80908790
    r0 = *(0x24 + r1); // lwz @ 0x80908794
    return;
}