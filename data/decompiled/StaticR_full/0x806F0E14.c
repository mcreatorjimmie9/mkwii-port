/* Function at 0x806F0E14, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806F0E14(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806F0E1C
    *(0x14 + r1) = r0; // stw @ 0x806F0E20
    r0 = *(0 + r3); // lwz @ 0x806F0E24
    if (!=) goto 0x0x806f1080;
    /* li r3, 0x184 */ // 0x806F0E30
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806f1078;
    /* li r6, 0 */ // 0x806F0E40
    *(0 + r3) = r6; // stb @ 0x806F0E44
}