/* Function at 0x806D1DE0, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806D1DE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D1DF0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D1DF8
    r30 = r3;
    if (==) goto 0x0x806d1e2c;
    /* li r4, -1 */ // 0x806D1E04
    r3 = r3 + 0x58; // 0x806D1E08
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806D1E14
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806d1e2c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806D1E30
    r30 = *(8 + r1); // lwz @ 0x806D1E34
    r0 = *(0x14 + r1); // lwz @ 0x806D1E38
    return;
}