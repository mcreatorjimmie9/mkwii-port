/* Function at 0x80776438, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80776438(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x80776440
    /* li r6, 1 */ // 0x80776444
    *(0x14 + r1) = r0; // stw @ 0x80776448
    /* li r0, 0 */ // 0x8077644C
    /* li r7, 0 */ // 0x80776454
    *(8 + r1) = r0; // stw @ 0x80776458
    r0 = *(0 + r4); // lwz @ 0x8077645C
    *(0xc + r1) = r0; // stw @ 0x80776464
    FUN_808A1444(r7, r4); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x8077646C
    return;
}