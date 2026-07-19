/* Function at 0x8069E540, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8069E540(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069E550
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069E558
    r30 = r3;
    if (==) goto 0x0x8069e57c;
    /* li r4, 0 */ // 0x8069E564
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x8069e57c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069E580
    r30 = *(8 + r1); // lwz @ 0x8069E584
    r0 = *(0x14 + r1); // lwz @ 0x8069E588
    return;
}