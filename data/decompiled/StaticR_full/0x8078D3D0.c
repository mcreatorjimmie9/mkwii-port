/* Function at 0x8078D3D0, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8078D3D0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 8; // 0x8078D3E0
    *(8 + r1) = r30; // stw @ 0x8078D3E4
    r30 = r3;
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
}