/* Function at 0x8069D78C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8069D78C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069D79C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069D7A4
    r30 = r3;
    if (==) goto 0x0x8069d7c8;
    /* li r4, 0 */ // 0x8069D7B0
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x8069d7c8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069D7CC
    r30 = *(8 + r1); // lwz @ 0x8069D7D0
    r0 = *(0x14 + r1); // lwz @ 0x8069D7D4
    return;
}