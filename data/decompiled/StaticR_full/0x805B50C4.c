/* Function at 0x805B50C4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B50C4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805B50CC
    r4 = r4 + 0; // 0x805B50D4
    *(0xc + r1) = r31; // stw @ 0x805B50D8
    /* li r31, 0 */ // 0x805B50DC
    *(8 + r1) = r30; // stw @ 0x805B50E0
    r30 = r3;
    *(0 + r3) = r4; // stw @ 0x805B50E8
    /* li r4, 0x20 */ // 0x805B50EC
    *(0x1c + r3) = r31; // stw @ 0x805B50F0
    r3 = r3 + 4; // 0x805B50F4
    FUN_805E3430(r4, r3); // bl 0x805E3430
}