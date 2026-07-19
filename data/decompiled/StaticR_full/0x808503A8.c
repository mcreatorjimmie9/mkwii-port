/* Function at 0x808503A8, size=280 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_808503A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stfd f31, 0x28(r1) */ // 0x808503B4
    /* fmr f31, f1 */ // 0x808503B8
    /* stmw r27, 0x14(r1) */ // 0x808503BC
    r30 = r4;
    r27 = r3;
    r28 = r5;
    r29 = r6;
    /* clrlwi r4, r4, 0x10 */ // 0x808503D0
    r7 = *(0x6c + r3); // lwz @ 0x808503D4
    r3 = *(0x28 + r7); // lwz @ 0x808503D8
    FUN_805E6F54(); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x808503E0
    if (!=) goto 0x0x808503f4;
    /* li r3, 0 */ // 0x808503EC
    /* b 0x808504a8 */ // 0x808503F0
    r3 = *(0x6c + r27); // lwz @ 0x808503F4
    /* clrlwi r4, r30, 0x10 */ // 0x808503F8
    r3 = *(0x28 + r3); // lwz @ 0x808503FC
    FUN_805E6F54(r3); // bl 0x805E6F54
    r31 = *(0xc + r3); // lwz @ 0x80850404
    /* li r30, 0 */ // 0x80850408
    if (==) goto 0x0x80850444;
    /* lis r4, 0 */ // 0x80850414
    r3 = r31;
    r4 = r4 + 0; // 0x8085041C
    *(8 + r1) = r4; // stw @ 0x80850420
    r12 = *(0 + r31); // lwz @ 0x80850428
    r12 = *(8 + r12); // lwz @ 0x8085042C
    /* mtctr r12 */ // 0x80850430
    /* bctrl  */ // 0x80850434
    if (==) goto 0x0x80850444;
    /* li r30, 1 */ // 0x80850440
    if (==) goto 0x0x80850450;
    /* b 0x80850454 */ // 0x8085044C
    /* li r31, 0 */ // 0x80850450
    r4 = *(0x2c + r31); // lwz @ 0x80850458
    if (!=) goto 0x0x8085046c;
    r3 = *(0x104 + r27); // lwz @ 0x80850460
    /* li r0, 1 */ // 0x80850464
    *(0x2c0 + r3) = r0; // stb @ 0x80850468
    if (!=) goto 0x0x80850488;
    r3 = *(0x104 + r27); // lwz @ 0x80850474
    /* li r0, 1 */ // 0x80850478
    *(0x80 + r3) = r0; // stb @ 0x8085047C
    r3 = *(0x104 + r27); // lwz @ 0x80850480
    *(0x1a0 + r3) = r0; // stb @ 0x80850484
    *(0xc + r1) = r4; // stw @ 0x80850488
    /* fmr f1, f31 */ // 0x8085048C
    /* li r4, 0 */ // 0x80850494
    r3 = *(0x108 + r27); // lwz @ 0x80850498
    /* li r5, 0 */ // 0x8085049C
    FUN_808504CC(r6, r4, r5); // bl 0x808504CC
    /* li r3, 1 */ // 0x808504A4
    /* lfd f31, 0x28(r1) */ // 0x808504A8
    r0 = *(0x34 + r1); // lwz @ 0x808504B0
    return;
}