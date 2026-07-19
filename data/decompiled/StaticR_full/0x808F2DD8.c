/* Function at 0x808F2DD8, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_808F2DD8(int r3)
{
    r0 = r3 + -0x1e; // 0x808F2DD8
    if (>) goto 0x0x808f2e9c;
    /* lis r3, 0 */ // 0x808F2DE4
    /* slwi r0, r0, 2 */ // 0x808F2DE8
    r3 = r3 + 0; // 0x808F2DEC
    /* lwzx r3, r3, r0 */ // 0x808F2DF0
    /* mtctr r3 */ // 0x808F2DF4
    /* bctr  */ // 0x808F2DF8
    /* li r3, 9 */ // 0x808F2DFC
    return;
}