/* Function at 0x807AED3C, size=60 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807AED3C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807AED4C
    r31 = r31 + 0; // 0x807AED50
    *(0x28 + r1) = r30; // stw @ 0x807AED54
    /* lis r30, 0 */ // 0x807AED58
    r30 = r30 + 0; // 0x807AED5C
    *(0x24 + r1) = r29; // stw @ 0x807AED60
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x807AED68
    r28 = r3;
    r3 = *(0 + r3); // lwz @ 0x807AED70
    FUN_8061DA88(); // bl 0x8061DA88
}