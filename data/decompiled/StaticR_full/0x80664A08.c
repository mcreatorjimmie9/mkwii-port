/* Function at 0x80664A08, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_80664A08(int r3, int r4)
{
    if (>) goto 0x0x80664af8;
    /* lis r4, 0 */ // 0x80664A10
    /* slwi r0, r3, 2 */ // 0x80664A14
    r4 = r4 + 0; // 0x80664A18
    /* lwzx r4, r4, r0 */ // 0x80664A1C
    /* mtctr r4 */ // 0x80664A20
    /* bctr  */ // 0x80664A24
    /* li r3, 0x14b5 */ // 0x80664A28
    return;
}