/* Function at 0x807EDC3C, size=72 bytes */
/* Stack frame: 16 bytes */

int FUN_807EDC3C(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807EDC44
    r12 = *(0 + r3); // lwz @ 0x807EDC48
    r12 = *(0x24 + r12); // lwz @ 0x807EDC4C
    /* mtctr r12 */ // 0x807EDC50
    /* bctrl  */ // 0x807EDC54
    /* clrlwi r0, r3, 0x10 */ // 0x807EDC58
    /* lis r3, 0 */ // 0x807EDC5C
    r3 = r3 + 0; // 0x807EDC64
    if (!=) goto 0x0x807edc74;
    /* lis r3, 0 */ // 0x807EDC6C
    r3 = r3 + 0; // 0x807EDC70
    r0 = *(0x14 + r1); // lwz @ 0x807EDC74
    return;
}