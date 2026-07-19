/* Function at 0x80680AA4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80680AA4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x80680AAC
    *(0x14 + r1) = r0; // stw @ 0x80680AB0
    r3 = *(0 + r3); // lwz @ 0x80680AB4
    r3 = *(0 + r3); // lwz @ 0x80680AB8
    FUN_8068608C(r3); // bl 0x8068608C
    if (==) goto 0x0x80680adc;
    r3 = *(0x38 + r3); // lwz @ 0x80680AC8
    r12 = *(0 + r3); // lwz @ 0x80680ACC
    r12 = *(0x24 + r12); // lwz @ 0x80680AD0
    /* mtctr r12 */ // 0x80680AD4
    /* bctrl  */ // 0x80680AD8
    /* lis r4, 0 */ // 0x80680ADC
    /* li r0, 0 */ // 0x80680AE0
    r3 = *(0 + r4); // lwz @ 0x80680AE4
    r3 = *(0 + r3); // lwz @ 0x80680AE8
    *(0x388 + r3) = r0; // stb @ 0x80680AEC
    r3 = *(0 + r4); // lwz @ 0x80680AF0
    r3 = *(0 + r3); // lwz @ 0x80680AF4
    *(0x38a + r3) = r0; // stb @ 0x80680AF8
    r0 = *(0x14 + r1); // lwz @ 0x80680AFC
    return;
}