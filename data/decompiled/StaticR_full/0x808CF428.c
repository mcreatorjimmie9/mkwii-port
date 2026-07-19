/* Function at 0x808CF428, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808CF428(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808CF430
    *(0x14 + r1) = r0; // stw @ 0x808CF434
    r0 = *(0 + r3); // lwz @ 0x808CF438
    if (!=) goto 0x0x808cf470;
    /* li r3, 8 */ // 0x808CF444
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808cf468;
    /* lis r4, 0 */ // 0x808CF454
    /* li r0, 0 */ // 0x808CF458
    r4 = r4 + 0; // 0x808CF45C
    *(0 + r3) = r4; // stw @ 0x808CF460
}