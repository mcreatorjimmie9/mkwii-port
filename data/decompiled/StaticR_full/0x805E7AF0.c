/* Function at 0x805E7AF0, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805E7AF0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x28(r1) */ // 0x805E7AFC
    /* fmr f31, f2 */ // 0x805E7B00
    /* stfd f30, 0x20(r1) */ // 0x805E7B04
    /* fmr f30, f1 */ // 0x805E7B08
    *(0x1c + r1) = r31; // stw @ 0x805E7B0C
    *(0x18 + r1) = r30; // stw @ 0x805E7B10
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805E7B18
    r29 = r3;
    r3 = r3 + 4; // 0x805E7B20
    FUN_805E3430(r3); // bl 0x805E3430
}