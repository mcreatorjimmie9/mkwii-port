/* Function at 0x806EC5B4, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_806EC5B4(int r3)
{
    r0 = *(0x3d + r3); // lbz @ 0x806EC5B4
    if (!=) goto 0x0x806ec5cc;
    r3 = *(0x3c + r3); // lbz @ 0x806EC5C0
    /* extsb r3, r3 */ // 0x806EC5C4
    return;
    /* li r3, -1 */ // 0x806EC5CC
    return;
}