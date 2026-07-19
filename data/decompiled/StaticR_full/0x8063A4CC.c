/* Function at 0x8063A4CC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8063A4CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8063A4DC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8063A4E4
    r30 = r3;
    if (==) goto 0x0x8063a508;
    /* li r4, 0 */ // 0x8063A4F0
    FUN_805F1DDC(r4); // bl 0x805F1DDC
    if (<=) goto 0x0x8063a508;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8063A50C
    r30 = *(8 + r1); // lwz @ 0x8063A510
    r0 = *(0x14 + r1); // lwz @ 0x8063A514
    return;
}