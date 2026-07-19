/* Function at 0x8079DD9C, size=116 bytes */
/* Stack frame: 0 bytes */

int FUN_8079DD9C(int r3, int r4)
{
    r0 = *(0x40 + r3); // lwz @ 0x8079DD9C
    if (==) goto 0x0x8079ddb0;
    if (!=) goto 0x0x8079de08;
    r0 = *(0x28 + r3); // lbz @ 0x8079DDB0
    /* mtctr r0 */ // 0x8079DDB4
    if (<=) goto 0x0x8079ddec;
    r4 = *(0x18 + r3); // lwz @ 0x8079DDC0
    r4 = *(0xdc + r4); // lwz @ 0x8079DDC4
    r4 = *(0 + r4); // lwz @ 0x8079DDC8
    r4 = *(4 + r4); // lwz @ 0x8079DDCC
    r0 = *(0xc + r4); // lwz @ 0x8079DDD0
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x8079DDD4
    if (==) goto 0x0x8079dde4;
    /* li r0, 1 */ // 0x8079DDDC
    /* b 0x8079ddf0 */ // 0x8079DDE0
    r3 = r3 + 4; // 0x8079DDE4
    if (counter-- != 0) goto 0x0x8079ddc0;
    /* li r0, 0 */ // 0x8079DDEC
    if (==) goto 0x0x8079de00;
    /* li r3, 1 */ // 0x8079DDF8
    return;
    /* li r3, 0 */ // 0x8079DE00
    return;
    /* li r3, 0 */ // 0x8079DE08
    return;
}