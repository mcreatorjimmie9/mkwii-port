/* Function at 0x8066E074, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8066E074(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8066E090
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8066E098
    r28 = r3;
    FUN_8066E240(); // bl 0x8066E240
    /* lis r3, 0 */ // 0x8066E0A4
    r6 = *(0x2c + r28); // lwz @ 0x8066E0A8
    r3 = *(0 + r3); // lwz @ 0x8066E0AC
    r4 = r30;
    r5 = r31;
    FUN_805B926C(r3, r4, r5); // bl 0x805B926C
    r5 = r3;
    r3 = r28;
    r4 = r29;
    FUN_8066DBB8(r5, r5, r3, r4); // bl 0x8066DBB8
    r0 = *(0x24 + r1); // lwz @ 0x8066E0CC
    r31 = *(0x1c + r1); // lwz @ 0x8066E0D0
    r30 = *(0x18 + r1); // lwz @ 0x8066E0D4
    r29 = *(0x14 + r1); // lwz @ 0x8066E0D8
    r28 = *(0x10 + r1); // lwz @ 0x8066E0DC
    return;
}