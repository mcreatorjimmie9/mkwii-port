/* Function at 0x806598EC, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_806598EC(int r3)
{
    r0 = *(0x3758 + r3); // lbz @ 0x806598EC
    /* bnelr  */ // 0x806598F4
    /* li r0, 1 */ // 0x806598F8
    *(0x3758 + r3) = r0; // stb @ 0x806598FC
    r12 = *(0x3750 + r3); // lwzu @ 0x80659900
    r12 = *(8 + r12); // lwz @ 0x80659904
    /* mtctr r12 */ // 0x80659908
    /* bctr  */ // 0x8065990C
}