/* Function at 0x80908B88, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80908B88(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80908B9C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80908BA4
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x80908BAC
    r12 = *(0x14 + r12); // lwz @ 0x80908BB0
    /* mtctr r12 */ // 0x80908BB4
    /* bctrl  */ // 0x80908BB8
    r4 = r3;
    r5 = r30;
    r6 = r31;
    r3 = r29 + 4; // 0x80908BC8
    /* li r7, 1 */ // 0x80908BCC
    FUN_805BC8D0(r4, r5, r6, r3, r7); // bl 0x805BC8D0
    r4 = *(4 + r29); // lbz @ 0x80908BD4
    /* li r0, 1 */ // 0x80908BD8
    /* addc r0, r4, r0 */ // 0x80908BDC
    *(4 + r29) = r0; // stb @ 0x80908BE0
    r31 = *(0x1c + r1); // lwz @ 0x80908BE4
    r30 = *(0x18 + r1); // lwz @ 0x80908BE8
    r29 = *(0x14 + r1); // lwz @ 0x80908BEC
    r0 = *(0x24 + r1); // lwz @ 0x80908BF0
    return;
}