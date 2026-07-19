/* Function at 0x8061A3AC, size=44 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8061A3AC(int r3)
{
    /* Stack frame: -288(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x8061A3BC
    r31 = r31 + 0; // 0x8061A3C0
    *(0x118 + r1) = r30; // stw @ 0x8061A3C4
    *(0x114 + r1) = r29; // stw @ 0x8061A3C8
    r29 = r3;
    *(0x110 + r1) = r28; // stw @ 0x8061A3D0
    FUN_8061DA88(); // bl 0x8061DA88
}