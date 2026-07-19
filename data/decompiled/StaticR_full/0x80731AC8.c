/* Function at 0x80731AC8, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80731AC8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 2 */ // 0x80731AD8
    *(0x18 + r1) = r30; // stw @ 0x80731ADC
    *(0x14 + r1) = r29; // stw @ 0x80731AE0
    r29 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x80731AE8
    r30 = r4 + 8; // 0x80731AEC
    r3 = *(0 + r30); // lwz @ 0x80731AF0
    if (==) goto 0x0x80731b4c;
    r3 = r3 + 0x74; // 0x80731AFC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80731b14;
    /* li r3, 0 */ // 0x80731B0C
    /* b 0x80731b18 */ // 0x80731B10
    r3 = *(0xc + r3); // lwz @ 0x80731B14
    /* li r0, 0 */ // 0x80731B1C
    if (==) goto 0x0x80731b2c;
    if (!=) goto 0x0x80731b30;
    /* li r0, 1 */ // 0x80731B2C
    if (==) goto 0x0x80731b4c;
    r3 = *(0 + r30); // lwz @ 0x80731B38
    r12 = *(0 + r3); // lwz @ 0x80731B3C
    r12 = *(0x18 + r12); // lwz @ 0x80731B40
    /* mtctr r12 */ // 0x80731B44
    /* bctrl  */ // 0x80731B48
    r31 = r31 + 1; // 0x80731B4C
    r30 = r30 + 4; // 0x80731B50
    if (<) goto 0x0x80731af0;
    r3 = *(0x530 + r29); // lwz @ 0x80731B5C
}