/* Function at 0x805AAE7C, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805AAE7C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x805AAE90
    r29 = r3;
    FUN_805AAD20(); // bl 0x805AAD20
    /* li r30, 0 */ // 0x805AAE9C
    /* lis r31, 0 */ // 0x805AAEA0
    /* b 0x805aaebc */ // 0x805AAEA4
    r3 = *(0 + r31); // lwz @ 0x805AAEA8
    r4 = *(8 + r30); // lwz @ 0x805AAEAC
    FUN_805CFD48(); // bl 0x805CFD48
}