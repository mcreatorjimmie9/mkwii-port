/* Function at 0x805D6B20, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805D6B20(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 1 */ // 0x805D6B30
    r0 = r31 + -0x7340; // 0x805D6B34
    *(0x18 + r1) = r30; // stw @ 0x805D6B38
    r0 = r4 * r0; // 0x805D6B3C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805D6B44
    r29 = r3;
    r5 = *(0x14 + r3); // lwz @ 0x805D6B4C
    r3 = r5 + r0; // 0x805D6B50
    r3 = r3 + 8; // 0x805D6B54
    FUN_805D6E64(r3); // bl 0x805D6E64
    r4 = r30;
    r0 = r31 + -0x6c10; // 0x805D6B60
    r0 = r4 * r0; // 0x805D6B64
    r3 = r29;
    r5 = r29 + r0; // 0x805D6B6C
    r5 = r5 + 0x38; // 0x805D6B70
    FUN_805D38A4(r3, r5); // bl 0x805D38A4
    r0 = *(0x24 + r1); // lwz @ 0x805D6B78
    r31 = *(0x1c + r1); // lwz @ 0x805D6B7C
    r30 = *(0x18 + r1); // lwz @ 0x805D6B80
    r29 = *(0x14 + r1); // lwz @ 0x805D6B84
    return;
}