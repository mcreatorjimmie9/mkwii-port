/* Function at 0x8067FA20, size=140 bytes */
/* Stack frame: 0 bytes */

int FUN_8067FA20(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* li r0, 5 */ // 0x8067FA20
    /* li r9, 0 */ // 0x8067FA24
    /* li r4, 0 */ // 0x8067FA28
    /* li r6, 1 */ // 0x8067FA2C
    /* mtctr r0 */ // 0x8067FA30
    r0 = *(0x58 + r3); // lwz @ 0x8067FA34
    r5 = r6 << r9; // slw
    /* and. r0, r0, r5 */ // 0x8067FA3C
    if (==) goto 0x0x8067fa98;
    r8 = r3 + r4; // 0x8067FA44
    /* li r7, 0 */ // 0x8067FA48
    r0 = *(0xc + r8); // lwz @ 0x8067FA4C
    /* li r5, 0 */ // 0x8067FA50
    if (!=) goto 0x0x8067fa6c;
    r0 = *(4 + r8); // lwz @ 0x8067FA5C
    if (==) goto 0x0x8067fa6c;
    /* li r5, 1 */ // 0x8067FA68
    if (==) goto 0x0x8067fa88;
    r5 = *(4 + r8); // lwz @ 0x8067FA74
    r0 = *(8 + r8); // lwz @ 0x8067FA78
    if (!=) goto 0x0x8067fa88;
    /* li r7, 1 */ // 0x8067FA84
    if (!=) goto 0x0x8067fa98;
    r3 = r9;
    return;
    r9 = r9 + 1; // 0x8067FA98
    r4 = r4 + 0x10; // 0x8067FA9C
    if (counter-- != 0) goto 0x0x8067fa34;
    /* li r3, -1 */ // 0x8067FAA4
    return;
}