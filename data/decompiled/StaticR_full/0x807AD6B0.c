/* Function at 0x807AD6B0, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807AD6B0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f0, 0(r4) */ // 0x807AD6B8
    /* lfs f1, 4(r4) */ // 0x807AD6C0
    *(0x1c + r1) = r31; // stw @ 0x807AD6C4
    /* li r31, 0 */ // 0x807AD6C8
    /* lfs f2, 8(r4) */ // 0x807AD6CC
    *(0x18 + r1) = r30; // stw @ 0x807AD6D0
    r30 = r3;
    r5 = *(4 + r3); // lwz @ 0x807AD6D8
    r4 = *(0x24 + r3); // lwz @ 0x807AD6DC
    r5 = r5 + 1; // 0x807AD6E0
    /* stfs f0, 8(r1) */ // 0x807AD6E4
    /* slwi r0, r5, 0x19 */ // 0x807AD6E8
    /* srwi r5, r5, 0x1f */ // 0x807AD6EC
    /* stfs f1, 0xc(r1) */ // 0x807AD6F0
    /* subf r0, r5, r0 */ // 0x807AD6F4
    /* rotlwi r0, r0, 7 */ // 0x807AD6F8
    /* stfs f2, 0x10(r1) */ // 0x807AD6FC
    r0 = r0 + r5; // 0x807AD700
    *(4 + r3) = r0; // stw @ 0x807AD704
    /* mulli r0, r0, 0xc */ // 0x807AD708
    /* stfsx f0, r4, r0 */ // 0x807AD70C
    r3 = r4 + r0; // 0x807AD710
    /* stfs f1, 4(r3) */ // 0x807AD714
    /* stfs f2, 8(r3) */ // 0x807AD718
    r3 = r30;
    r4 = r31;
    FUN_807AD904(r3, r4); // bl 0x807AD904
    r31 = r31 + 1; // 0x807AD728
    if (<) goto 0x0x807ad71c;
    r0 = *(0x24 + r1); // lwz @ 0x807AD734
    r31 = *(0x1c + r1); // lwz @ 0x807AD738
    r30 = *(0x18 + r1); // lwz @ 0x807AD73C
    return;
}