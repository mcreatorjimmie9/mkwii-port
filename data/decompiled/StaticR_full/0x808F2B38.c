/* Function at 0x808F2B38, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_808F2B38(int r3, int r4)
{
    if (>) goto 0x0x808f2cf0;
    /* lis r4, 0 */ // 0x808F2B40
    /* slwi r0, r3, 2 */ // 0x808F2B44
    r4 = r4 + 0; // 0x808F2B48
    /* lwzx r4, r4, r0 */ // 0x808F2B4C
    /* mtctr r4 */ // 0x808F2B50
    /* bctr  */ // 0x808F2B54
    /* li r3, 0xe */ // 0x808F2B58
    return;
}