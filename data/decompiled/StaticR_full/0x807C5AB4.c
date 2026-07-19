/* Function at 0x807C5AB4, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807C5AB4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x807C5AC8
    *(0x14 + r1) = r29; // stw @ 0x807C5ACC
    r29 = r3;
    r31 = r29;
    /* b 0x807c5af8 */ // 0x807C5AD8
    r3 = *(0xe8 + r31); // lwz @ 0x807C5ADC
    r12 = *(0 + r3); // lwz @ 0x807C5AE0
    r12 = *(0x10 + r12); // lwz @ 0x807C5AE4
    /* mtctr r12 */ // 0x807C5AE8
    /* bctrl  */ // 0x807C5AEC
    r31 = r31 + 8; // 0x807C5AF0
    r30 = r30 + 1; // 0x807C5AF4
    r0 = *(0x178 + r29); // lwz @ 0x807C5AF8
    if (<) goto 0x0x807c5adc;
    r31 = r29;
    /* li r30, 0 */ // 0x807C5B08
    /* b 0x807c5b2c */ // 0x807C5B0C
    r3 = *(0x148 + r31); // lwz @ 0x807C5B10
    r12 = *(0 + r3); // lwz @ 0x807C5B14
    r12 = *(0x10 + r12); // lwz @ 0x807C5B18
    /* mtctr r12 */ // 0x807C5B1C
    /* bctrl  */ // 0x807C5B20
    r31 = r31 + 8; // 0x807C5B24
    r30 = r30 + 1; // 0x807C5B28
    r0 = *(0x17c + r29); // lwz @ 0x807C5B2C
    if (<) goto 0x0x807c5b10;
    r0 = *(0x24 + r1); // lwz @ 0x807C5B38
    r31 = *(0x1c + r1); // lwz @ 0x807C5B3C
    r30 = *(0x18 + r1); // lwz @ 0x807C5B40
    r29 = *(0x14 + r1); // lwz @ 0x807C5B44
    return;
}