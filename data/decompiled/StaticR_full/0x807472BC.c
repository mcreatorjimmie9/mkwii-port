/* Function at 0x807472BC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807472BC(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x807472C4
    /* li r6, 1 */ // 0x807472C8
    *(0x14 + r1) = r0; // stw @ 0x807472CC
    /* li r0, 0 */ // 0x807472D0
    /* li r7, 0 */ // 0x807472D8
    *(8 + r1) = r0; // stw @ 0x807472DC
    r0 = *(0 + r4); // lwz @ 0x807472E0
    *(0xc + r1) = r0; // stw @ 0x807472E8
    FUN_808A1444(r7, r4); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x807472F0
    return;
}