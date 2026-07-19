/* Function at 0x807E9644, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807E9644(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807E9650
    r31 = r3;
    r0 = *(0xd1 + r3); // lbz @ 0x807E9658
    r4 = *(0xd4 + r3); // lwz @ 0x807E965C
    r5 = r4 + 1; // 0x807E9664
    *(0xd4 + r3) = r5; // stw @ 0x807E9668
    if (==) goto 0x0x807e9678;
    FUN_807EA370(r5); // bl 0x807EA370
    /* b 0x807e9690 */ // 0x807E9674
    /* lis r4, 0 */ // 0x807E9678
    r0 = *(0 + r4); // lwz @ 0x807E967C
    if (!=) goto 0x0x807e9690;
    /* li r0, 1 */ // 0x807E9688
    *(0xd1 + r3) = r0; // stb @ 0x807E968C
    r0 = *(0xd8 + r31); // lbz @ 0x807E9690
    if (==) goto 0x0x807e96a4;
    r3 = r31;
    FUN_807EA614(r3); // bl 0x807EA614
    r0 = *(0xd0 + r31); // lbz @ 0x807E96A4
    if (==) goto 0x0x807e96f0;
    r3 = *(0x20 + r31); // lwz @ 0x807E96B0
    r0 = *(0x46 + r3); // lha @ 0x807E96B4
    r3 = *(8 + r3); // lwz @ 0x807E96B8
    /* slwi r0, r0, 4 */ // 0x807E96BC
    r3 = r3 + r0; // 0x807E96C0
    r0 = *(0xe + r3); // lhz @ 0x807E96C4
    if (!=) goto 0x0x807e9730;
    r0 = *(0xe4 + r31); // lbz @ 0x807E96D0
    if (!=) goto 0x0x807e9730;
    /* li r3, 1 */ // 0x807E96DC
    /* li r0, 0 */ // 0x807E96E0
    *(0xe4 + r31) = r3; // stb @ 0x807E96E4
    *(0x100 + r31) = r0; // stw @ 0x807E96E8
    /* b 0x807e9730 */ // 0x807E96EC
    r3 = *(0xf0 + r31); // lwz @ 0x807E96F0
    FUN_8061DA88(); // bl 0x8061DA88
    /* lis r4, 0 */ // 0x807E96F8
    /* lfs f0, 0(r3) */ // 0x807E96FC
    /* lfs f1, 0(r4) */ // 0x807E9700
    /* lfs f2, 0x30(r31) */ // 0x807E9704
    /* fadds f0, f1, f0 */ // 0x807E9708
}