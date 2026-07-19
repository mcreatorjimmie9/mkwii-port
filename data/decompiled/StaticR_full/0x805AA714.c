/* Function at 0x805AA714, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805AA714(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805AA724
    *(0x18 + r1) = r30; // stw @ 0x805AA728
    /* li r30, 0 */ // 0x805AA72C
    *(0x14 + r1) = r29; // stw @ 0x805AA730
    r29 = r3;
    /* b 0x805aa750 */ // 0x805AA738
    r3 = *(0 + r31); // lwz @ 0x805AA73C
    r4 = *(8 + r30); // lwz @ 0x805AA740
    FUN_805CFD48(); // bl 0x805CFD48
}