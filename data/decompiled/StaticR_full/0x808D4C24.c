/* Function at 0x808D4C24, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_808D4C24(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808D4C3C
    *(0x10 + r1) = r28; // stw @ 0x808D4C40
    r12 = *(0 + r3); // lwz @ 0x808D4C44
    r12 = *(0x10 + r12); // lwz @ 0x808D4C48
    /* mtctr r12 */ // 0x808D4C4C
    /* bctrl  */ // 0x808D4C50
    r3 = r3 rlwinm 2; // rlwinm
    FUN_805E3430(); // bl 0x805E3430
}