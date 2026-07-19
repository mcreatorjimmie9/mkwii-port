/* Function at 0x8064ED7C, size=132 bytes */
/* Stack frame: 32 bytes */

void FUN_8064ED7C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* li r4, -1 */ // 0x8064ED80
    r0 = *(4 + r3); // lbz @ 0x8064ED84
    *(8 + r3) = r4; // stw @ 0x8064ED88
    if (==) goto 0x0x8064edf8;
    /* lis r4, 0 */ // 0x8064ED94
    /* lfs f2, 0(r3) */ // 0x8064ED98
    /* lfs f1, 0(r4) */ // 0x8064ED9C
    /* fctiwz f0, f2 */ // 0x8064EDA0
    /* fsubs f1, f2, f1 */ // 0x8064EDA4
    /* stfd f0, 8(r1) */ // 0x8064EDA8
    /* fctiwz f0, f1 */ // 0x8064EDAC
    r4 = *(0xc + r1); // lwz @ 0x8064EDB0
    /* stfs f1, 0(r3) */ // 0x8064EDB4
    /* stfd f0, 0x10(r1) */ // 0x8064EDB8
    r0 = *(0x14 + r1); // lwz @ 0x8064EDBC
    if (==) goto 0x0x8064edd4;
    /* stfd f0, 0x10(r1) */ // 0x8064EDC8
    r0 = *(0x14 + r1); // lwz @ 0x8064EDCC
    *(8 + r3) = r0; // stw @ 0x8064EDD0
    /* lis r4, 0 */ // 0x8064EDD4
    /* lfs f1, 0(r3) */ // 0x8064EDD8
    /* lfs f0, 0(r4) */ // 0x8064EDDC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8064EDE0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8064EDE4
    if (!=) goto 0x0x8064edf8;
    /* li r0, 0 */ // 0x8064EDEC
    /* stfs f0, 0(r3) */ // 0x8064EDF0
    *(4 + r3) = r0; // stb @ 0x8064EDF4
    return;
}