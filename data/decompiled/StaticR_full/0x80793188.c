/* Function at 0x80793188, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80793188(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x80793190
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x807931A0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807931A8
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x807931B0
    FUN_805E3430(); // bl 0x805E3430
}