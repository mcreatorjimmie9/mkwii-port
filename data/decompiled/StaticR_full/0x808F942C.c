/* Function at 0x808F942C, size=116 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_808F942C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808F9434
    *(0x14 + r1) = r0; // stw @ 0x808F9438
    r0 = *(0 + r3); // lwz @ 0x808F943C
    if (!=) goto 0x0x808f94a4;
    /* lis r3, 0 */ // 0x808F9448
    r3 = *(0 + r3); // lwz @ 0x808F944C
    r0 = *(0xb70 + r3); // lwz @ 0x808F9450
    r3 = *(0xb78 + r3); // lwz @ 0x808F9454
    if (!=) goto 0x0x808f9468;
    if (==) goto 0x0x808f9488;
    if (!=) goto 0x0x808f9478;
    if (==) goto 0x0x808f9488;
    if (!=) goto 0x0x808f94a4;
    if (!=) goto 0x0x808f94a4;
    /* li r3, 0x4f8 */ // 0x808F9488
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808f949c;
    FUN_808F94F4(r3); // bl 0x808F94F4
    /* lis r4, 0 */ // 0x808F949C
}