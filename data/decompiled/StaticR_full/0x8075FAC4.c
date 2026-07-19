/* Function at 0x8075FAC4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8075FAC4(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x8075FACC
    /* lis r5, 0 */ // 0x8075FAD0
    *(0x14 + r1) = r0; // stw @ 0x8075FAD4
    r6 = r6 + 0; // 0x8075FAD8
    /* li r7, 0 */ // 0x8075FAE0
    r0 = *(0 + r5); // lwz @ 0x8075FAE4
    r6 = *(0 + r6); // lwz @ 0x8075FAEC
    *(0xc + r1) = r6; // stw @ 0x8075FAF0
    /* li r6, 1 */ // 0x8075FAF4
    *(8 + r1) = r0; // stw @ 0x8075FAF8
    FUN_808A1444(r5, r6); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x8075FB00
    return;
}