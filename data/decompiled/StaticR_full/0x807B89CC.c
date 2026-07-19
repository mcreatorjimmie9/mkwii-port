/* Function at 0x807B89CC, size=52 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807B89CC(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x34 + r1) = r29; // stw @ 0x807B89E4
    *(0x30 + r1) = r28; // stw @ 0x807B89E8
    r4 = *(0x38 + r3); // lwz @ 0x807B89EC
    r3 = *(0 + r4); // lwz @ 0x807B89F0
    r4 = *(0x10 + r3); // lwz @ 0x807B89F4
    r30 = *(0x14c + r4); // lwz @ 0x807B89F8
    FUN_8061DA88(); // bl 0x8061DA88
}