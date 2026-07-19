/* Function at 0x808A0278, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_808A0278(int r3, int r4)
{
    r12 = *(0 + r3); // lwz @ 0x808A0278
    /* li r4, 0 */ // 0x808A027C
    r12 = *(0x4c + r12); // lwz @ 0x808A0280
    /* mtctr r12 */ // 0x808A0284
    /* bctr  */ // 0x808A0288
}