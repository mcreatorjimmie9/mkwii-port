/* Function at 0x80654158, size=96 bytes */
/* Stack frame: 0 bytes */

int FUN_80654158(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    r0 = *(0x1dc + r3); // lwz @ 0x80654158
    /* li r4, 0 */ // 0x8065415C
    /* li r9, 0 */ // 0x80654160
    /* li r8, 0 */ // 0x80654164
    /* li r7, 0xa */ // 0x80654168
    /* mtctr r0 */ // 0x8065416C
    if (<=) goto 0x0x806541b0;
    r0 = *(0x270 + r3); // lwz @ 0x80654178
    r6 = r4 * r7; // 0x8065417C
    r5 = r0 + r8; // 0x80654180
    r5 = *(0x174 + r5); // lwz @ 0x80654184
    r0 = r9 * r7; // 0x80654188
    /* mulli r4, r4, 0xa */ // 0x80654190
    r9 = r6 + r0; // 0x80654194
    if (<) goto 0x0x806541a8;
    r0 = r5 >> 0x1f; // srawi
    /* addc r4, r4, r5 */ // 0x806541A0
    /* adde r9, r9, r0 */ // 0x806541A4
    r8 = r8 + 0x178; // 0x806541A8
    if (counter-- != 0) goto 0x0x80654178;
    r3 = r9;
    return;
}