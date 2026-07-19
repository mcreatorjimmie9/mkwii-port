/* Function at 0x808F8C78, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_808F8C78(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808F8C84
    r27 = r3;
    r28 = *(0 + r4); // lwz @ 0x808F8C8C
    r0 = *(4 + r4); // lwz @ 0x808F8C90
    r5 = *(8 + r4); // lwz @ 0x808F8C98
    if (==) goto 0x0x808f8d00;
    /* mulli r30, r0, 0x60 */ // 0x808F8CA0
    r4 = r28;
    /* mulli r31, r5, 0x30 */ // 0x808F8CA8
    r0 = r3 + r30; // 0x808F8CAC
    r3 = r0 + r31; // 0x808F8CB0
    r29 = r3 + 0x4020; // 0x808F8CB4
    r3 = r29;
    FUN_808F92D0(r3); // bl 0x808F92D0
    if (==) goto 0x0x808f8cd4;
    r3 = r29;
    r4 = r28;
    FUN_808F9338(r3, r4); // bl 0x808F9338
    r0 = r27 + r30; // 0x808F8CD4
    r4 = r28;
    r3 = r0 + r31; // 0x808F8CDC
    r29 = r3 + 0x4140; // 0x808F8CE0
    r3 = r29;
    FUN_808F92D0(r4, r3); // bl 0x808F92D0
    if (==) goto 0x0x808f8d00;
    r3 = r29;
    r4 = r28;
    FUN_808F9338(r3, r4); // bl 0x808F9338
    r0 = *(0x24 + r1); // lwz @ 0x808F8D04
    return;
}