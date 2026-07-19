/* Function at 0x806D15B4, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806D15B4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x806D15C8
    r30 = r4;
    /* mulli r0, r30, 0x254 */ // 0x806D15D0
    r4 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806D15D8
    r29 = r3;
    /* li r5, 0 */ // 0x806D15E0
    r3 = r3 + r0; // 0x806D15E4
    r3 = r3 + 0x578; // 0x806D15E8
    FUN_806A0A34(r5, r3); // bl 0x806A0A34
    r0 = r30 rlwinm 2; // rlwinm
    r3 = r29 + r0; // 0x806D15F4
    *(0xed8 + r3) = r31; // stw @ 0x806D15F8
    r31 = *(0x1c + r1); // lwz @ 0x806D15FC
    r30 = *(0x18 + r1); // lwz @ 0x806D1600
    r29 = *(0x14 + r1); // lwz @ 0x806D1604
    r0 = *(0x24 + r1); // lwz @ 0x806D1608
    return;
}