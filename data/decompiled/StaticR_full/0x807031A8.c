/* Function at 0x807031A8, size=152 bytes */
/* Stack frame: 0 bytes */

int FUN_807031A8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    r0 = *(0x41f4 + r3); // lwz @ 0x807031A8
    if (!=) goto 0x0x80703238;
    r5 = r3 + 0x190; // 0x807031B4
    /* li r8, 0 */ // 0x807031B8
    /* li r0, 5 */ // 0x807031BC
    r6 = r5;
    r7 = r4;
    /* mtctr r0 */ // 0x807031C8
    r3 = *(2 + r6); // lhz @ 0x807031CC
    if (<) goto 0x0x80703208;
    if (>) goto 0x0x80703208;
    r3 = *(0 + r6); // lhz @ 0x807031E0
    if (<) goto 0x0x80703208;
    if (>) goto 0x0x80703208;
    r3 = *(0 + r6); // lhz @ 0x807031F4
    *(0 + r7) = r3; // sth @ 0x807031F8
    r3 = *(2 + r6); // lhz @ 0x807031FC
    *(2 + r7) = r3; // sth @ 0x80703200
    /* b 0x80703210 */ // 0x80703204
    /* li r3, 0 */ // 0x80703208
    return;
    r6 = r6 + 4; // 0x80703210
    r7 = r7 + 4; // 0x80703214
    if (counter-- != 0) goto 0x0x807031cc;
    r8 = r8 + 1; // 0x8070321C
    r4 = r4 + 0x14; // 0x80703220
    r5 = r5 + 0x14; // 0x80703228
    if (<) goto 0x0x807031c0;
    /* li r3, 1 */ // 0x80703230
    return;
    /* li r3, 0 */ // 0x80703238
    return;
}