/* Function at 0x8090A794, size=108 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_8090A794(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8090A79C
    *(0x14 + r1) = r0; // stw @ 0x8090A7A0
    r0 = *(0 + r3); // lwz @ 0x8090A7A4
    if (!=) goto 0x0x8090a804;
    /* lis r3, 0 */ // 0x8090A7B0
    /* li r4, 0 */ // 0x8090A7B4
    r3 = *(0 + r3); // lwz @ 0x8090A7B8
    r3 = *(0xb70 + r3); // lwz @ 0x8090A7BC
    r0 = r3 + -3; // 0x8090A7C0
    if (>) goto 0x0x8090a7e0;
    /* li r3, 1 */ // 0x8090A7CC
    r0 = r3 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8090A7D4
    if (==) goto 0x0x8090a7e0;
    r4 = r3;
    if (==) goto 0x0x8090a804;
    /* li r3, 0x10 */ // 0x8090A7E8
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8090a7fc;
    FUN_8090A858(r3); // bl 0x8090A858
    /* lis r4, 0 */ // 0x8090A7FC
}