/* Function at 0x8066940C, size=84 bytes */
/* Stack frame: 16 bytes */

int FUN_8066940C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80669414
    /* slwi r0, r4, 2 */ // 0x80669418
    r3 = r3 + r0; // 0x8066941C
    r3 = *(0x40 + r3); // lwz @ 0x80669420
    if (==) goto 0x0x8066944c;
    r12 = *(0 + r3); // lwz @ 0x8066942C
    r4 = r5;
    r5 = r6;
    r12 = *(8 + r12); // lwz @ 0x80669438
    /* mtctr r12 */ // 0x8066943C
    /* bctrl  */ // 0x80669440
    /* li r3, 1 */ // 0x80669444
    /* b 0x80669450 */ // 0x80669448
    /* li r3, 0 */ // 0x8066944C
    r0 = *(0x14 + r1); // lwz @ 0x80669450
    return;
}