/* Function at 0x805B95A4, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_805B95A4(int r3, int r4, int r5, int r6)
{
    /* li r0, 0xd */ // 0x805B95A4
    /* li r6, 0 */ // 0x805B95A8
    /* li r4, 0 */ // 0x805B95AC
    /* mtctr r0 */ // 0x805B95B0
    r5 = r3 + r6; // 0x805B95B4
    r6 = r6 + 1; // 0x805B95B8
    *(4 + r5) = r4; // stb @ 0x805B95BC
    *(0x11 + r5) = r4; // stb @ 0x805B95C0
    *(0x1e + r5) = r4; // stb @ 0x805B95C4
    if (counter-- != 0) goto 0x0x805b95b4;
    return;
}