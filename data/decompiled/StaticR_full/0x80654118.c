/* Function at 0x80654118, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_80654118(int r3, int r4, int r5)
{
    r0 = *(0x1dc + r3); // lwz @ 0x80654118
    /* li r5, 0 */ // 0x8065411C
    /* mtctr r0 */ // 0x80654120
    if (<=) goto 0x0x80654150;
    r0 = *(0x270 + r3); // lwz @ 0x8065412C
    r4 = r0 + r5; // 0x80654130
    r0 = *(0x174 + r4); // lwz @ 0x80654134
    if (<) goto 0x0x80654148;
    /* li r3, 0 */ // 0x80654140
    return;
    r5 = r5 + 0x178; // 0x80654148
    if (counter-- != 0) goto 0x0x8065412c;
    /* li r3, 1 */ // 0x80654150
    return;
}