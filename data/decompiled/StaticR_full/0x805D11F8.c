/* Function at 0x805D11F8, size=60 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805D11F8(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x805D1200
    r5 = r5 + 0; // 0x805D1208
    *(0x48 + r1) = r30; // stw @ 0x805D1210
    *(0x44 + r1) = r29; // stw @ 0x805D1214
    r29 = r4;
    *(0x40 + r1) = r28; // stw @ 0x805D121C
    r28 = r3;
    r30 = *(0x614 + r3); // lwz @ 0x805D1224
    /* li r3, 3 */ // 0x805D1228
    *(0x10 + r1) = r5; // stw @ 0x805D122C
    FUN_805E3430(r3); // bl 0x805E3430
}