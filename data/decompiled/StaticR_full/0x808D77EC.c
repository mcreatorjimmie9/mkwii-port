/* Function at 0x808D77EC, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808D77EC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r9 = r4;
    r8 = r5;
    *(0x14 + r1) = r0; // stw @ 0x808D77FC
    r0 = r6;
    /* lis r4, 0 */ // 0x808D7804
    r6 = r8;
    *(0xc + r1) = r31; // stw @ 0x808D780C
    r31 = r7;
    r5 = r9;
    r7 = r0;
    *(8 + r1) = r30; // stw @ 0x808D781C
    r30 = r3;
    r4 = r4 + 0; // 0x808D7824
    /* li r8, 0 */ // 0x808D7828
    FUN_8089BA4C(r7, r4, r8); // bl 0x8089BA4C
    /* lis r3, 0 */ // 0x808D7830
    /* li r0, 0 */ // 0x808D7834
    r3 = r3 + 0; // 0x808D7838
    /* li r6, 0xd */ // 0x808D783C
    /* li r4, 0x14 */ // 0x808D7840
    *(0 + r30) = r3; // stw @ 0x808D7844
    /* lis r5, 0 */ // 0x808D7848
    r3 = r30;
    *(0xb4 + r30) = r6; // stw @ 0x808D7850
    *(0xb8 + r30) = r4; // stw @ 0x808D7854
    *(0xbc + r30) = r0; // stw @ 0x808D7858
    *(0xc0 + r30) = r0; // stw @ 0x808D785C
    *(0xc4 + r30) = r31; // stb @ 0x808D7860
    r4 = *(0 + r5); // lwzu @ 0x808D7864
    r0 = *(4 + r5); // lwz @ 0x808D7868
    *(0xcc + r30) = r0; // stw @ 0x808D786C
    *(0xc8 + r30) = r4; // stw @ 0x808D7870
    r0 = *(8 + r5); // lwz @ 0x808D7874
    *(0xd0 + r30) = r0; // stw @ 0x808D7878
    r31 = *(0xc + r1); // lwz @ 0x808D787C
    r30 = *(8 + r1); // lwz @ 0x808D7880
    r0 = *(0x14 + r1); // lwz @ 0x808D7884
    return;
}