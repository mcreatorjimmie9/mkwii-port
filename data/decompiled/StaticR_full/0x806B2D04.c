/* Function at 0x806B2D04, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806B2D04(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B2D18
    r30 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x806B2D20
    *(0x270 + r3) = r0; // stw @ 0x806B2D24
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r0 = *(0x270 + r30); // lwz @ 0x806B2D30
    r3 = r30;
    /* slwi r0, r0, 2 */ // 0x806B2D38
    r4 = r30 + r0; // 0x806B2D3C
    r4 = *(0x274 + r4); // lwz @ 0x806B2D40
    FUN_80671C48(r3); // bl 0x80671C48
    r4 = *(0x270 + r30); // lwz @ 0x806B2D48
    /* slwi r0, r4, 2 */ // 0x806B2D4C
    r3 = r30 + r0; // 0x806B2D50
    r3 = *(0x44 + r3); // lwz @ 0x806B2D54
    if (==) goto 0x0x806b2d74;
    r12 = *(0 + r3); // lwz @ 0x806B2D60
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x806B2D68
    /* mtctr r12 */ // 0x806B2D6C
    /* bctrl  */ // 0x806B2D70
    r0 = *(0x14 + r1); // lwz @ 0x806B2D74
    r31 = *(0xc + r1); // lwz @ 0x806B2D78
    r30 = *(8 + r1); // lwz @ 0x806B2D7C
    return;
}