/* Function at 0x805D157C, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D157C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0xa */ // 0x805D1590
    *(8 + r1) = r30; // stw @ 0x805D1594
    r30 = r3;
    r3 = r3 + 0x30; // 0x805D159C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}