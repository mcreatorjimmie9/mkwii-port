/* Function at 0x808F88E4, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_808F88E4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x808F88F0
    r31 = r3 + 0x4140; // 0x808F88F4
    r30 = r3 + 0x4020; // 0x808F88F8
    /* li r27, 0 */ // 0x808F88FC
    r29 = r31;
    r28 = r30;
    /* li r26, 0 */ // 0x808F8908
    r3 = r29;
    FUN_808F928C(r3); // bl 0x808F928C
    r3 = r29;
    r4 = r28;
    FUN_808F93F0(r3, r3, r4); // bl 0x808F93F0
    r26 = r26 + 1; // 0x808F8920
    r28 = r28 + 0x30; // 0x808F8924
    r29 = r29 + 0x30; // 0x808F892C
    if (<) goto 0x0x808f890c;
    r27 = r27 + 1; // 0x808F8934
    r30 = r30 + 0x60; // 0x808F8938
    r31 = r31 + 0x60; // 0x808F8940
    if (<) goto 0x0x808f8900;
    r0 = *(0x24 + r1); // lwz @ 0x808F894C
    return;
}