/* Function at 0x80659960, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_80659960(int r3)
{
    r0 = *(0x3858 + r3); // lbz @ 0x80659960
    /* bnelr  */ // 0x80659968
    /* li r0, 1 */ // 0x8065996C
    *(0x3858 + r3) = r0; // stb @ 0x80659970
    r12 = *(0x3850 + r3); // lwzu @ 0x80659974
    r12 = *(8 + r12); // lwz @ 0x80659978
    /* mtctr r12 */ // 0x8065997C
    /* bctr  */ // 0x80659980
}