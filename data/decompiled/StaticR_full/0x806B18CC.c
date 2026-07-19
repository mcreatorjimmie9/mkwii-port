/* Function at 0x806B18CC, size=80 bytes */
/* Stack frame: 0 bytes */

void FUN_806B18CC(int r3, int r4)
{
    /* lis r4, 0 */ // 0x806B18CC
    r4 = *(0 + r4); // lwz @ 0x806B18D0
    r4 = *(0 + r4); // lwz @ 0x806B18D4
    r0 = *(0 + r4); // lwz @ 0x806B18D8
    if (<) goto 0x0x806b18ec;
    if (<=) goto 0x0x806b190c;
    if (<) goto 0x0x806b18fc;
    if (<=) goto 0x0x806b190c;
    if (==) goto 0x0x806b190c;
    if (!=) goto 0x0x806b1914;
    r3 = *(0x288 + r3); // lwz @ 0x806B190C
    return;
    /* li r3, 0 */ // 0x806B1914
    return;
}