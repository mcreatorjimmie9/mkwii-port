/* Function at 0x8081524C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8081524C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x80815254
    *(0x14 + r1) = r0; // stw @ 0x80815258
    r0 = *(0 + r3); // lwz @ 0x8081525C
    if (!=) goto 0x0x80815284;
    /* li r3, 0x454 */ // 0x80815268
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8081527c;
    FUN_80815350(r3); // bl 0x80815350
    /* lis r4, 0 */ // 0x8081527C
    *(0 + r4) = r3; // stw @ 0x80815280
    r0 = *(0x14 + r1); // lwz @ 0x80815284
}