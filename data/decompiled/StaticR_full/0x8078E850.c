/* Function at 0x8078E850, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8078E850(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8078E864
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078E86C
    r29 = r3;
    r3 = r3 + 0x94; // 0x8078E874
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x8078e88c;
    /* li r3, 0 */ // 0x8078E884
    /* b 0x8078e8a8 */ // 0x8078E888
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8078E898
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x8078E8A0
    /* srwi r3, r0, 5 */ // 0x8078E8A4
    r0 = *(0x24 + r1); // lwz @ 0x8078E8A8
    r31 = *(0x1c + r1); // lwz @ 0x8078E8AC
    r30 = *(0x18 + r1); // lwz @ 0x8078E8B0
    r29 = *(0x14 + r1); // lwz @ 0x8078E8B4
}