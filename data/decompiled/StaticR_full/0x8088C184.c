/* Function at 0x8088C184, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8088C184(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8088C190
    r31 = r3;
    r0 = *(0x132 + r3); // lha @ 0x8088C198
    if (!=) goto 0x0x8088c1b0;
    r4 = *(0x130 + r3); // lha @ 0x8088C1A4
    r0 = r4 + 1; // 0x8088C1A8
    *(0x130 + r3) = r0; // sth @ 0x8088C1AC
    r4 = *(0x130 + r3); // lha @ 0x8088C1B0
    r0 = *(0x134 + r3); // lha @ 0x8088C1B4
    if (!=) goto 0x0x8088c1cc;
    r4 = *(0x132 + r3); // lha @ 0x8088C1C0
    r0 = r4 + 1; // 0x8088C1C4
    *(0x132 + r3) = r0; // sth @ 0x8088C1C8
    r4 = *(0x132 + r3); // lha @ 0x8088C1CC
    r0 = *(0x136 + r3); // lha @ 0x8088C1D0
    if (<=) goto 0x0x8088c1e4;
    /* li r0, 0 */ // 0x8088C1DC
    *(0x132 + r3) = r0; // sth @ 0x8088C1E0
    r4 = *(0x130 + r3); // lha @ 0x8088C1E4
    r0 = *(0x134 + r3); // lha @ 0x8088C1E8
    if (<=) goto 0x0x8088c1fc;
    /* li r0, 0 */ // 0x8088C1F4
    *(0x130 + r3) = r0; // sth @ 0x8088C1F8
    r7 = *(0x130 + r3); // lha @ 0x8088C1FC
    /* lis r4, 0x4330 */ // 0x8088C200
    r6 = *(0x134 + r3); // lha @ 0x8088C204
    /* lis r5, 0 */ // 0x8088C208
    /* xoris r0, r7, 0x8000 */ // 0x8088C20C
    *(8 + r1) = r4; // stw @ 0x8088C210
    /* subf r6, r7, r6 */ // 0x8088C214
    /* lfd f4, 0(r5) */ // 0x8088C218
    /* xoris r5, r6, 0x8000 */ // 0x8088C21C
    *(0xc + r1) = r5; // stw @ 0x8088C220
    /* lfs f2, 0x140(r3) */ // 0x8088C224
    /* lfd f0, 8(r1) */ // 0x8088C228
    *(0x14 + r1) = r0; // stw @ 0x8088C22C
    /* fsubs f3, f0, f4 */ // 0x8088C230
    /* lfs f0, 0x144(r3) */ // 0x8088C234
    *(0x10 + r1) = r4; // stw @ 0x8088C238
    /* lfd f1, 0x10(r1) */ // 0x8088C23C
    /* fmuls f2, f2, f3 */ // 0x8088C240
    /* fsubs f1, f1, f4 */ // 0x8088C244
    /* stfs f2, 0x138(r3) */ // 0x8088C248
    /* fmuls f1, f0, f1 */ // 0x8088C24C
    FUN_805E3430(); // bl 0x805E3430
}