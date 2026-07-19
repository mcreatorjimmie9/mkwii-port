/* Function at 0x806B57B0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806B57B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B57C0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B57C8
    r30 = r3;
    if (==) goto 0x0x806b57ec;
    /* li r4, 0 */ // 0x806B57D4
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x806b57ec;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806B57F0
    r30 = *(8 + r1); // lwz @ 0x806B57F4
    r0 = *(0x14 + r1); // lwz @ 0x806B57F8
    return;
}