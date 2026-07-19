/* Function at 0x807B2AC4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807B2AC4(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x807B2ACC
    *(0x14 + r1) = r0; // stw @ 0x807B2AD0
    r3 = *(0 + r3); // lwz @ 0x807B2AD4
    FUN_805A87A4(r3); // bl 0x805A87A4
    if (==) goto 0x0x807b2afc;
    r3 = *(0 + r3); // lwz @ 0x807B2AE4
    r0 = *(1 + r3); // lbz @ 0x807B2AE8
    if (!=) goto 0x0x807b2afc;
    /* li r3, 0 */ // 0x807B2AF4
    /* b 0x807b2b00 */ // 0x807B2AF8
    /* li r3, 1 */ // 0x807B2AFC
    r0 = *(0x14 + r1); // lwz @ 0x807B2B00
    return;
}