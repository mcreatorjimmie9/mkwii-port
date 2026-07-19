/* Function at 0x80919460, size=248 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80919460(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 1 */ // 0x80919468
    *(0x88 + r1) = r30; // stw @ 0x80919474
    r30 = r3;
    *(0x84 + r1) = r29; // stw @ 0x8091947C
    r12 = *(0 + r3); // lwz @ 0x80919480
    r12 = *(0x68 + r12); // lwz @ 0x80919484
    /* mtctr r12 */ // 0x80919488
    /* bctrl  */ // 0x8091948C
    r0 = *(0xb0 + r30); // lwz @ 0x80919490
    /* lis r31, 0 */ // 0x80919494
    /* lfs f0, 0(r31) */ // 0x80919498
    /* li r8, 1 */ // 0x8091949C
    /* clrlwi r0, r0, 0x1f */ // 0x809194A0
    /* li r29, 0 */ // 0x809194A4
    /* xori r0, r0, 1 */ // 0x809194A8
    /* stfs f0, 0xc0(r30) */ // 0x809194AC
    /* lis r7, 0 */ // 0x809194B0
    /* lis r4, 0 */ // 0x809194B4
    /* stfs f0, 0xc4(r30) */ // 0x809194B8
    r6 = r7 + 0; // 0x809194BC
    /* lis r5, 0 */ // 0x809194C0
    *(0xd8 + r30) = r8; // stb @ 0x809194C8
    r4 = r4 + 0; // 0x809194CC
    *(0xd9 + r30) = r29; // stb @ 0x809194D0
    *(0xda + r30) = r0; // stb @ 0x809194D4
    /* lfs f0, 0(r7) */ // 0x809194D8
    /* stfs f0, 0xcc(r30) */ // 0x809194DC
    /* lfs f0, 4(r6) */ // 0x809194E0
    /* stfs f0, 0xd0(r30) */ // 0x809194E4
    /* lfs f0, 8(r6) */ // 0x809194E8
    /* stfs f0, 0xd4(r30) */ // 0x809194EC
    /* lfs f1, 0(r5) */ // 0x809194F0
    FUN_805A443C(); // bl 0x805A443C
    r6 = *(0xb0 + r30); // lwz @ 0x809194F8
    /* lis r5, 0x4330 */ // 0x809194FC
    /* lis r4, 0 */ // 0x80919500
    *(0x68 + r1) = r5; // stw @ 0x80919504
    r3 = r6 + 2; // 0x80919508
    r0 = r6 + 1; // 0x8091950C
    *(0x6c + r1) = r3; // stw @ 0x80919510
    /* lfd f1, 0(r4) */ // 0x80919518
    /* lfd f0, 0x68(r1) */ // 0x80919520
    *(0x74 + r1) = r0; // stw @ 0x80919524
    /* fsubs f3, f0, f1 */ // 0x80919528
    *(0x70 + r1) = r5; // stw @ 0x8091952C
    /* lfd f0, 0x70(r1) */ // 0x80919530
    *(0x7c + r1) = r6; // stw @ 0x80919534
    /* fsubs f2, f0, f1 */ // 0x80919538
    *(0x78 + r1) = r5; // stw @ 0x8091953C
    /* lfd f0, 0x78(r1) */ // 0x80919540
    /* stfs f2, 0x24(r1) */ // 0x80919544
    /* fsubs f0, f0, f1 */ // 0x80919548
    /* stfs f3, 0x28(r1) */ // 0x8091954C
    /* stfs f0, 0x20(r1) */ // 0x80919550
    FUN_805E3430(); // bl 0x805E3430
}