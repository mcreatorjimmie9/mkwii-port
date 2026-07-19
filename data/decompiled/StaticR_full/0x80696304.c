/* Function at 0x80696304, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80696304(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80696314
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069631C
    r30 = r3;
    if (==) goto 0x0x80696354;
    if (==) goto 0x0x80696344;
    /* li r4, -1 */ // 0x8069632C
    r3 = r3 + 0x11c; // 0x80696330
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x8069633C
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80696354;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80696358
    r30 = *(8 + r1); // lwz @ 0x8069635C
    r0 = *(0x14 + r1); // lwz @ 0x80696360
    return;
}