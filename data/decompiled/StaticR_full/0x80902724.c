/* Function at 0x80902724, size=124 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_80902724(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8090272C
    *(0x14 + r1) = r0; // stw @ 0x80902730
    r0 = *(0 + r3); // lwz @ 0x80902734
    if (!=) goto 0x0x809027a4;
    /* lis r3, 0 */ // 0x80902740
    r3 = *(0 + r3); // lwz @ 0x80902744
    r0 = *(0xb70 + r3); // lwz @ 0x80902748
    r3 = *(0xb78 + r3); // lwz @ 0x8090274C
    if (!=) goto 0x0x80902760;
    if (==) goto 0x0x80902788;
    if (!=) goto 0x0x80902770;
    if (==) goto 0x0x80902788;
    if (!=) goto 0x0x80902780;
    if (==) goto 0x0x80902788;
    if (!=) goto 0x0x809027a4;
    /* li r3, 0x43b4 */ // 0x80902788
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8090279c;
    FUN_80902818(r3); // bl 0x80902818
    /* lis r4, 0 */ // 0x8090279C
}