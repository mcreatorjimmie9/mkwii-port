/* Function at 0x807D8988, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807D8988(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807D8998
    r31 = r31 + 0; // 0x807D899C
    *(0x38 + r1) = r30; // stw @ 0x807D89A0
    /* lis r30, 0 */ // 0x807D89A4
    r30 = r30 + 0; // 0x807D89A8
    *(0x34 + r1) = r29; // stw @ 0x807D89AC
    r29 = r3;
    *(0x30 + r1) = r28; // stw @ 0x807D89B4
    r4 = *(0 + r3); // lwz @ 0x807D89B8
    r28 = *(0 + r4); // lwz @ 0x807D89BC
    r3 = r28;
    FUN_8061DA88(r3); // bl 0x8061DA88
}