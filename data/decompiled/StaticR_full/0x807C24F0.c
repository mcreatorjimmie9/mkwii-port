/* Function at 0x807C24F0, size=116 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807C24F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807C24F8
    r0 = *(0x18 + r3); // lwz @ 0x807C24FC
    /* li r3, 0 */ // 0x807C2500
    if (==) goto 0x0x807c2520;
    if (==) goto 0x0x807c2528;
    if (==) goto 0x0x807c2550;
    /* b 0x807c2554 */ // 0x807C251C
    /* li r3, 0 */ // 0x807C2520
    /* b 0x807c2554 */ // 0x807C2524
    /* lis r3, 0 */ // 0x807C2528
    /* li r4, 0x64 */ // 0x807C252C
    r3 = *(0 + r3); // lwz @ 0x807C2530
    FUN_807C03BC(r3, r3, r4); // bl 0x807C03BC
    /* xori r0, r3, 0x32 */ // 0x807C2538
    /* li r3, 0x32 */ // 0x807C253C
    /* cntlzw r0, r0 */ // 0x807C2540
    r0 = r3 << r0; // slw
    /* srwi r3, r0, 0x1f */ // 0x807C2548
    /* b 0x807c2554 */ // 0x807C254C
    /* li r3, 1 */ // 0x807C2550
    r0 = *(0x14 + r1); // lwz @ 0x807C2554
    return;
}