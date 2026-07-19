/* Function at 0x805BBC24, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805BBC24(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x805BBC2C
    /* li r6, 0 */ // 0x805BBC30
    *(0x18 + r1) = r30; // stw @ 0x805BBC3C
    /* lis r30, 0 */ // 0x805BBC40
    *(0x14 + r1) = r29; // stw @ 0x805BBC44
    *(0x10 + r1) = r28; // stw @ 0x805BBC48
    r28 = r3;
    r4 = *(0 + r30); // lwz @ 0x805BBC50
    r3 = *(0 + r5); // lwz @ 0x805BBC54
    /* li r5, 1 */ // 0x805BBC58
    r4 = *(0x34 + r4); // lwz @ 0x805BBC5C
    FUN_805E3430(r5); // bl 0x805E3430
}