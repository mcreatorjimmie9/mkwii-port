/* Function at 0x807D915C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D915C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807D916C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D9174
    r30 = r3;
    if (==) goto 0x0x807d9198;
    /* li r4, 0 */ // 0x807D9180
    FUN_807D6D14(r4); // bl 0x807D6D14
    if (<=) goto 0x0x807d9198;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807D919C
    r30 = *(8 + r1); // lwz @ 0x807D91A0
    r0 = *(0x14 + r1); // lwz @ 0x807D91A4
    return;
}