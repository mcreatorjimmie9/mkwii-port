/* Function at 0x808CF8A4, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_808CF8A4(int r3)
{
    r0 = r3 + -0x1e; // 0x808CF8A4
    if (>) goto 0x0x808cf8d0;
    /* lis r3, 0 */ // 0x808CF8B0
    /* slwi r0, r0, 2 */ // 0x808CF8B4
    r3 = r3 + 0; // 0x808CF8B8
    /* lwzx r3, r3, r0 */ // 0x808CF8BC
    /* mtctr r3 */ // 0x808CF8C0
    /* bctr  */ // 0x808CF8C4
    /* li r3, 1 */ // 0x808CF8C8
    return;
}