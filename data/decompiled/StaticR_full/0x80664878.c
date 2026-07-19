/* Function at 0x80664878, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80664878(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* srwi r4, r4, 0x18 */ // 0x80664880
    /* li r6, 0 */ // 0x80664884
    *(0x24 + r1) = r0; // stw @ 0x80664888
    *(0x1c + r1) = r31; // stw @ 0x8066488C
    /* lis r31, 0 */ // 0x80664890
    r31 = r31 + 0; // 0x80664894
    *(0x18 + r1) = r30; // stw @ 0x80664898
    r30 = r4 + 0x15e0; // 0x8066489C
    r5 = r30;
    r4 = r31 + 0x1ed; // 0x806648A4
    *(0x14 + r1) = r29; // stw @ 0x806648A8
    r29 = r3;
    r3 = r3 + 0x1c8; // 0x806648B0
    FUN_806A093C(r5, r4, r3); // bl 0x806A093C
    r5 = r30;
    r3 = r29 + 0x1c8; // 0x806648BC
    r4 = r31 + 0x1f5; // 0x806648C0
    /* li r6, 0 */ // 0x806648C4
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r0 = *(0x24 + r1); // lwz @ 0x806648CC
    r31 = *(0x1c + r1); // lwz @ 0x806648D0
    r30 = *(0x18 + r1); // lwz @ 0x806648D4
    r29 = *(0x14 + r1); // lwz @ 0x806648D8
    return;
}