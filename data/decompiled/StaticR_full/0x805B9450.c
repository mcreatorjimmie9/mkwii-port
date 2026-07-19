/* Function at 0x805B9450, size=56 bytes */
/* Stack frame: 0 bytes */

int FUN_805B9450(int r3, int r4, int r5, int r6)
{
    /* li r0, 0xd */ // 0x805B9450
    /* li r6, 0 */ // 0x805B9454
    /* li r4, 0 */ // 0x805B9458
    /* mtctr r0 */ // 0x805B945C
    r5 = r3 + r6; // 0x805B9460
    r6 = r6 + 1; // 0x805B9464
    *(0x11 + r5) = r4; // stb @ 0x805B9468
    *(0x1e + r5) = r4; // stb @ 0x805B946C
    *(0x2b + r5) = r4; // stb @ 0x805B9470
    *(0x38 + r5) = r4; // stb @ 0x805B9474
    *(0x45 + r5) = r4; // stb @ 0x805B9478
    *(0x52 + r5) = r4; // stb @ 0x805B947C
    if (counter-- != 0) goto 0x0x805b9460;
    return;
}