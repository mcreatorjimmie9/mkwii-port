/* Function at 0x806498AC, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806498AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806498BC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806498C4
    r30 = r3;
    if (==) goto 0x0x806498f8;
    /* li r4, -1 */ // 0x806498D0
    r3 = r3 + 0x174; // 0x806498D4
    FUN_806691A0(r4, r3); // bl 0x806691A0
    r3 = r30;
    /* li r4, 0 */ // 0x806498E0
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x806498f8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806498FC
    r30 = *(8 + r1); // lwz @ 0x80649900
    r0 = *(0x14 + r1); // lwz @ 0x80649904
    return;
}