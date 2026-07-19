/* Function at 0x8063D128, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8063D128(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8063D138
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8063D140
    r30 = r3;
    if (==) goto 0x0x8063d164;
    /* li r4, 0 */ // 0x8063D14C
    FUN_805E3430(r4); // bl 0x805E3430
    if (<=) goto 0x0x8063d164;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8063D168
    r30 = *(8 + r1); // lwz @ 0x8063D16C
}