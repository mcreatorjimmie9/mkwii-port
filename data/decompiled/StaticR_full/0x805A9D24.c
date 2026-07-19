/* Function at 0x805A9D24, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805A9D24(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f1, 0(r3) */ // 0x805A9D2C
    *(0xc + r1) = r31; // stw @ 0x805A9D34
    /* li r31, 0 */ // 0x805A9D38
    *(8 + r1) = r30; // stw @ 0x805A9D3C
    r30 = r3;
    FUN_805E3430(); // bl 0x805E3430
}