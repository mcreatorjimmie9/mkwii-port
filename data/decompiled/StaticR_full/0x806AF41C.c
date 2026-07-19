/* Function at 0x806AF41C, size=380 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806AF41C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x806AF424
    *(0xc + r1) = r31; // stw @ 0x806AF42C
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x806AF434
    r5 = *(0 + r5); // lwz @ 0x806AF438
    r0 = *(0x291c + r5); // lwz @ 0x806AF43C
    /* mulli r0, r0, 0x58 */ // 0x806AF440
    r5 = r5 + r0; // 0x806AF444
    r0 = *(0x8b + r5); // lbz @ 0x806AF448
    if (==) goto 0x0x806af4d8;
    /* li r0, -1 */ // 0x806AF454
    *(0xb14 + r3) = r0; // stw @ 0x806AF458
    /* lis r3, 0 */ // 0x806AF45C
    /* li r30, -1 */ // 0x806AF460
    r3 = *(0 + r3); // lwz @ 0x806AF464
    r3 = *(0 + r3); // lwz @ 0x806AF468
    r0 = *(0 + r3); // lwz @ 0x806AF46C
    if (==) goto 0x0x806af494;
    if (==) goto 0x0x806af49c;
    if (==) goto 0x0x806af4a4;
    if (==) goto 0x0x806af4ac;
    /* b 0x806af4b0 */ // 0x806AF490
    /* li r30, 0x58 */ // 0x806AF494
    /* b 0x806af4b0 */ // 0x806AF498
    /* li r30, 0x5e */ // 0x806AF49C
    /* b 0x806af4b0 */ // 0x806AF4A0
    /* li r30, 0x59 */ // 0x806AF4A4
    /* b 0x806af4b0 */ // 0x806AF4A8
    /* li r30, 0x5f */ // 0x806AF4AC
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806AF4B8
    r3 = r31;
    r4 = r30;
    /* li r5, 0 */ // 0x806AF4C4
    r12 = *(0x1c + r12); // lwz @ 0x806AF4C8
    /* mtctr r12 */ // 0x806AF4CC
    /* bctrl  */ // 0x806AF4D0
    /* b 0x806af4f4 */ // 0x806AF4D4
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806AF4E4
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* li r0, 0x48 */ // 0x806AF4EC
    *(0xb14 + r31) = r0; // stw @ 0x806AF4F0
    /* li r0, 1 */ // 0x806AF4F4
    *(0xb18 + r31) = r0; // stb @ 0x806AF4F8
    /* lis r3, 0 */ // 0x806AF4FC
    r3 = *(0 + r3); // lwz @ 0x806AF500
    r3 = *(0 + r3); // lwz @ 0x806AF504
    r30 = *(0x11c + r3); // lwz @ 0x806AF508
    if (!=) goto 0x0x806af51c;
    /* li r30, 0 */ // 0x806AF514
    /* b 0x806af570 */ // 0x806AF518
    /* lis r31, 0 */ // 0x806AF51C
    r31 = r31 + 0; // 0x806AF520
    if (==) goto 0x0x806af56c;
    r12 = *(0 + r30); // lwz @ 0x806AF528
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AF530
    /* mtctr r12 */ // 0x806AF534
    /* bctrl  */ // 0x806AF538
    /* b 0x806af554 */ // 0x806AF53C
    if (!=) goto 0x0x806af550;
    /* li r0, 1 */ // 0x806AF548
    /* b 0x806af560 */ // 0x806AF54C
    r3 = *(0 + r3); // lwz @ 0x806AF550
    if (!=) goto 0x0x806af540;
    /* li r0, 0 */ // 0x806AF55C
    if (==) goto 0x0x806af56c;
    /* b 0x806af570 */ // 0x806AF568
    /* li r30, 0 */ // 0x806AF56C
    /* li r0, 0 */ // 0x806AF570
    *(0x1d4 + r30) = r0; // stb @ 0x806AF574
    r3 = r30 + 0x54; // 0x806AF578
    FUN_8064F568(r3); // bl 0x8064F568
    r0 = *(0x14 + r1); // lwz @ 0x806AF580
    r31 = *(0xc + r1); // lwz @ 0x806AF584
    r30 = *(8 + r1); // lwz @ 0x806AF588
    return;
}