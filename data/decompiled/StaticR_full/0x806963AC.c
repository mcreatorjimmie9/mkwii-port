/* Function at 0x806963AC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806963AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806963BC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806963C4
    r30 = r3;
    if (==) goto 0x0x806963fc;
    if (==) goto 0x0x806963ec;
    /* li r4, -1 */ // 0x806963D4
    r3 = r3 + 0x11c; // 0x806963D8
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806963E4
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806963fc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80696400
    r30 = *(8 + r1); // lwz @ 0x80696404
    r0 = *(0x14 + r1); // lwz @ 0x80696408
    return;
}