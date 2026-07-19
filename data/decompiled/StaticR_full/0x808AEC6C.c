/* Function at 0x808AEC6C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808AEC6C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x808AEC7C
    r30 = r3;
    FUN_808A0278(); // bl 0x808A0278
    r12 = *(0 + r30); // lwz @ 0x808AEC88
    r3 = r30;
    r12 = *(0x30 + r12); // lwz @ 0x808AEC90
    /* mtctr r12 */ // 0x808AEC94
    /* bctrl  */ // 0x808AEC98
    if (==) goto 0x0x808aed88;
    /* li r3, 0x4c */ // 0x808AECA4
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
}