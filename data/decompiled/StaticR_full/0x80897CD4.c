/* Function at 0x80897CD4, size=88 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80897CD4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x90 + r1) = r28; // stw @ 0x80897CEC
    r28 = r3;
    FUN_8089BD4C(); // bl 0x8089BD4C
    r12 = *(0 + r28); // lwz @ 0x80897CF8
    r3 = r28;
    r12 = *(0x38 + r12); // lwz @ 0x80897D00
    /* mtctr r12 */ // 0x80897D04
    /* bctrl  */ // 0x80897D08
    /* lis r30, 0 */ // 0x80897D0C
    r6 = r3;
    r30 = r30 + 0; // 0x80897D14
    r5 = r30 + 0xf; // 0x80897D1C
    /* li r4, 0x80 */ // 0x80897D20
    /* crclr cr1eq */ // 0x80897D24
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
}