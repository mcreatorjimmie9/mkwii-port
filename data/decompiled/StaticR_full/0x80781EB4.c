/* Function at 0x80781EB4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80781EB4(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x80781EBC
    /* li r6, 1 */ // 0x80781EC0
    *(0x14 + r1) = r0; // stw @ 0x80781EC4
    /* li r0, 0 */ // 0x80781EC8
    /* li r7, 0 */ // 0x80781ED0
    *(8 + r1) = r0; // stw @ 0x80781ED4
    r0 = *(0 + r4); // lwz @ 0x80781ED8
    *(0xc + r1) = r0; // stw @ 0x80781EE0
    FUN_808A1444(r7, r4); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x80781EE8
    return;
}