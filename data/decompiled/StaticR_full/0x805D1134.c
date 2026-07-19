/* Function at 0x805D1134, size=64 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805D1134(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x805D113C
    /* lis r5, 0 */ // 0x805D1140
    r4 = r4 + 0; // 0x805D1148
    *(0x4c + r1) = r31; // stw @ 0x805D114C
    *(0x48 + r1) = r30; // stw @ 0x805D1150
    *(0x44 + r1) = r29; // stw @ 0x805D1154
    *(0x40 + r1) = r28; // stw @ 0x805D1158
    r28 = r3;
    /* li r3, 3 */ // 0x805D1160
    r29 = *(0 + r5); // lwz @ 0x805D1164
    r30 = *(0x614 + r29); // lwz @ 0x805D1168
    *(0x10 + r1) = r4; // stw @ 0x805D116C
    FUN_805E3430(r3); // bl 0x805E3430
}