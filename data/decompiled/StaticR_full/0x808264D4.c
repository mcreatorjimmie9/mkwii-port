/* Function at 0x808264D4, size=108 bytes */
/* Stack frame: 16 bytes */

int FUN_808264D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    if (==) goto 0x0x80826534;
    if (==) goto 0x0x80826504;
    /* lfs f0, 0(r4) */ // 0x808264E8
    /* fctiwz f0, f0 */ // 0x808264EC
    /* stfd f0, 8(r1) */ // 0x808264F0
    r0 = *(0xc + r1); // lwz @ 0x808264F4
    /* slwi r0, r0, 6 */ // 0x808264F8
    *(0 + r3) = r0; // stb @ 0x808264FC
    /* b 0x80826534 */ // 0x80826500
    r6 = *(0 + r3); // lbz @ 0x80826504
    /* lis r0, 0x4330 */ // 0x80826508
    *(8 + r1) = r0; // stw @ 0x8082650C
    /* lis r5, 0 */ // 0x80826510
    /* extsb r0, r6 */ // 0x80826514
    /* lfd f1, 0(r5) */ // 0x80826518
    r0 = r0 >> 6; // srawi
    /* xoris r0, r0, 0x8000 */ // 0x80826520
    *(0xc + r1) = r0; // stw @ 0x80826524
    /* lfd f0, 8(r1) */ // 0x80826528
    /* fsubs f0, f0, f1 */ // 0x8082652C
    /* stfs f0, 0(r4) */ // 0x80826530
    r3 = r3 + 1; // 0x80826534
    return;
}