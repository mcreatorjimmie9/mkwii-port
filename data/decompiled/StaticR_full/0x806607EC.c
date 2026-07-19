/* Function at 0x806607EC, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_806607EC(int r3, int r4)
{
    if (<) goto 0x0x80660810;
    r0 = *(0x260 + r3); // lwz @ 0x806607F4
    if (>=) goto 0x0x80660810;
    /* slwi r0, r4, 4 */ // 0x80660800
    r3 = r3 + r0; // 0x80660804
    r3 = *(0xc + r3); // lbz @ 0x80660808
    return;
    /* li r3, 0 */ // 0x80660810
    return;
}