/* Function at 0x80658994, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80658994(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x8065899C
    *(0x18 + r1) = r30; // stw @ 0x806589A8
    *(0x14 + r1) = r29; // stw @ 0x806589AC
    r29 = *(0 + r3); // lwz @ 0x806589B0
    if (==) goto 0x0x806589fc;
    r30 = r29;
    /* li r31, 0 */ // 0x806589C0
    r3 = *(0 + r30); // lwz @ 0x806589C4
    if (==) goto 0x0x806589e4;
    r12 = *(0 + r3); // lwz @ 0x806589D0
    /* li r4, 1 */ // 0x806589D4
    r12 = *(8 + r12); // lwz @ 0x806589D8
    /* mtctr r12 */ // 0x806589DC
    /* bctrl  */ // 0x806589E0
    r31 = r31 + 1; // 0x806589E4
    r30 = r30 + 4; // 0x806589E8
    if (<) goto 0x0x806589c4;
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806589FC
    /* li r0, 0 */ // 0x80658A00
    *(0 + r3) = r0; // stw @ 0x80658A04
    r31 = *(0x1c + r1); // lwz @ 0x80658A08
    r30 = *(0x18 + r1); // lwz @ 0x80658A0C
    r29 = *(0x14 + r1); // lwz @ 0x80658A10
    r0 = *(0x24 + r1); // lwz @ 0x80658A14
    return;
}