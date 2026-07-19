/* Function at 0x806EEA04, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806EEA04(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806EEA0C
    *(0x14 + r1) = r0; // stw @ 0x806EEA10
    r3 = *(0 + r3); // lwz @ 0x806EEA14
    if (==) goto 0x0x806eea34;
    if (==) goto 0x0x806eea28;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806EEA28
    /* li r0, 0 */ // 0x806EEA2C
    *(0 + r3) = r0; // stw @ 0x806EEA30
    r0 = *(0x14 + r1); // lwz @ 0x806EEA34
    return;
}