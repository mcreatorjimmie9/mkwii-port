/* Function at 0x8075E690, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8075E690(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8075E69C
    r31 = r3;
    r5 = r31 + 0x190; // 0x8075E6A4
    r6 = *(0x20 + r3); // lwz @ 0x8075E6A8
    r4 = *(0x46 + r6); // lha @ 0x8075E6AC
    r3 = r6;
    FUN_8076D090(r5, r3); // bl 0x8076D090
    r3 = *(0x20 + r31); // lwz @ 0x8075E6B8
    r5 = r31 + 0x19c; // 0x8075E6BC
    r4 = *(0x48 + r3); // lha @ 0x8075E6C0
    FUN_8076D090(r3, r5); // bl 0x8076D090
    /* li r0, -2 */ // 0x8075E6C8
    *(0xc + r1) = r0; // stw @ 0x8075E6CC
    *(8 + r1) = r0; // stw @ 0x8075E6D4
    r3 = *(0x20 + r31); // lwz @ 0x8075E6D8
    r4 = *(0x46 + r3); // lha @ 0x8075E6DC
    FUN_8076D0F8(r5); // bl 0x8076D0F8
    r3 = *(0x20 + r31); // lwz @ 0x8075E6E4
    r4 = *(0x48 + r3); // lha @ 0x8075E6EC
    FUN_8076D0F8(r5); // bl 0x8076D0F8
    r3 = *(0xc + r1); // lwz @ 0x8075E6F4
    if (!=) goto 0x0x8075e718;
    r0 = *(8 + r1); // lwz @ 0x8075E700
    if (!=) goto 0x0x8075e718;
    /* li r0, 2 */ // 0x8075E70C
    *(0x1a8 + r31) = r0; // stw @ 0x8075E710
    /* b 0x8075e740 */ // 0x8075E714
    if (!=) goto 0x0x8075e738;
    r0 = *(8 + r1); // lwz @ 0x8075E720
    if (!=) goto 0x0x8075e738;
    /* li r0, 1 */ // 0x8075E72C
    *(0x1a8 + r31) = r0; // stw @ 0x8075E730
    /* b 0x8075e740 */ // 0x8075E734
    /* li r0, 0 */ // 0x8075E738
    *(0x1a8 + r31) = r0; // stw @ 0x8075E73C
    r3 = *(8 + r31); // lwz @ 0x8075E740
    r0 = *(0x1a8 + r31); // lwz @ 0x8075E744
    r3 = *(0x40 + r3); // lwz @ 0x8075E748
    *(0x21 + r3) = r0; // stb @ 0x8075E74C
    r31 = *(0x1c + r1); // lwz @ 0x8075E750
    r0 = *(0x24 + r1); // lwz @ 0x8075E754
    return;
}