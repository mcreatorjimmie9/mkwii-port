/* Function at 0x8061E818, size=144 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_8061E818(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r12, 0 */ // 0x8061E820
    *(0x34 + r1) = r0; // stw @ 0x8061E824
    *(0x2c + r1) = r31; // stw @ 0x8061E82C
    r3 = *(0 + r3); // lwz @ 0x8061E830
    r3 = *(0x24 + r3); // lwz @ 0x8061E834
    if (==) goto 0x0x8061e894;
    r11 = *(8 + r12); // lwz @ 0x8061E848
    r31 = r4 rlwinm 2; // rlwinm
    r10 = *(4 + r5); // lwz @ 0x8061E850
    r9 = *(8 + r5); // lwz @ 0x8061E858
    r8 = *(0x14 + r12); // lwz @ 0x8061E860
    r7 = *(4 + r6); // lwz @ 0x8061E864
    r0 = *(8 + r6); // lwz @ 0x8061E868
    *(0x14 + r1) = r11; // stw @ 0x8061E86C
    /* lfs f1, 4(r12) */ // 0x8061E870
    *(0x18 + r1) = r10; // stw @ 0x8061E874
    *(0x1c + r1) = r9; // stw @ 0x8061E878
    *(8 + r1) = r8; // stw @ 0x8061E87C
    /* lwzx r4, r4, r31 */ // 0x8061E880
    *(0xc + r1) = r7; // stw @ 0x8061E884
    *(0x10 + r1) = r0; // stw @ 0x8061E888
    /* lwzx r5, r5, r31 */ // 0x8061E88C
    FUN_8062FB20(); // bl 0x8062FB20
    r0 = *(0x34 + r1); // lwz @ 0x8061E894
    r31 = *(0x2c + r1); // lwz @ 0x8061E898
    return;
}