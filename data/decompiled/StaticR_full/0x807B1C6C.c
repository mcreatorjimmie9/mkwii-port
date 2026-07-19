/* Function at 0x807B1C6C, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B1C6C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807B1C7C
    r30 = r3;
    r3 = *(0x1cc + r3); // lwz @ 0x807B1C84
    FUN_8061E2D8(); // bl 0x8061E2D8
    r31 = r3;
    /* li r3, 8 */ // 0x807B1C90
    FUN_805E3430(r3); // bl 0x805E3430
}