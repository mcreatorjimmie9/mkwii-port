/* Function at 0x808D2904, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808D2904(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x808D2918
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808D2920
    r29 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x808D2928
    *(0x143c + r3) = r0; // stw @ 0x808D292C
    /* li r3, 0x7a */ // 0x808D2930
    FUN_808E8220(r3); // bl 0x808E8220
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_808E845C(r3, r4, r5, r6); // bl 0x808E845C
    r0 = *(0x24 + r1); // lwz @ 0x808D2948
    r31 = *(0x1c + r1); // lwz @ 0x808D294C
    r30 = *(0x18 + r1); // lwz @ 0x808D2950
    r29 = *(0x14 + r1); // lwz @ 0x808D2954
    return;
}