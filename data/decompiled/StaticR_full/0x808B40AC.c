/* Function at 0x808B40AC, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_808B40AC(int r3, int r5)
{
    /* li r0, -1 */ // 0x808B40AC
    *(0x3e8 + r3) = r0; // stw @ 0x808B40B0
    /* li r5, 1 */ // 0x808B40B4
    r12 = *(0 + r3); // lwz @ 0x808B40B8
    r12 = *(0x1c + r12); // lwz @ 0x808B40BC
    /* mtctr r12 */ // 0x808B40C0
    /* bctr  */ // 0x808B40C4
}