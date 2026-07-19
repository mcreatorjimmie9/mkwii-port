/* Function at 0x8063D494, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8063D494(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8063D4A8
    r30 = r3;
    FUN_805F4098(); // bl 0x805F4098
    /* lis r4, 0 */ // 0x8063D4B4
    *(0x20 + r30) = r31; // stw @ 0x8063D4B8
    r4 = r4 + 0; // 0x8063D4BC
    r3 = r30;
    *(0 + r30) = r4; // stw @ 0x8063D4C4
    r31 = *(0xc + r1); // lwz @ 0x8063D4C8
    r30 = *(8 + r1); // lwz @ 0x8063D4CC
    r0 = *(0x14 + r1); // lwz @ 0x8063D4D0
    return;
}