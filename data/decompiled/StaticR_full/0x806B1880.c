/* Function at 0x806B1880, size=60 bytes */
/* Stack frame: 0 bytes */

int FUN_806B1880(int r3)
{
    /* lis r3, 0 */ // 0x806B1880
    r3 = *(0 + r3); // lwz @ 0x806B1884
    r3 = *(0 + r3); // lwz @ 0x806B1888
    r3 = *(0 + r3); // lwz @ 0x806B188C
    r0 = r3 + -0x58; // 0x806B1890
    if (>) goto 0x0x806b18c4;
    /* lis r3, 0 */ // 0x806B189C
    /* slwi r0, r0, 2 */ // 0x806B18A0
    r3 = r3 + 0; // 0x806B18A4
    /* lwzx r3, r3, r0 */ // 0x806B18A8
    /* mtctr r3 */ // 0x806B18AC
    /* bctr  */ // 0x806B18B0
    /* li r3, 0 */ // 0x806B18B4
    return;
}