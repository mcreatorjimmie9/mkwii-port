/* Function at 0x8078E8DC, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8078E8DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8078E8F8
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8078E900
    r28 = r3;
    r3 = r3 + 0x94; // 0x8078E908
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x8078e920;
    /* li r3, 0 */ // 0x8078E918
    /* b 0x8078e93c */ // 0x8078E91C
    r3 = r28;
    r4 = r30;
    r5 = r29;
    r6 = r31;
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x8078E934
    /* srwi r3, r0, 5 */ // 0x8078E938
    r0 = *(0x24 + r1); // lwz @ 0x8078E93C
    r31 = *(0x1c + r1); // lwz @ 0x8078E940
    r30 = *(0x18 + r1); // lwz @ 0x8078E944
    r29 = *(0x14 + r1); // lwz @ 0x8078E948
    r28 = *(0x10 + r1); // lwz @ 0x8078E94C
}