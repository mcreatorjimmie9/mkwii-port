/* Function at 0x80901824, size=60 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80901824(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x34 + r1) = r29; // stw @ 0x80901838
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x80901840
    r12 = *(0x34 + r12); // lwz @ 0x80901844
    /* mtctr r12 */ // 0x80901848
    /* bctrl  */ // 0x8090184C
    /* lis r31, 0 */ // 0x80901850
    r31 = r31 + 0; // 0x80901854
    r4 = r31 + 0xa1; // 0x80901858
    FUN_805E3430(r4); // bl 0x805E3430
}