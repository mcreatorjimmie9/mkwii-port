/* Function at 0x806B253C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_806B253C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806B2544
    *(0x14 + r1) = r0; // stw @ 0x806B2548
    r3 = *(0 + r3); // lwz @ 0x806B254C
    r3 = *(0 + r3); // lwz @ 0x806B2550
    r0 = *(0 + r3); // lwz @ 0x806B2554
    if (>=) goto 0x0x806b2580;
    if (>=) goto 0x0x806b2574;
    if (>=) goto 0x0x806b2590;
    /* b 0x806b25bc */ // 0x806B2570
    if (>=) goto 0x0x806b25a8;
    /* b 0x806b25bc */ // 0x806B257C
    if (>=) goto 0x0x806b25bc;
    if (>=) goto 0x0x806b25a8;
    /* lis r3, 0 */ // 0x806B2590
    /* li r4, 0x55 */ // 0x806B2594
    r3 = *(0 + r3); // lwz @ 0x806B2598
    /* li r5, 0 */ // 0x806B259C
    FUN_80698C44(r3, r4, r5); // bl 0x80698C44
    /* b 0x806b25bc */ // 0x806B25A4
    /* lis r3, 0 */ // 0x806B25A8
    /* li r4, 0x5b */ // 0x806B25AC
    r3 = *(0 + r3); // lwz @ 0x806B25B0
    /* li r5, 0 */ // 0x806B25B4
    FUN_80698C44(r3, r4, r5); // bl 0x80698C44
    /* lis r3, 0 */ // 0x806B25BC
    /* li r4, 0 */ // 0x806B25C0
    r3 = *(0 + r3); // lwz @ 0x806B25C4
    /* li r5, 0xff */ // 0x806B25C8
    FUN_80698CD0(r3, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806B25D0
    return;
}