/* Function at 0x8076C4C4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8076C4C4(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x8076C4CC
    /* lis r5, 0 */ // 0x8076C4D0
    *(0x14 + r1) = r0; // stw @ 0x8076C4D4
    r6 = r6 + 0; // 0x8076C4D8
    /* li r7, 0 */ // 0x8076C4E0
    r0 = *(0 + r5); // lwz @ 0x8076C4E4
    r6 = *(0 + r6); // lwz @ 0x8076C4EC
    *(0xc + r1) = r6; // stw @ 0x8076C4F0
    /* li r6, 1 */ // 0x8076C4F4
    *(8 + r1) = r0; // stw @ 0x8076C4F8
    FUN_808A1444(r5, r6); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x8076C500
    return;
}