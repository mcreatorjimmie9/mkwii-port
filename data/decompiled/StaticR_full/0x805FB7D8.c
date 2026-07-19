/* Function at 0x805FB7D8, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805FB7D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3 + 0x1c8; // 0x805FB7E8
    r30 = r3 + 0x168; // 0x805FB7F0
    *(0x14 + r1) = r29; // stw @ 0x805FB7F4
    /* li r29, 0 */ // 0x805FB7F8
    *(0x10 + r1) = r28; // stw @ 0x805FB7FC
    r28 = r3;
    r3 = r28;
    FUN_8061ED38(r3); // bl 0x8061ED38
    r5 = r3;
    r4 = r30;
    r6 = r31;
    r3 = r28 + 0x1c; // 0x805FB818
    FUN_808589CC(r5, r4, r6, r3); // bl 0x808589CC
    r29 = r29 + 1; // 0x805FB820
    r30 = r30 + 0x30; // 0x805FB824
    r31 = r31 + 0x30; // 0x805FB82C
    if (<) goto 0x0x805fb804;
    r0 = *(0x24 + r1); // lwz @ 0x805FB834
    r31 = *(0x1c + r1); // lwz @ 0x805FB838
    r30 = *(0x18 + r1); // lwz @ 0x805FB83C
    r29 = *(0x14 + r1); // lwz @ 0x805FB840
    r28 = *(0x10 + r1); // lwz @ 0x805FB844
    return;
}