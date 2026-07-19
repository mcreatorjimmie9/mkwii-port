/* Function at 0x807DEAB4, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807DEAB4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DEAC8
    r30 = r3;
    FUN_805ABAFC(); // bl 0x805ABAFC
    /* li r4, 9 */ // 0x807DEAD4
    r3 = r3 + 0xc94; // 0x807DEAD8
    FUN_805E3430(r4, r3); // bl 0x805E3430
}