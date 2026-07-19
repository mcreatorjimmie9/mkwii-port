/* Function at 0x805AB960, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805AB960(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x805AB968
    r31 = r3;
    /* li r3, 0x28 */ // 0x805AB978
    *(0x18 + r1) = r30; // stw @ 0x805AB97C
    *(0x14 + r1) = r29; // stw @ 0x805AB980
    *(0x10 + r1) = r28; // stw @ 0x805AB984
    r4 = *(0 + r4); // lwz @ 0x805AB988
    r4 = *(0x44 + r4); // lwz @ 0x805AB98C
    r5 = *(0 + r4); // lwz @ 0x805AB990
    r4 = *(4 + r5); // lhz @ 0x805AB994
    r0 = *(6 + r5); // lhz @ 0x805AB998
    r29 = r4 >> 1; // srawi
    r28 = r0 >> 1; // srawi
    FUN_805E3430(); // bl 0x805E3430
}