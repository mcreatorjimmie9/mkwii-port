/* Function at 0x808225B8, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_808225B8(int r3, int r4)
{
    r4 = *(0x20 + r3); // lhz @ 0x808225B8
    r0 = r4 + 1; // 0x808225BC
    *(0x20 + r3) = r0; // sth @ 0x808225C0
    /* clrlwi r0, r0, 0x10 */ // 0x808225C4
    if (<) goto 0x0x808225d8;
    /* li r0, 0 */ // 0x808225D0
    *(0x20 + r3) = r0; // sth @ 0x808225D4
    r3 = r4;
    return;
}