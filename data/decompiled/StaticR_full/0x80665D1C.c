/* Function at 0x80665D1C, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_80665D1C(int r3, int r5)
{
    r3 = *(0x14 + r3); // lwz @ 0x80665D1C
    /* li r5, 1 */ // 0x80665D20
    r12 = *(0 + r3); // lwz @ 0x80665D24
    r12 = *(0x3c + r12); // lwz @ 0x80665D28
    /* mtctr r12 */ // 0x80665D2C
    /* bctr  */ // 0x80665D30
}