/* Function at 0x80666A54, size=72 bytes */
/* Stack frame: 0 bytes */

int FUN_80666A54(int r3, int r4, int r5, int r6, int r7)
{
    r0 = *(0x70 + r3); // lwz @ 0x80666A54
    /* li r7, 0 */ // 0x80666A58
    /* li r5, 0 */ // 0x80666A5C
    /* mtctr r0 */ // 0x80666A60
    if (<=) goto 0x0x80666a94;
    r6 = *(0x6c + r3); // lwz @ 0x80666A6C
    /* lwzx r0, r6, r5 */ // 0x80666A70
    if (!=) goto 0x0x80666a88;
    /* mulli r0, r7, 0x1c */ // 0x80666A7C
    r3 = r6 + r0; // 0x80666A80
    return;
    r5 = r5 + 0x1c; // 0x80666A88
    r7 = r7 + 1; // 0x80666A8C
    if (counter-- != 0) goto 0x0x80666a6c;
    /* li r3, 0 */ // 0x80666A94
    return;
}