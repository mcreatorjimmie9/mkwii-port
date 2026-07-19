/* Function at 0x806953A0, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_806953A0(int r3, int r4)
{
    if (>) goto 0x0x806955f0;
    /* lis r4, 0 */ // 0x806953A8
    /* slwi r0, r3, 2 */ // 0x806953AC
    r4 = r4 + 0; // 0x806953B0
    /* lwzx r4, r4, r0 */ // 0x806953B4
    /* mtctr r4 */ // 0x806953B8
    /* bctr  */ // 0x806953BC
    /* li r3, 6 */ // 0x806953C0
    return;
}