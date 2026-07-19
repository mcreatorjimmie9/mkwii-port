/* Function at 0x805E73A4, size=52 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805E73A4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stfd f31, 0x28(r1) */ // 0x805E73B0
    /* fmr f31, f2 */ // 0x805E73B4
    /* stfd f30, 0x20(r1) */ // 0x805E73B8
    /* fmr f30, f1 */ // 0x805E73BC
    /* stmw r27, 0xc(r1) */ // 0x805E73C0
    r29 = r3;
    r30 = r4;
    r27 = r5;
    r3 = r3 + 4; // 0x805E73D0
    FUN_805E3430(r3); // bl 0x805E3430
}