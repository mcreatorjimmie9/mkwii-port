/* Function at 0x8061D09C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8061D09C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8061D0AC
    r30 = r3;
    FUN_8061D9A4(); // bl 0x8061D9A4
    r3 = r30;
    FUN_8061E2E8(r3); // bl 0x8061E2E8
    if (!=) goto 0x0x8061d0e4;
    /* li r3, 0x6e4 */ // 0x8061D0C8
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x8061d0dc;
}