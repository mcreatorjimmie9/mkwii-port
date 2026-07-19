/* Function at 0x806CC3EC, size=572 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_806CC3EC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806CC3F4
    /* li r5, 0 */ // 0x806CC3F8
    *(0x14 + r1) = r0; // stw @ 0x806CC3FC
    /* li r0, 4 */ // 0x806CC400
    /* lfs f0, 0(r4) */ // 0x806CC404
    *(0xc + r1) = r31; // stw @ 0x806CC408
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x806CC410
    /* lis r30, 0 */ // 0x806CC414
    *(0x54 + r3) = r5; // stw @ 0x806CC418
    *(0x58 + r3) = r0; // stw @ 0x806CC41C
    *(0x5c + r3) = r5; // stb @ 0x806CC420
    *(0x5d + r3) = r5; // stb @ 0x806CC424
    *(0x60 + r3) = r5; // stw @ 0x806CC428
    *(0x64 + r3) = r0; // stw @ 0x806CC42C
    *(0x68 + r3) = r5; // stb @ 0x806CC430
    *(0x69 + r3) = r5; // stb @ 0x806CC434
    *(0x6c + r3) = r5; // stw @ 0x806CC438
    *(0x70 + r3) = r0; // stw @ 0x806CC43C
    *(0x74 + r3) = r5; // stb @ 0x806CC440
    *(0x75 + r3) = r5; // stb @ 0x806CC444
    *(0x78 + r3) = r5; // stw @ 0x806CC448
    *(0x7c + r3) = r0; // stw @ 0x806CC44C
    *(0x80 + r3) = r5; // stb @ 0x806CC450
    *(0x81 + r3) = r5; // stb @ 0x806CC454
    /* stfs f0, 0x88(r3) */ // 0x806CC458
    *(0x90 + r3) = r5; // stb @ 0x806CC45C
    r3 = *(0 + r30); // lwz @ 0x806CC460
    r3 = *(0 + r3); // lwz @ 0x806CC464
    r3 = *(0 + r3); // lwz @ 0x806CC468
    FUN_80694774(); // bl 0x80694774
    if (==) goto 0x0x806cc4d0;
    r3 = *(0 + r30); // lwz @ 0x806CC478
    r3 = *(0 + r3); // lwz @ 0x806CC47C
    r3 = *(0 + r3); // lwz @ 0x806CC480
    FUN_80694774(); // bl 0x80694774
    if (==) goto 0x0x806cc4d0;
    /* li r0, 1 */ // 0x806CC490
    *(0x90 + r31) = r0; // stb @ 0x806CC494
    r3 = r31 + 0x44; // 0x806CC498
    /* li r4, 0 */ // 0x806CC49C
    r12 = *(0x44 + r31); // lwz @ 0x806CC4A0
    /* li r5, 0 */ // 0x806CC4A4
    r12 = *(0x10 + r12); // lwz @ 0x806CC4A8
    /* mtctr r12 */ // 0x806CC4AC
    /* bctrl  */ // 0x806CC4B0
    r3 = r31;
    r4 = r31 + 0x44; // 0x806CC4B8
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806CC4C4
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    /* b 0x806cc6a8 */ // 0x806CC4CC
    /* lis r3, 0 */ // 0x806CC4D0
    r0 = *(0 + r3); // lwz @ 0x806CC4D4
    if (==) goto 0x0x806cc66c;
    /* lis r3, 0 */ // 0x806CC4E0
    r3 = *(0 + r3); // lwz @ 0x806CC4E4
    r3 = *(0 + r3); // lwz @ 0x806CC4E8
    r0 = *(0 + r3); // lwz @ 0x806CC4EC
    if (==) goto 0x0x806cc5bc;
    if (>=) goto 0x0x806cc554;
    if (==) goto 0x0x806cc5ac;
    if (>=) goto 0x0x806cc538;
    if (>=) goto 0x0x806cc524;
    if (>=) goto 0x0x806cc5bc;
    if (>=) goto 0x0x806cc5a4;
    /* b 0x806cc5bc */ // 0x806CC520
    if (>=) goto 0x0x806cc5a4;
    if (>=) goto 0x0x806cc5b4;
    /* b 0x806cc5a4 */ // 0x806CC534
    if (==) goto 0x0x806cc5b4;
    if (>=) goto 0x0x806cc5a4;
    if (==) goto 0x0x806cc5ac;
    if (>=) goto 0x0x806cc5bc;
    /* b 0x806cc5a4 */ // 0x806CC550
    if (==) goto 0x0x806cc5bc;
    if (>=) goto 0x0x806cc588;
    if (>=) goto 0x0x806cc57c;
    if (>=) goto 0x0x806cc5ac;
    if (>=) goto 0x0x806cc5a4;
    /* b 0x806cc5ac */ // 0x806CC578
    if (>=) goto 0x0x806cc5ac;
    /* b 0x806cc5bc */ // 0x806CC584
    if (>=) goto 0x0x806cc59c;
    if (>=) goto 0x0x806cc5bc;
    /* b 0x806cc5a4 */ // 0x806CC598
    if (>=) goto 0x0x806cc5bc;
    /* li r3, 1 */ // 0x806CC5A4
    /* b 0x806cc5c0 */ // 0x806CC5A8
    /* li r3, 2 */ // 0x806CC5AC
    /* b 0x806cc5c0 */ // 0x806CC5B0
    FUN_808CFA50(r3, r3); // bl 0x808CFA50
    /* b 0x806cc5c0 */ // 0x806CC5B8
    /* li r3, 0 */ // 0x806CC5BC
    *(0x84 + r31) = r3; // stb @ 0x806CC5C0
    FUN_805ABAFC(r3); // bl 0x805ABAFC
    /* li r4, 0 */ // 0x806CC5C8
    r3 = r3 + 0xc94; // 0x806CC5CC
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    FUN_805ABAFC(r4, r3); // bl 0x805ABAFC
    /* li r4, 3 */ // 0x806CC5D8
    r3 = r3 + 0xc94; // 0x806CC5DC
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806CC5E4
    r3 = *(0 + r3); // lwz @ 0x806CC5E8
    r3 = *(0 + r3); // lwz @ 0x806CC5EC
    r0 = *(0 + r3); // lwz @ 0x806CC5F0
    if (<) goto 0x0x806cc61c;
    if (>) goto 0x0x806cc61c;
    /* lis r3, 0 */ // 0x806CC604
    r4 = *(0x84 + r31); // lbz @ 0x806CC608
    r3 = *(0 + r3); // lwz @ 0x806CC60C
    /* li r5, 0 */ // 0x806CC610
    FUN_805D0E30(r3, r5); // bl 0x805D0E30
    /* b 0x806cc630 */ // 0x806CC618
    /* lis r3, 0 */ // 0x806CC61C
    r4 = *(0x84 + r31); // lbz @ 0x806CC620
    r3 = *(0 + r3); // lwz @ 0x806CC624
}