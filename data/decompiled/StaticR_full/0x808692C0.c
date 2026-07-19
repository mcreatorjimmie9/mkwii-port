/* Function at 0x808692C0, size=52 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808692C0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x808692D4
    *(0x24 + r1) = r29; // stw @ 0x808692D8
    r29 = r3;
    r3 = r3 + 0x20; // 0x808692E0
    FUN_807922D0(r3); // bl 0x807922D0
    *(8 + r29) = r31; // stw @ 0x808692E8
    /* li r3, 0x4c */ // 0x808692EC
    FUN_805E3430(r3, r3); // bl 0x805E3430
}