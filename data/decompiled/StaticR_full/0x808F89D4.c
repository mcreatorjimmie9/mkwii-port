/* Function at 0x808F89D4, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 6 function(s) */

int FUN_808F89D4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x808F89E0
    r26 = r3;
    r27 = r4;
    r0 = *(4 + r4); // lwz @ 0x808F89EC
    r5 = *(8 + r4); // lwz @ 0x808F89F0
    /* mulli r29, r0, 0x60 */ // 0x808F89F4
    r28 = *(0 + r4); // lwz @ 0x808F89F8
    r4 = r28;
    /* mulli r30, r5, 0x30 */ // 0x808F8A00
    r0 = r3 + r29; // 0x808F8A04
    r3 = r0 + r30; // 0x808F8A08
    r31 = r3 + 0x4020; // 0x808F8A0C
    r3 = r31;
    FUN_808F92D0(r3); // bl 0x808F92D0
    if (!=) goto 0x0x808f8a4c;
    r3 = r31;
    r4 = r28;
    /* li r5, 0 */ // 0x808F8A28
    FUN_808F9218(r3, r4, r5); // bl 0x808F9218
    r0 = r26 + r29; // 0x808F8A30
    r4 = r28;
    r3 = r0 + r30; // 0x808F8A38
    /* li r5, 0 */ // 0x808F8A3C
    r3 = r3 + 0x4140; // 0x808F8A40
    FUN_808F9218(r4, r5, r3); // bl 0x808F9218
    /* b 0x808f8a90 */ // 0x808F8A48
    r0 = r26 + r29; // 0x808F8A4C
    r3 = r0 + r30; // 0x808F8A50
    r31 = r3 + 0x4020; // 0x808F8A54
    r3 = r31;
    FUN_808F8EE0(r3); // bl 0x808F8EE0
    r28 = r3;
    r3 = r31;
    r4 = r28;
    /* li r5, 0 */ // 0x808F8A6C
    FUN_808F9218(r3, r4, r5); // bl 0x808F9218
    r0 = r26 + r29; // 0x808F8A74
    r4 = r28;
    r3 = r0 + r30; // 0x808F8A7C
    /* li r5, 0 */ // 0x808F8A80
    r3 = r3 + 0x4140; // 0x808F8A84
    FUN_808F9218(r4, r5, r3); // bl 0x808F9218
    *(0 + r27) = r28; // stw @ 0x808F8A8C
    r0 = *(0x24 + r1); // lwz @ 0x808F8A94
    return;
}