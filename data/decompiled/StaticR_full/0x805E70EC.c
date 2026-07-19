/* Function at 0x805E70EC, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E70EC(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* stfd f31, 0x28(r1) */ // 0x805E70F8
    /* fmr f31, f2 */ // 0x805E70FC
    /* stfd f30, 0x20(r1) */ // 0x805E7100
    /* fmr f30, f1 */ // 0x805E7104
    *(0x1c + r1) = r31; // stw @ 0x805E7108
    r31 = r3;
    r3 = r3 + 4; // 0x805E7110
    *(0x18 + r1) = r30; // stw @ 0x805E7114
    *(0x14 + r1) = r29; // stw @ 0x805E7118
    r29 = r4;
    FUN_805E3430(r3); // bl 0x805E3430
}