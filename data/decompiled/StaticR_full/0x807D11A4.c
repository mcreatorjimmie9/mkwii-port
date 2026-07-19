/* Function at 0x807D11A4, size=68 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807D11A4(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x44 + r1) = r29; // stw @ 0x807D11BC
    /* lis r29, 0 */ // 0x807D11C0
    r29 = r29 + 0; // 0x807D11C4
    *(0x40 + r1) = r28; // stw @ 0x807D11C8
    r4 = *(0x114 + r3); // lwz @ 0x807D11CC
    r28 = *(0 + r4); // lwz @ 0x807D11D0
    r3 = r28;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r30 = r3;
    r3 = r28;
    FUN_8061DA88(r3, r3); // bl 0x8061DA88
}