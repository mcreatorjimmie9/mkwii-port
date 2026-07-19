/* Function at 0x807E9500, size=324 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807E9500(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807E9510
    r31 = r31 + 0; // 0x807E9514
    *(0x28 + r1) = r30; // stw @ 0x807E9518
    *(0x24 + r1) = r29; // stw @ 0x807E951C
    r29 = r3;
    r0 = *(0xd0 + r3); // lbz @ 0x807E9524
    if (==) goto 0x0x807e9554;
    r0 = *(0xcc + r3); // lwz @ 0x807E9530
    /* addic. r0, r0, -1 */ // 0x807E9534
    *(0xcc + r3) = r0; // stw @ 0x807E9538
    if (!=) goto 0x0x807e9628;
    /* li r4, 1 */ // 0x807E9540
    /* li r0, 0 */ // 0x807E9544
    *(0xbc + r3) = r4; // stw @ 0x807E9548
    *(0xd8 + r3) = r0; // stb @ 0x807E954C
    /* b 0x807e9628 */ // 0x807E9550
    /* lfs f1, 0x30(r31) */ // 0x807E9554
    r3 = r3 + 0x30; // 0x807E9558
    FUN_8081269C(r3); // bl 0x8081269C
    if (<) goto 0x0x807e9628;
    /* lis r5, 0 */ // 0x807E9568
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807E9570
    FUN_8061D97C(r5, r4); // bl 0x8061D97C
    r0 = *(0xb4 + r29); // lwz @ 0x807E9578
    /* li r5, 1 */ // 0x807E957C
    /* li r4, 0 */ // 0x807E9580
    *(0xf0 + r29) = r3; // stw @ 0x807E9584
    *(0xbc + r29) = r5; // stw @ 0x807E958C
    *(0xd8 + r29) = r4; // stb @ 0x807E9590
    if (>) goto 0x0x807e95ac;
    r12 = *(0xb0 + r29); // lwz @ 0x807E9598
    r3 = r29 + 0xb0; // 0x807E959C
    r12 = *(0x18 + r12); // lwz @ 0x807E95A0
    /* mtctr r12 */ // 0x807E95A4
    /* bctrl  */ // 0x807E95A8
    r0 = *(0xb4 + r29); // lwz @ 0x807E95AC
    r30 = *(0xb8 + r29); // lwz @ 0x807E95B0
    if (>) goto 0x0x807e95d0;
    r12 = *(0xb0 + r29); // lwz @ 0x807E95BC
    r3 = r29 + 0xb0; // 0x807E95C0
    r12 = *(0x18 + r12); // lwz @ 0x807E95C4
    /* mtctr r12 */ // 0x807E95C8
    /* bctrl  */ // 0x807E95CC
    /* lfs f2, 0x24(r31) */ // 0x807E95D0
    /* lis r10, 0 */ // 0x807E95D4
    /* lfs f0, 0x1c(r31) */ // 0x807E95D8
    /* li r9, 0xc */ // 0x807E95DC
    /* fctiwz f3, f2 */ // 0x807E95E0
    /* lfs f1, 0x20(r31) */ // 0x807E95E4
    /* fctiwz f0, f0 */ // 0x807E95E8
    r3 = *(0xb8 + r29); // lwz @ 0x807E95EC
    /* fctiwz f2, f1 */ // 0x807E95F0
    /* stfd f3, 8(r1) */ // 0x807E95F4
    /* stfd f2, 0x10(r1) */ // 0x807E95F8
    r3 = *(0 + r3); // lwz @ 0x807E95FC
    /* stfd f0, 0x18(r1) */ // 0x807E9600
    r4 = *(0 + r30); // lwz @ 0x807E9604
    r5 = r3 + 0x30; // 0x807E9608
    /* lfs f1, 0x30(r31) */ // 0x807E960C
    r8 = *(0xc + r1); // lwz @ 0x807E9610
    r4 = r4 + 0x30; // 0x807E9614
    r7 = *(0x14 + r1); // lwz @ 0x807E9618
    r6 = *(0x1c + r1); // lwz @ 0x807E961C
    r3 = *(0 + r10); // lwz @ 0x807E9620
    FUN_80818D00(r4); // bl 0x80818D00
    r0 = *(0x34 + r1); // lwz @ 0x807E9628
    r31 = *(0x2c + r1); // lwz @ 0x807E962C
    r30 = *(0x28 + r1); // lwz @ 0x807E9630
    r29 = *(0x24 + r1); // lwz @ 0x807E9634
    return;
}