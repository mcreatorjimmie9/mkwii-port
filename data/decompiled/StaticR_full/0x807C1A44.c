/* Function at 0x807C1A44, size=84 bytes */
/* Stack frame: 32 bytes */

void FUN_807C1A44(int r4)
{
    /* Stack frame: -32(r1) */
    /* lfs f0, 0xc(r4) */ // 0x807C1A48
    /* fctiwz f0, f0 */ // 0x807C1A4C
    /* stfd f0, 8(r1) */ // 0x807C1A50
    r0 = *(0xc + r1); // lwz @ 0x807C1A54
    *(0xc + r3) = r0; // stw @ 0x807C1A58
    /* lfs f0, 0x10(r4) */ // 0x807C1A5C
    /* fctiwz f0, f0 */ // 0x807C1A60
    /* stfd f0, 0x10(r1) */ // 0x807C1A64
    r0 = *(0x14 + r1); // lwz @ 0x807C1A68
    *(0x10 + r3) = r0; // stw @ 0x807C1A6C
    if (<=) goto 0x0x807c1a80;
    /* li r0, 2 */ // 0x807C1A78
    /* b 0x807c1a8c */ // 0x807C1A7C
    if (>=) goto 0x0x807c1a8c;
    /* li r0, 0 */ // 0x807C1A88
    *(0x10 + r3) = r0; // stw @ 0x807C1A8C
    return;
}