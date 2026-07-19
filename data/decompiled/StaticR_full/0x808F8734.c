/* Function at 0x808F8734, size=228 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 6 function(s) */

int FUN_808F8734(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* slwi r0, r5, 4 */ // 0x808F8740
    r5 = r3 + r0; // 0x808F8744
    /* stmw r25, 0x14(r1) */ // 0x808F8748
    r25 = r4;
    r30 = r3;
    r31 = r5 + 0x4260; // 0x808F8754
    r29 = *(0x4260 + r5); // lwz @ 0x808F8758
    r4 = *(0x4264 + r5); // lwz @ 0x808F875C
    r0 = *(0x4268 + r5); // lwz @ 0x808F8764
    if (==) goto 0x0x808f87cc;
    /* mulli r27, r4, 0x60 */ // 0x808F876C
    r4 = r29;
    /* mulli r28, r0, 0x30 */ // 0x808F8774
    r0 = r3 + r27; // 0x808F8778
    r3 = r0 + r28; // 0x808F877C
    r26 = r3 + 0x4020; // 0x808F8780
    r3 = r26;
    FUN_808F92D0(r3); // bl 0x808F92D0
    if (==) goto 0x0x808f87a0;
    r3 = r26;
    r4 = r29;
    FUN_808F9338(r3, r4); // bl 0x808F9338
    r0 = r30 + r27; // 0x808F87A0
    r4 = r29;
    r3 = r0 + r28; // 0x808F87A8
    r26 = r3 + 0x4140; // 0x808F87AC
    r3 = r26;
    FUN_808F92D0(r4, r3); // bl 0x808F92D0
    if (==) goto 0x0x808f87cc;
    r3 = r26;
    r4 = r29;
    FUN_808F9338(r3, r4); // bl 0x808F9338
    r3 = r30;
    r4 = r25;
    r5 = r31;
    /* li r6, 1 */ // 0x808F87D8
    FUN_808F8960(r3, r4, r5, r6); // bl 0x808F8960
    /* lis r3, 0 */ // 0x808F87E0
    r3 = *(0 + r3); // lwz @ 0x808F87E4
    r3 = *(0x21 + r3); // lbz @ 0x808F87E8
    r0 = r3 + -3; // 0x808F87EC
    if (>) goto 0x0x808f8804;
    r3 = r30;
    r4 = r31;
    FUN_808F89D4(r3, r4); // bl 0x808F89D4
    r0 = *(0x34 + r1); // lwz @ 0x808F8808
    return;
}