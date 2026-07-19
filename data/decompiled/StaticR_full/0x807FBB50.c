/* Function at 0x807FBB50, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807FBB50(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x807FBB64
    r30 = r5;
    /* li r5, 0 */ // 0x807FBB6C
    *(0x14 + r1) = r29; // stw @ 0x807FBB70
    r29 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807FBB7C
    *(0xbc + r29) = r30; // stw @ 0x807FBB80
    r4 = r4 + 0; // 0x807FBB84
    r3 = r29;
    *(0 + r29) = r4; // stw @ 0x807FBB8C
    *(0xc0 + r29) = r31; // stw @ 0x807FBB90
    r31 = *(0x1c + r1); // lwz @ 0x807FBB94
    r30 = *(0x18 + r1); // lwz @ 0x807FBB98
    r29 = *(0x14 + r1); // lwz @ 0x807FBB9C
    r0 = *(0x24 + r1); // lwz @ 0x807FBBA0
    return;
}