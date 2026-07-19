/* Function at 0x805DFEC8, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805DFEC8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x805DFED0
    *(0x14 + r1) = r0; // stw @ 0x805DFED4
    r4 = r4 + 0; // 0x805DFED8
    r0 = *(0xa0 + r4); // lwz @ 0x805DFEDC
    if (==) goto 0x0x805dfefc;
    r4 = r4 + 0x8c; // 0x805DFEE8
    /* li r5, 0x10 */ // 0x805DFEEC
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* li r3, 1 */ // 0x805DFEF4
    /* b 0x805dff00 */ // 0x805DFEF8
    /* li r3, 0 */ // 0x805DFEFC
    r0 = *(0x14 + r1); // lwz @ 0x805DFF00
}