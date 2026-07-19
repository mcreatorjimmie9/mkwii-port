/* Function at 0x805C24E0, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805C24E0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x805C24E8
    /* lis r4, 0 */ // 0x805C24EC
    /* li r0, 1 */ // 0x805C24F4
    *(0x1c + r1) = r31; // stw @ 0x805C24F8
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805C2500
    *(0x14 + r1) = r29; // stw @ 0x805C2504
    *(0x1c + r3) = r5; // stb @ 0x805C2508
    *(0x1d + r3) = r5; // stb @ 0x805C250C
    *(0x20 + r3) = r5; // stw @ 0x805C2510
    *(0x30 + r3) = r0; // stb @ 0x805C2514
    r3 = *(0 + r4); // lwz @ 0x805C2518
    r0 = *(0xb70 + r3); // lwz @ 0x805C251C
    if (!=) goto 0x0x805c2544;
    /* lis r3, 0 */ // 0x805C2528
    r3 = *(0 + r3); // lwz @ 0x805C252C
    FUN_805A87A4(r3); // bl 0x805A87A4
    r3 = *(0 + r3); // lwz @ 0x805C2534
    r0 = *(0 + r3); // lbz @ 0x805C2538
    if (==) goto 0x0x805c2564;
    /* lis r3, 0 */ // 0x805C2544
    r3 = *(0 + r3); // lwz @ 0x805C2548
    r0 = *(0xb90 + r3); // lwz @ 0x805C254C
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805C2550
    if (==) goto 0x0x805c256c;
    r0 = *(0xb8d + r3); // lbz @ 0x805C2558
    if (!=) goto 0x0x805c256c;
    /* li r0, 0 */ // 0x805C2564
    *(0x30 + r31) = r0; // stb @ 0x805C2568
    /* lis r0, -0x8000 */ // 0x805C256C
    *(0x38 + r31) = r0; // stw @ 0x805C2570
    /* lis r3, 0 */ // 0x805C2574
    r3 = *(0 + r3); // lwz @ 0x805C2578
    FUN_805B4194(r3); // bl 0x805B4194
    /* li r29, 0 */ // 0x805C2580
    /* lis r30, 0 */ // 0x805C2584
    /* b 0x805c25a0 */ // 0x805C2588
    r3 = *(0xc + r31); // lwz @ 0x805C258C
    r0 = r29 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805C2594
    FUN_805C36EC(); // bl 0x805C36EC
    r29 = r29 + 1; // 0x805C259C
    r3 = *(0 + r30); // lwz @ 0x805C25A0
    /* clrlwi r4, r29, 0x18 */ // 0x805C25A4
    r0 = *(0x24 + r3); // lbz @ 0x805C25A8
    if (<) goto 0x0x805c258c;
    r3 = *(0x10 + r31); // lwz @ 0x805C25B4
    r12 = *(0 + r3); // lwz @ 0x805C25B8
    r12 = *(0x1c + r12); // lwz @ 0x805C25BC
    /* mtctr r12 */ // 0x805C25C0
    /* bctrl  */ // 0x805C25C4
    r0 = *(0x24 + r1); // lwz @ 0x805C25C8
    r31 = *(0x1c + r1); // lwz @ 0x805C25CC
    r30 = *(0x18 + r1); // lwz @ 0x805C25D0
    r29 = *(0x14 + r1); // lwz @ 0x805C25D4
    return;
}