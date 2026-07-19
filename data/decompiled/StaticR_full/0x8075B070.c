/* Function at 0x8075B070, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8075B070(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x8075B078
    /* lis r5, 0 */ // 0x8075B07C
    *(0x14 + r1) = r0; // stw @ 0x8075B080
    r6 = r6 + 0; // 0x8075B084
    /* li r7, 0 */ // 0x8075B08C
    r0 = *(0 + r5); // lwz @ 0x8075B090
    r6 = *(0 + r6); // lwz @ 0x8075B098
    *(0xc + r1) = r6; // stw @ 0x8075B09C
    /* li r6, 1 */ // 0x8075B0A0
    *(8 + r1) = r0; // stw @ 0x8075B0A4
    FUN_808A1444(r5, r6); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x8075B0AC
    return;
}