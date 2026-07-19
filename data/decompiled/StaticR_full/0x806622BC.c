/* Function at 0x806622BC, size=124 bytes */
/* Stack frame: 0 bytes */

int FUN_806622BC(int r3, int r4, int r5, int r6)
{
    /* lis r4, 0 */ // 0x806622BC
    /* li r0, 8 */ // 0x806622C0
    r4 = r4 + 0; // 0x806622C4
    /* li r6, 0 */ // 0x806622C8
    /* mtctr r0 */ // 0x806622CC
    r0 = *(0 + r4); // lwz @ 0x806622D0
    if (!=) goto 0x0x806622e4;
    r3 = r6;
    return;
    r0 = *(4 + r4); // lwz @ 0x806622E4
    if (!=) goto 0x0x806622f8;
    r3 = r6;
    return;
    r0 = *(8 + r4); // lwz @ 0x806622F8
    r5 = r4 + 8; // 0x806622FC
    if (!=) goto 0x0x80662310;
    r3 = r6;
    return;
    r0 = *(4 + r5); // lwz @ 0x80662310
    if (!=) goto 0x0x80662324;
    r3 = r6;
    return;
    r4 = r4 + 0x10; // 0x80662324
    r6 = r6 + 1; // 0x80662328
    if (counter-- != 0) goto 0x0x806622d0;
    /* li r3, -1 */ // 0x80662330
    return;
}