/* Function at 0x807825B4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807825B4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807825BC
    r0 = *(0xbc + r3); // lwz @ 0x807825C0
    if (!=) goto 0x0x807825fc;
    /* lis r6, 0 */ // 0x807825CC
    /* lis r5, 0 */ // 0x807825D0
    r6 = r6 + 0; // 0x807825D4
    r0 = *(0 + r5); // lwz @ 0x807825D8
    r6 = *(0 + r6); // lwz @ 0x807825DC
    *(0xc + r1) = r6; // stw @ 0x807825E4
    /* li r6, 1 */ // 0x807825EC
    /* li r7, 0 */ // 0x807825F0
    *(8 + r1) = r0; // stw @ 0x807825F4
    FUN_808A1444(r5, r6, r7); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x807825FC
    return;
}