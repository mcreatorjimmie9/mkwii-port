/* Function at 0x8063D0D0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8063D0D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8063D0E0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8063D0E8
    r30 = r3;
    if (==) goto 0x0x8063d10c;
    /* li r4, 0 */ // 0x8063D0F4
    FUN_805E3430(r4); // bl 0x805E3430
    if (<=) goto 0x0x8063d10c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8063D110
    r30 = *(8 + r1); // lwz @ 0x8063D114
}