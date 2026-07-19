/* Function at 0x80778C98, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80778C98(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x80778CA0
    /* lis r5, 0 */ // 0x80778CA4
    *(0x14 + r1) = r0; // stw @ 0x80778CA8
    r6 = r6 + 0; // 0x80778CAC
    /* li r7, 0 */ // 0x80778CB4
    r0 = *(0 + r5); // lwz @ 0x80778CB8
    r6 = *(0 + r6); // lwz @ 0x80778CC0
    *(0xc + r1) = r6; // stw @ 0x80778CC4
    /* li r6, 1 */ // 0x80778CC8
    *(8 + r1) = r0; // stw @ 0x80778CCC
    FUN_808A1444(r5, r6); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x80778CD4
    return;
}