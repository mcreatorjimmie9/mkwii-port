/* Function at 0x80792D30, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80792D30(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80792D4C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80792D54
    r28 = r3;
    r3 = r3 + 0x8c; // 0x80792D5C
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x80792d74;
    /* li r3, 0 */ // 0x80792D6C
    /* b 0x80792d90 */ // 0x80792D70
    r3 = r28;
    r4 = r30;
    r5 = r29;
    r6 = r31;
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x80792D88
    /* srwi r3, r0, 5 */ // 0x80792D8C
    r0 = *(0x24 + r1); // lwz @ 0x80792D90
    r31 = *(0x1c + r1); // lwz @ 0x80792D94
    r30 = *(0x18 + r1); // lwz @ 0x80792D98
    r29 = *(0x14 + r1); // lwz @ 0x80792D9C
    r28 = *(0x10 + r1); // lwz @ 0x80792DA0
}