/* Function at 0x80638678, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80638678(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8063868C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80638694
    r29 = r3;
    if (==) goto 0x0x80638700;
    /* addic. r31, r3, 4 */ // 0x806386A0
    if (==) goto 0x0x806386f0;
    /* lis r3, 0 */ // 0x806386A8
    /* lis r4, 0 */ // 0x806386AC
    r3 = r3 + 0; // 0x806386B0
    *(0 + r31) = r3; // stw @ 0x806386B4
    r3 = *(0 + r4); // lwz @ 0x806386B8
    if (==) goto 0x0x806386e4;
    /* li r0, 0 */ // 0x806386C4
    *(0 + r4) = r0; // stw @ 0x806386C8
    if (==) goto 0x0x806386e4;
    r12 = *(0 + r3); // lwz @ 0x806386D0
    /* li r4, 1 */ // 0x806386D4
    r12 = *(8 + r12); // lwz @ 0x806386D8
    /* mtctr r12 */ // 0x806386DC
    /* bctrl  */ // 0x806386E0
    r3 = r31;
    /* li r4, 0 */ // 0x806386E8
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80638700;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80638700
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x80638708
    r29 = *(0x14 + r1); // lwz @ 0x8063870C
    r0 = *(0x24 + r1); // lwz @ 0x80638710
    return;
}