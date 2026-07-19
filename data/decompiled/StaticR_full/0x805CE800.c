/* Function at 0x805CE800, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805CE800(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805CE808
    *(0x14 + r1) = r0; // stw @ 0x805CE80C
    r3 = *(0 + r3); // lwz @ 0x805CE810
    if (==) goto 0x0x805ce834;
    if (==) goto 0x0x805ce834;
    r12 = *(0 + r3); // lwz @ 0x805CE820
    /* li r4, 1 */ // 0x805CE824
    r12 = *(8 + r12); // lwz @ 0x805CE828
    /* mtctr r12 */ // 0x805CE82C
    /* bctrl  */ // 0x805CE830
    /* lis r3, 0 */ // 0x805CE834
    /* li r0, 0 */ // 0x805CE838
    *(0 + r3) = r0; // stw @ 0x805CE83C
    r0 = *(0x14 + r1); // lwz @ 0x805CE840
    return;
}