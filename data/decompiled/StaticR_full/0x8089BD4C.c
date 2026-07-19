/* Function at 0x8089BD4C, size=76 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8089BD4C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x90 + r1) = r28; // stw @ 0x8089BD64
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x8089BD6C
    r12 = *(0x38 + r12); // lwz @ 0x8089BD70
    /* mtctr r12 */ // 0x8089BD74
    /* bctrl  */ // 0x8089BD78
    /* lis r30, 0 */ // 0x8089BD7C
    r6 = r3;
    /* li r4, 0x80 */ // 0x8089BD88
    r5 = r30 + 0; // 0x8089BD8C
    /* crclr cr1eq */ // 0x8089BD90
    FUN_805E3430(r6, r3, r4, r5); // bl 0x805E3430
}