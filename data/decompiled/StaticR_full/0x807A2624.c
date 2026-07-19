/* Function at 0x807A2624, size=328 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_807A2624(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807A262C
    /* li r5, 0 */ // 0x807A2630
    /* li r0, 1 */ // 0x807A2638
    *(0x1c + r1) = r31; // stw @ 0x807A263C
    *(0x18 + r1) = r30; // stw @ 0x807A2640
    *(0x14 + r1) = r29; // stw @ 0x807A2644
    r29 = r3;
    *(8 + r3) = r0; // stw @ 0x807A264C
    r4 = *(0 + r4); // lwz @ 0x807A2650
    r4 = *(0 + r4); // lwz @ 0x807A2654
    if (==) goto 0x0x807a2664;
    r5 = *(0 + r4); // lwz @ 0x807A2660
    r0 = r5 + -0x35; // 0x807A2664
    *(0x10 + r3) = r5; // stw @ 0x807A2668
    /* lis r3, 0 */ // 0x807A266C
    *(0 + r3) = r5; // stw @ 0x807A2674
    if (<=) goto 0x0x807a2698;
    if (==) goto 0x0x807a2690;
    if (==) goto 0x0x807a2698;
    /* b 0x807a26b4 */ // 0x807A268C
    /* li r3, 0 */ // 0x807A2690
    /* b 0x807a2750 */ // 0x807A2694
    r3 = r5;
    FUN_806950E4(r3, r3); // bl 0x806950E4
    /* lis r5, 0 */ // 0x807A26A0
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807A26A8
    /* li r5, 0 */ // 0x807A26AC
    FUN_807A9C14(r5, r4, r5); // bl 0x807A9C14
    /* lis r4, 0 */ // 0x807A26B4
    /* lis r3, 0 */ // 0x807A26B8
    r4 = *(0 + r4); // lwz @ 0x807A26BC
    r3 = *(0 + r3); // lwz @ 0x807A26C0
    r31 = *(0xb68 + r4); // lwz @ 0x807A26C4
    FUN_8079CFFC(r4, r3); // bl 0x8079CFFC
    if (==) goto 0x0x807a26e0;
    if (==) goto 0x0x807a26e8;
    /* b 0x807a2708 */ // 0x807A26DC
    /* li r30, 0x39 */ // 0x807A26E0
    /* b 0x807a270c */ // 0x807A26E4
    r3 = *(0x10 + r29); // lwz @ 0x807A26E8
    r0 = r3 + -0x39; // 0x807A26EC
    if (>) goto 0x0x807a2700;
    /* li r30, -1 */ // 0x807A26F8
    /* b 0x807a270c */ // 0x807A26FC
    /* li r30, 0x17 */ // 0x807A2700
    /* b 0x807a270c */ // 0x807A2704
    r30 = r31 + 0xf; // 0x807A2708
    /* lis r31, 0 */ // 0x807A270C
    /* li r4, 0xe */ // 0x807A2710
    r3 = *(0 + r31); // lwz @ 0x807A2714
    /* li r5, 0 */ // 0x807A2718
    FUN_807A9C14(r4, r5); // bl 0x807A9C14
    r3 = *(0 + r31); // lwz @ 0x807A2720
    r4 = r30;
    /* li r5, 0 */ // 0x807A2728
    FUN_807A9C14(r5, r4, r5); // bl 0x807A9C14
    r3 = *(0 + r31); // lwz @ 0x807A2730
    FUN_807A9CE4(r4, r5); // bl 0x807A9CE4
    r12 = *(0 + r29); // lwz @ 0x807A2738
    r3 = r29;
    r12 = *(0x28 + r12); // lwz @ 0x807A2740
    /* mtctr r12 */ // 0x807A2744
    /* bctrl  */ // 0x807A2748
    /* li r3, 1 */ // 0x807A274C
    r0 = *(0x24 + r1); // lwz @ 0x807A2750
    r31 = *(0x1c + r1); // lwz @ 0x807A2754
    r30 = *(0x18 + r1); // lwz @ 0x807A2758
    r29 = *(0x14 + r1); // lwz @ 0x807A275C
    return;
}