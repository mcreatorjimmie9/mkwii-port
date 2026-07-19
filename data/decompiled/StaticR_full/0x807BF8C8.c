/* Function at 0x807BF8C8, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_807BF8C8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x807BF8D0
    *(0x14 + r1) = r0; // stw @ 0x807BF8D4
    r0 = *(0 + r3); // lwz @ 0x807BF8D8
    if (!=) goto 0x0x807bf900;
    /* li r3, 0x9c */ // 0x807BF8E4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807bf8f8;
    FUN_807BF94C(r3); // bl 0x807BF94C
    /* lis r4, 0 */ // 0x807BF8F8
    *(0 + r4) = r3; // stw @ 0x807BF8FC
    r0 = *(0x14 + r1); // lwz @ 0x807BF900
}