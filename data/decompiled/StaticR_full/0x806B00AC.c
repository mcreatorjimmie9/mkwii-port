/* Function at 0x806B00AC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806B00AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x806B00B4
    *(0x14 + r1) = r0; // stw @ 0x806B00B8
    /* li r0, 0 */ // 0x806B00BC
    *(0x1c8 + r3) = r0; // stw @ 0x806B00C0
    r4 = *(0 + r4); // lwz @ 0x806B00C4
    r4 = *(0 + r4); // lwz @ 0x806B00C8
    r0 = *(0 + r4); // lwz @ 0x806B00CC
    if (<) goto 0x0x806b00f0;
    if (>) goto 0x0x806b00f0;
    FUN_806B03E8(); // bl 0x806B03E8
    /* lis r3, 0 */ // 0x806B00E4
    r3 = *(0 + r3); // lwz @ 0x806B00E8
    FUN_805C123C(r3); // bl 0x805C123C
    r0 = *(0x14 + r1); // lwz @ 0x806B00F0
    return;
}