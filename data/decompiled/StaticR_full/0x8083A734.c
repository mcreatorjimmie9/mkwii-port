/* Function at 0x8083A734, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8083A734(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* cntlzw r0, r6 */ // 0x8083A740
    r6 = r5;
    r5 = r7;
    *(0x1c + r1) = r31; // stw @ 0x8083A74C
    /* srwi r0, r0, 5 */ // 0x8083A750
    r31 = r9;
    *(0x18 + r1) = r30; // stw @ 0x8083A758
    r30 = r8;
    *(0x14 + r1) = r29; // stw @ 0x8083A760
    r29 = r4;
    /* neg r4, r0 */ // 0x8083A768
    *(0x10 + r1) = r28; // stw @ 0x8083A76C
    r28 = r3;
    FUN_8083BD30(); // bl 0x8083BD30
    *(0x260 + r28) = r29; // stw @ 0x8083A778
    r5 = r30;
    r6 = r31;
    r3 = r28 + 0x268; // 0x8083A784
    r4 = r28 + 0x1dc; // 0x8083A788
    FUN_8083E824(r5, r6, r3, r4); // bl 0x8083E824
    /* li r0, 0 */ // 0x8083A790
    *(0x278 + r28) = r0; // stb @ 0x8083A794
    r31 = *(0x1c + r1); // lwz @ 0x8083A798
    r30 = *(0x18 + r1); // lwz @ 0x8083A79C
    r29 = *(0x14 + r1); // lwz @ 0x8083A7A0
    r28 = *(0x10 + r1); // lwz @ 0x8083A7A4
    r0 = *(0x24 + r1); // lwz @ 0x8083A7A8
    return;
}