/* Function at 0x808A028C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_808A028C(int r3)
{
    r12 = *(0 + r3); // lwz @ 0x808A028C
    r12 = *(0x4c + r12); // lwz @ 0x808A0290
    /* mtctr r12 */ // 0x808A0294
    /* bctr  */ // 0x808A0298
}