/* Function at 0x808032B4, size=152 bytes */
/* Stack frame: 16 bytes */

int FUN_808032B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808032BC
    r0 = *(0xb4 + r3); // lwz @ 0x808032C0
    if (==) goto 0x0x808032e0;
    if (==) goto 0x0x808032ec;
    if (==) goto 0x0x808032f8;
    /* b 0x80803304 */ // 0x808032DC
    /* lis r3, 0 */ // 0x808032E0
    r3 = r3 + 0; // 0x808032E4
    /* b 0x8080333c */ // 0x808032E8
    /* lis r3, 0 */ // 0x808032EC
    r3 = r3 + 0; // 0x808032F0
    /* b 0x8080333c */ // 0x808032F4
    /* lis r3, 0 */ // 0x808032F8
    r3 = r3 + 0; // 0x808032FC
    /* b 0x8080333c */ // 0x80803300
    r12 = *(0 + r3); // lwz @ 0x80803304
    r12 = *(0x24 + r12); // lwz @ 0x80803308
    /* mtctr r12 */ // 0x8080330C
    /* bctrl  */ // 0x80803310
    /* lis r4, 0 */ // 0x80803314
    r0 = r3 rlwinm 1; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8080331C
    r4 = *(4 + r3); // lwz @ 0x80803320
    r3 = *(0xc + r4); // lwz @ 0x80803324
    r4 = *(8 + r4); // lwz @ 0x80803328
    /* lhax r0, r3, r0 */ // 0x8080332C
    /* mulli r0, r0, 0x74 */ // 0x80803330
    r3 = r4 + r0; // 0x80803334
    r3 = r3 + 0x22; // 0x80803338
    r0 = *(0x14 + r1); // lwz @ 0x8080333C
    return;
}