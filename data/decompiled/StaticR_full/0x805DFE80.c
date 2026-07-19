/* Function at 0x805DFE80, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805DFE80(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x805DFE88
    *(0x14 + r1) = r0; // stw @ 0x805DFE8C
    r4 = r4 + 0; // 0x805DFE90
    r0 = *(0xa0 + r4); // lwz @ 0x805DFE94
    if (==) goto 0x0x805dfeb4;
    r4 = r4 + 0x80; // 0x805DFEA0
    /* li r5, 0xc */ // 0x805DFEA4
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* li r3, 1 */ // 0x805DFEAC
    /* b 0x805dfeb8 */ // 0x805DFEB0
    /* li r3, 0 */ // 0x805DFEB4
    r0 = *(0x14 + r1); // lwz @ 0x805DFEB8
}