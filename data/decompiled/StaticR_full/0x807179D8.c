/* Function at 0x807179D8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807179D8(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x807179E0
    /* lis r5, 0 */ // 0x807179E4
    *(0x14 + r1) = r0; // stw @ 0x807179E8
    r6 = r6 + 0; // 0x807179EC
    /* li r7, 0 */ // 0x807179F4
    r0 = *(0 + r5); // lwz @ 0x807179F8
    r6 = *(0 + r6); // lwz @ 0x80717A00
    *(0xc + r1) = r6; // stw @ 0x80717A04
    /* li r6, 1 */ // 0x80717A08
    *(8 + r1) = r0; // stw @ 0x80717A0C
    FUN_808A1444(r5, r6); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x80717A14
    return;
}