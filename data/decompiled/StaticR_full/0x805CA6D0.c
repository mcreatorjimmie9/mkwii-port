/* Function at 0x805CA6D0, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805CA6D0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805CA6E4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805CA6EC
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x805CA6F4
    r12 = *(0x14 + r12); // lwz @ 0x805CA6F8
    /* mtctr r12 */ // 0x805CA6FC
    /* bctrl  */ // 0x805CA700
    r4 = r3;
    r5 = r30;
    r6 = r31;
    r3 = r29 + 4; // 0x805CA710
    /* li r7, 1 */ // 0x805CA714
    FUN_805BC8D0(r4, r5, r6, r3, r7); // bl 0x805BC8D0
    r0 = *(4 + r29); // lbz @ 0x805CA71C
    /* li r4, -3 */ // 0x805CA720
    /* extsb r5, r0 */ // 0x805CA724
    r0 = r5 >> 0x1f; // srawi
    /* addc r0, r4, r5 */ // 0x805CA72C
    *(4 + r29) = r0; // stb @ 0x805CA730
    r31 = *(0x1c + r1); // lwz @ 0x805CA734
    r30 = *(0x18 + r1); // lwz @ 0x805CA738
    r29 = *(0x14 + r1); // lwz @ 0x805CA73C
    r0 = *(0x24 + r1); // lwz @ 0x805CA740
    return;
}