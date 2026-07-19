/* Function at 0x807F25DC, size=80 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807F25DC(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x807F25EC
    r31 = r31 + 0; // 0x807F25F0
    *(0x48 + r1) = r30; // stw @ 0x807F25F4
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x807F25FC
    *(0x40 + r1) = r28; // stw @ 0x807F2600
    r28 = *(0xe4 + r3); // lwz @ 0x807F2604
    r3 = *(0x10 + r28); // lwz @ 0x807F2608
    r3 = *(0 + r3); // lwz @ 0x807F260C
    if (==) goto 0x0x807f2628;
    r3 = r3 + 0xc; // 0x807F2618
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x807f2630 */ // 0x807F2624
}