/* Function at 0x808841DC, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808841DC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x808841EC
    r30 = r3;
    FUN_808A0278(); // bl 0x808A0278
    /* li r3, 0x4c */ // 0x808841F8
    FUN_805E3430(r3); // bl 0x805E3430
}