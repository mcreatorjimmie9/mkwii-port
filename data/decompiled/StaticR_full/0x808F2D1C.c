/* Function at 0x808F2D1C, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_808F2D1C(int r3, int r4)
{
    if (>) goto 0x0x808f2dac;
    /* lis r4, 0 */ // 0x808F2D24
    /* slwi r0, r3, 2 */ // 0x808F2D28
    r4 = r4 + 0; // 0x808F2D2C
    /* lwzx r4, r4, r0 */ // 0x808F2D30
    /* mtctr r4 */ // 0x808F2D34
    /* bctr  */ // 0x808F2D38
    /* li r3, 5 */ // 0x808F2D3C
    return;
}