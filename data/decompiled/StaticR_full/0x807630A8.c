/* Function at 0x807630A8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807630A8(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x807630B0
    /* lis r5, 0 */ // 0x807630B4
    *(0x14 + r1) = r0; // stw @ 0x807630B8
    r6 = r6 + 0; // 0x807630BC
    /* li r7, 0 */ // 0x807630C4
    r0 = *(0 + r5); // lwz @ 0x807630C8
    r6 = *(0 + r6); // lwz @ 0x807630D0
    *(0xc + r1) = r6; // stw @ 0x807630D4
    /* li r6, 1 */ // 0x807630D8
    *(8 + r1) = r0; // stw @ 0x807630DC
    FUN_808A1444(r5, r6); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x807630E4
    return;
}