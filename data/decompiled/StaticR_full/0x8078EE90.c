/* Function at 0x8078EE90, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078EE90(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8078EEA4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078EEAC
    r29 = r3;
    r12 = *(0x94 + r3); // lwz @ 0x8078EEB4
    r12 = *(0x2c + r12); // lwz @ 0x8078EEB8
    /* mtctr r12 */ // 0x8078EEBC
    r3 = r3 + 0x94; // 0x8078EEC0
    /* bctrl  */ // 0x8078EEC4
    r3 = r29;
    r4 = r30;
    r5 = r31;
    FUN_805E3430(r3, r3, r4, r5); // bl 0x805E3430
}