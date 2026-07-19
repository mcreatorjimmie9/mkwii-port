/* Function at 0x807C3ACC, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_807C3ACC(int r3, int r4, int r5, int r6, int r7)
{
    r6 = *(8 + r3); // lwz @ 0x807C3ACC
    r5 = r3;
    /* li r7, 0 */ // 0x807C3AD4
    /* b 0x807c3af0 */ // 0x807C3AD8
    r4 = *(0xc + r5); // lwz @ 0x807C3ADC
    r0 = r6 + r7; // 0x807C3AE0
    r5 = r5 + 4; // 0x807C3AE4
    r7 = r7 + 1; // 0x807C3AE8
    *(0x18 + r4) = r0; // stw @ 0x807C3AEC
    r0 = *(4 + r3); // lwz @ 0x807C3AF0
    if (<) goto 0x0x807c3adc;
    return;
}