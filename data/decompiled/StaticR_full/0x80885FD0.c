/* Function at 0x80885FD0, size=48 bytes */
/* Stack frame: 16 bytes */

void FUN_80885FD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x80885FD4
    r4 = *(0x130 + r3); // lha @ 0x80885FD8
    /* lis r3, 0 */ // 0x80885FDC
    *(8 + r1) = r0; // stw @ 0x80885FE0
    /* xoris r0, r4, 0x8000 */ // 0x80885FE4
    /* lfd f1, 0(r3) */ // 0x80885FE8
    *(0xc + r1) = r0; // stw @ 0x80885FEC
    /* lfd f0, 8(r1) */ // 0x80885FF0
    /* fsubs f1, f0, f1 */ // 0x80885FF4
    return;
}