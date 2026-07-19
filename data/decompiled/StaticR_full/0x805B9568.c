/* Function at 0x805B9568, size=60 bytes */
/* Stack frame: 0 bytes */

int FUN_805B9568(int r3, int r4, int r5, int r8)
{
    /* li r0, 0xd */ // 0x805B9568
    *(0x2c + r3) = r4; // sth @ 0x805B956C
    /* li r8, 0 */ // 0x805B9570
    /* li r4, 0 */ // 0x805B9574
    *(0x2e + r3) = r5; // sth @ 0x805B9578
    *(0x30 + r3) = r6; // sth @ 0x805B957C
    *(0x32 + r3) = r7; // stb @ 0x805B9580
    /* mtctr r0 */ // 0x805B9584
    r5 = r3 + r8; // 0x805B9588
    r8 = r8 + 1; // 0x805B958C
    *(4 + r5) = r4; // stb @ 0x805B9590
    *(0x11 + r5) = r4; // stb @ 0x805B9594
    *(0x1e + r5) = r4; // stb @ 0x805B9598
    if (counter-- != 0) goto 0x0x805b9588;
    return;
}