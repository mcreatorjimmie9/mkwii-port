/* Function at 0x80660818, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_80660818(int r3)
{
    r0 = *(0x260 + r3); // lwz @ 0x80660818
    /* mtctr r0 */ // 0x8066081C
    if (<=) goto 0x0x80660844;
    r0 = *(0xc + r3); // lbz @ 0x80660828
    if (==) goto 0x0x8066083c;
    /* li r3, 1 */ // 0x80660834
    return;
    r3 = r3 + 0x10; // 0x8066083C
    if (counter-- != 0) goto 0x0x80660828;
    /* li r3, 0 */ // 0x80660844
    return;
}