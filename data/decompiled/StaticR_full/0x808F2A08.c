/* Function at 0x808F2A08, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_808F2A08(int r3, int r4)
{
    if (>) goto 0x0x808f2b30;
    /* lis r4, 0 */ // 0x808F2A10
    /* slwi r0, r3, 2 */ // 0x808F2A14
    r4 = r4 + 0; // 0x808F2A18
    /* lwzx r4, r4, r0 */ // 0x808F2A1C
    /* mtctr r4 */ // 0x808F2A20
    /* bctr  */ // 0x808F2A24
    /* li r3, 0x12c0 */ // 0x808F2A28
    return;
}