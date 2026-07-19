/* Function at 0x806607C4, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_806607C4(int r3, int r4)
{
    if (<) goto 0x0x806607e4;
    r0 = *(0x260 + r3); // lwz @ 0x806607CC
    if (>=) goto 0x0x806607e4;
    /* slwi r0, r4, 4 */ // 0x806607D8
    /* lwzx r3, r3, r0 */ // 0x806607DC
    return;
    /* li r3, 0 */ // 0x806607E4
    return;
}