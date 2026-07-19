/* Function at 0x80664730, size=120 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80664730(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0xd4 + r1) = r29; // stw @ 0x80664748
    r29 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r31, 0 */ // 0x80664758
    *(0x50 + r1) = r30; // stw @ 0x8066475C
    r31 = r31 + 0; // 0x80664760
    r3 = r29 + 0x1c8; // 0x80664764
    r4 = r31 + 0x1c6; // 0x80664768
    /* li r5, 0x251d */ // 0x80664770
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r29 + 0x1c8; // 0x80664778
    r4 = r31 + 0x1cf; // 0x8066477C
    /* li r5, 0x251d */ // 0x80664784
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r0 = *(0xe4 + r1); // lwz @ 0x8066478C
    r31 = *(0xdc + r1); // lwz @ 0x80664790
    r30 = *(0xd8 + r1); // lwz @ 0x80664794
    r29 = *(0xd4 + r1); // lwz @ 0x80664798
    return;
}