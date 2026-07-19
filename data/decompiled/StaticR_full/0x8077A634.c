/* Function at 0x8077A634, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8077A634(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8077A648
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8077A650
    /* lis r29, 0 */ // 0x8077A654
    r5 = r29 + 0; // 0x8077A658
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x8077A660
    /* li r0, 2 */ // 0x8077A664
    r3 = r3 + 0; // 0x8077A668
    *(0 + r30) = r3; // stw @ 0x8077A66C
    r3 = r30;
    *(0xb8 + r30) = r0; // stw @ 0x8077A674
    r12 = *(0 + r30); // lwz @ 0x8077A678
    r12 = *(0x28 + r12); // lwz @ 0x8077A67C
    /* mtctr r12 */ // 0x8077A680
    /* bctrl  */ // 0x8077A684
    r29 = r29 + 0; // 0x8077A688
    r4 = r29 + 0xc; // 0x8077A68C
    FUN_805E3430(r4); // bl 0x805E3430
}