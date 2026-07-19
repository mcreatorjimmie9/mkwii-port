/* Function at 0x8088A630, size=88 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8088A630(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0xf0 + r1) = r28; // stw @ 0x8088A648
    r28 = r3;
    FUN_8089BD4C(); // bl 0x8089BD4C
    r12 = *(0 + r28); // lwz @ 0x8088A654
    r3 = r28;
    r12 = *(0x38 + r12); // lwz @ 0x8088A65C
    /* mtctr r12 */ // 0x8088A660
    /* bctrl  */ // 0x8088A664
    /* lis r30, 0 */ // 0x8088A668
    r6 = r3;
    r30 = r30 + 0; // 0x8088A670
    r5 = r30 + 0x20; // 0x8088A678
    /* li r4, 0x80 */ // 0x8088A67C
    /* crclr cr1eq */ // 0x8088A680
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
}