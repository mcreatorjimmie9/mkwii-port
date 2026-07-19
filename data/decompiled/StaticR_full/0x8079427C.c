/* Function at 0x8079427C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8079427C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x80794288
    *(0x14 + r1) = r0; // stw @ 0x8079428C
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x80794294
    r0 = *(0x88 + r3); // lwz @ 0x80794298
    /* mtctr r0 */ // 0x8079429C
    if (<=) goto 0x0x807942d0;
    r0 = *(0x80 + r6); // lwz @ 0x807942A8
    if (!=) goto 0x0x807942c4;
    /* slwi r0, r4, 2 */ // 0x807942B4
    r4 = r3 + r0; // 0x807942B8
    r31 = r4 + 0x80; // 0x807942BC
    /* b 0x807942d4 */ // 0x807942C0
    r6 = r6 + 4; // 0x807942C4
    r4 = r4 + 1; // 0x807942C8
    if (counter-- != 0) goto 0x0x807942a8;
    /* li r31, 0 */ // 0x807942D0
    if (==) goto 0x0x807942f0;
    r4 = r31;
    /* li r6, 0 */ // 0x807942E0
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x807942f4 */ // 0x807942EC
    /* li r3, 0 */ // 0x807942F0
    r0 = *(0x14 + r1); // lwz @ 0x807942F4
    r31 = *(0xc + r1); // lwz @ 0x807942F8
}