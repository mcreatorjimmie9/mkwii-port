/* Function at 0x8065C1A0, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_8065C1A0(int r3)
{
    r0 = r3 + 2; // 0x8065C1A0
    if (>) goto 0x0x8065c2ac;
    /* lis r3, 0 */ // 0x8065C1AC
    /* slwi r0, r0, 2 */ // 0x8065C1B0
    r3 = r3 + 0; // 0x8065C1B4
    /* lwzx r3, r3, r0 */ // 0x8065C1B8
    /* mtctr r3 */ // 0x8065C1BC
    /* bctr  */ // 0x8065C1C0
    /* li r3, 0xa */ // 0x8065C1C4
    return;
}