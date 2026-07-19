/* Function at 0x805D26E8, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805D26E8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r5, 1 */ // 0x805D26F0
    r31 = r3;
    /* lis r3, 0 */ // 0x805D2700
    *(0x18 + r1) = r30; // stw @ 0x805D2704
    *(0x14 + r1) = r29; // stw @ 0x805D2708
    *(0x10 + r1) = r28; // stw @ 0x805D270C
    r3 = *(0 + r3); // lwz @ 0x805D2710
    r4 = *(0x34 + r31); // lwz @ 0x805D2714
    FUN_805E3430(); // bl 0x805E3430
}