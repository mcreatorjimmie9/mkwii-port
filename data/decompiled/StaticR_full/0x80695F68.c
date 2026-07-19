/* Function at 0x80695F68, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80695F68(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80695F78
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80695F80
    r30 = r3;
    if (==) goto 0x0x80695fb8;
    if (==) goto 0x0x80695fa8;
    /* li r4, -1 */ // 0x80695F90
    r3 = r3 + 0x11c; // 0x80695F94
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x80695FA0
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80695fb8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80695FBC
    r30 = *(8 + r1); // lwz @ 0x80695FC0
    r0 = *(0x14 + r1); // lwz @ 0x80695FC4
    return;
}