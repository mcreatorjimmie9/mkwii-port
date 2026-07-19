/* Function at 0x8079CACC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8079CACC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8079CAD4
    *(0x14 + r1) = r0; // stw @ 0x8079CAD8
    r0 = *(0 + r3); // lwz @ 0x8079CADC
    if (!=) goto 0x0x8079cb04;
    /* li r3, 0x178 */ // 0x8079CAE8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8079cafc;
    FUN_8079CC84(r3); // bl 0x8079CC84
    /* lis r4, 0 */ // 0x8079CAFC
    *(0 + r4) = r3; // stw @ 0x8079CB00
    r0 = *(0x14 + r1); // lwz @ 0x8079CB04
}