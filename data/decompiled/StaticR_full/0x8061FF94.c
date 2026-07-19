/* Function at 0x8061FF94, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8061FF94(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x8061FF9C
    /* lis r3, 0 */ // 0x8061FFA0
    *(0x14 + r1) = r0; // stw @ 0x8061FFA4
    r4 = r4 + 0; // 0x8061FFA8
    r5 = r4 + 0x200; // 0x8061FFAC
    /* li r6, 0 */ // 0x8061FFB0
    r3 = *(0 + r3); // lwz @ 0x8061FFB4
    /* li r4, 0 */ // 0x8061FFB8
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    /* lis r4, 0 */ // 0x8061FFC0
    *(0 + r4) = r3; // stw @ 0x8061FFC4
    r0 = *(0x14 + r1); // lwz @ 0x8061FFC8
    return;
}