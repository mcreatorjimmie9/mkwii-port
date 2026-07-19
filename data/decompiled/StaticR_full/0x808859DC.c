/* Function at 0x808859DC, size=48 bytes */
/* Stack frame: 16 bytes */

void FUN_808859DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x808859E0
    r4 = *(0x144 + r3); // lha @ 0x808859E4
    /* lis r3, 0 */ // 0x808859E8
    *(8 + r1) = r0; // stw @ 0x808859EC
    /* xoris r0, r4, 0x8000 */ // 0x808859F0
    /* lfd f1, 0(r3) */ // 0x808859F4
    *(0xc + r1) = r0; // stw @ 0x808859F8
    /* lfd f0, 8(r1) */ // 0x808859FC
    /* fsubs f1, f0, f1 */ // 0x80885A00
    return;
}