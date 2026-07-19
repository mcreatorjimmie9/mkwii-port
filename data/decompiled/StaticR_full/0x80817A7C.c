/* Function at 0x80817A7C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_80817A7C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x80817A84
    *(0x14 + r1) = r0; // stw @ 0x80817A88
    r0 = *(0 + r3); // lwz @ 0x80817A8C
    if (!=) goto 0x0x80817ab4;
    /* li r3, 0x1f0 */ // 0x80817A98
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80817aac;
    FUN_80817AF0(r3); // bl 0x80817AF0
    /* lis r4, 0 */ // 0x80817AAC
    *(0 + r4) = r3; // stw @ 0x80817AB0
    r0 = *(0x14 + r1); // lwz @ 0x80817AB4
}