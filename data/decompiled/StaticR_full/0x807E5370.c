/* Function at 0x807E5370, size=196 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E5370(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x807E537C
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807E5384
    r12 = *(0 + r3); // lwz @ 0x807E5388
    r12 = *(0x14 + r12); // lwz @ 0x807E538C
    /* mtctr r12 */ // 0x807E5390
    /* bctrl  */ // 0x807E5394
    /* lis r3, 0 */ // 0x807E5398
    /* lfs f1, 0xcc(r31) */ // 0x807E539C
    /* lfs f0, 0(r3) */ // 0x807E53A0
    r4 = r31 + 0x30; // 0x807E53A8
    r5 = r31 + 0xc8; // 0x807E53AC
    /* fsubs f0, f1, f0 */ // 0x807E53B0
    /* stfs f0, 0xcc(r31) */ // 0x807E53B4
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0xc0 + r31); // lwz @ 0x807E53BC
    r3 = *(0x2c + r31); // lhz @ 0x807E53C0
    /* addic. r0, r0, -1 */ // 0x807E53C4
    /* lfs f0, 0x10(r1) */ // 0x807E53C8
    /* lfs f1, 0xc(r1) */ // 0x807E53CC
    r3 = r3 | 1; // 0x807E53D0
    /* lfs f2, 8(r1) */ // 0x807E53D4
    /* stfs f2, 0x30(r31) */ // 0x807E53D8
    *(0x2c + r31) = r3; // sth @ 0x807E53DC
    /* stfs f1, 0x34(r31) */ // 0x807E53E0
    /* stfs f0, 0x38(r31) */ // 0x807E53E4
    *(0xc0 + r31) = r0; // stw @ 0x807E53E8
    if (!=) goto 0x0x807e53f8;
    /* li r0, 1 */ // 0x807E53F0
    *(0xc4 + r31) = r0; // stb @ 0x807E53F4
    /* lfs f1, 0xe8(r31) */ // 0x807E53F8
    /* lfs f0, 0xdc(r31) */ // 0x807E5400
    r4 = r31 + 0xe8; // 0x807E5404
    /* lfs f3, 0xec(r31) */ // 0x807E5408
    /* fadds f4, f1, f0 */ // 0x807E540C
    /* lfs f2, 0xe0(r31) */ // 0x807E5410
    /* lfs f1, 0xf0(r31) */ // 0x807E5414
    /* lfs f0, 0xe4(r31) */ // 0x807E5418
    /* fadds f2, f3, f2 */ // 0x807E541C
    /* stfs f4, 0xe8(r31) */ // 0x807E5420
    /* fadds f0, f1, f0 */ // 0x807E5424
    /* stfs f2, 0xec(r31) */ // 0x807E5428
    /* stfs f0, 0xf0(r31) */ // 0x807E542C
    FUN_805E3430(); // bl 0x805E3430
}