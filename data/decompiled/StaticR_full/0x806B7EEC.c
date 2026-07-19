/* Function at 0x806B7EEC, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806B7EEC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B7EFC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B7F04
    r30 = r3;
    if (==) goto 0x0x806b7f38;
    /* li r4, -1 */ // 0x806B7F10
    r3 = r3 + 0x44; // 0x806B7F14
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806B7F20
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806b7f38;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806B7F3C
    r30 = *(8 + r1); // lwz @ 0x806B7F40
    r0 = *(0x14 + r1); // lwz @ 0x806B7F44
    return;
}