/* Function at 0x80778D9C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80778D9C(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x80778DA4
    /* lis r5, 0 */ // 0x80778DA8
    *(0x14 + r1) = r0; // stw @ 0x80778DAC
    r6 = r6 + 0; // 0x80778DB0
    /* li r7, 0 */ // 0x80778DB8
    r0 = *(0 + r5); // lwz @ 0x80778DBC
    r6 = *(0 + r6); // lwz @ 0x80778DC4
    *(0xc + r1) = r6; // stw @ 0x80778DC8
    /* li r6, 1 */ // 0x80778DCC
    *(8 + r1) = r0; // stw @ 0x80778DD0
    FUN_808A1444(r5, r6); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x80778DD8
    return;
}