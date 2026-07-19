/* Function at 0x80847E64, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80847E64(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x80847E6C
    *(0x14 + r1) = r0; // stw @ 0x80847E70
    r0 = *(0 + r3); // lwz @ 0x80847E74
    if (!=) goto 0x0x80847eb4;
    /* li r3, 0x10 */ // 0x80847E80
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80847eac;
    /* li r0, 0 */ // 0x80847E90
    /* lis r4, 0 */ // 0x80847E94
}