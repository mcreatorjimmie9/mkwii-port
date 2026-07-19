/* Function at 0x806844E8, size=168 bytes */
/* Stack frame: 0 bytes */

void FUN_806844E8(int r3)
{
    r0 = *(0x14 + r3); // lbz @ 0x806844E8
    if (==) goto 0x0x806844fc;
    /* li r3, 0 */ // 0x806844F4
    return;
    r0 = *(8 + r3); // lwz @ 0x806844FC
    if (==) goto 0x0x80684510;
    /* li r3, 1 */ // 0x80684508
    return;
    r0 = *(0 + r3); // lbz @ 0x80684510
    if (==) goto 0x0x80684524;
    /* li r3, 1 */ // 0x8068451C
    return;
    r0 = *(1 + r3); // lbz @ 0x80684524
    if (==) goto 0x0x80684538;
    /* li r3, 1 */ // 0x80684530
    return;
    r0 = *(2 + r3); // lbz @ 0x80684538
    if (==) goto 0x0x8068454c;
    /* li r3, 1 */ // 0x80684544
    return;
    r0 = *(3 + r3); // lbz @ 0x8068454C
    if (==) goto 0x0x80684560;
    /* li r3, 1 */ // 0x80684558
    return;
    r0 = *(4 + r3); // lbz @ 0x80684560
    if (==) goto 0x0x80684574;
    /* li r3, 1 */ // 0x8068456C
    return;
    r0 = *(5 + r3); // lbz @ 0x80684574
    if (==) goto 0x0x80684588;
    /* li r3, 1 */ // 0x80684580
    return;
    /* li r3, 0 */ // 0x80684588
    return;
}