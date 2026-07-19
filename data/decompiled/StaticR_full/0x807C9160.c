/* Function at 0x807C9160, size=48 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807C9160(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807C9170
    r31 = r31 + 0; // 0x807C9174
    *(0x28 + r1) = r30; // stw @ 0x807C9178
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x807C9180
    r4 = *(0xbc + r3); // lwz @ 0x807C9184
    r3 = *(0 + r4); // lwz @ 0x807C9188
    FUN_8061DA88(); // bl 0x8061DA88
}