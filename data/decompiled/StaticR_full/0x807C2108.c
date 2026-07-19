/* Function at 0x807C2108, size=96 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807C2108(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r0, 1 */ // 0x807C2114
    /* li r31, 0 */ // 0x807C211C
    *(0x68 + r1) = r30; // stw @ 0x807C2120
    *(0x64 + r1) = r29; // stw @ 0x807C2124
    r29 = r4;
    *(0x60 + r1) = r28; // stw @ 0x807C212C
    r28 = r3;
    r30 = *(0x14 + r3); // lwz @ 0x807C2134
    *(0x20 + r3) = r0; // stb @ 0x807C2138
    *(4 + r3) = r31; // stb @ 0x807C213C
    r3 = r30;
    r12 = *(0 + r30); // lwz @ 0x807C2144
    r12 = *(0x10 + r12); // lwz @ 0x807C2148
    /* mtctr r12 */ // 0x807C214C
    /* bctrl  */ // 0x807C2150
    r4 = r30;
    FUN_807D9E88(r4, r3); // bl 0x807D9E88
    r3 = r29;
    FUN_8061DA88(r4, r3, r3); // bl 0x8061DA88
}