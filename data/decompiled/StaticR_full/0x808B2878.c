/* Function at 0x808B2878, size=160 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808B2878(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x808B2880
    /* lfs f0, 0(r5) */ // 0x808B2884
    *(0x64 + r1) = r0; // stw @ 0x808B2888
    /* lfs f1, 0(r6) */ // 0x808B288C
    *(0x5c + r1) = r31; // stw @ 0x808B2890
    /* fcmpu cr0, f1, f0 */ // 0x808B2894
    *(0x58 + r1) = r30; // stw @ 0x808B2898
    r30 = r4;
    *(0x54 + r1) = r29; // stw @ 0x808B28A0
    r29 = r3;
    if (==) goto 0x0x808b2914;
    /* stfs f0, 8(r1) */ // 0x808B28AC
    /* stfs f0, 0xc(r1) */ // 0x808B28B8
    /* stfs f0, 0x10(r1) */ // 0x808B28BC
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r30;
    r5 = r4;
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    /* li r31, 0 */ // 0x808B28D4
    /* b 0x808b2900 */ // 0x808B28D8
    /* clrlwi r0, r31, 0x18 */ // 0x808B28DC
    r4 = *(0x24 + r29); // lwz @ 0x808B28E0
    /* mulli r5, r0, 0xc */ // 0x808B28E4
    r0 = *(0x28 + r29); // lwz @ 0x808B28E8
    r4 = r4 + r5; // 0x808B28F0
    r5 = r0 + r5; // 0x808B28F4
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r31 + 1; // 0x808B28FC
    r0 = *(0x21 + r29); // lbz @ 0x808B2900
    /* clrlwi r3, r31, 0x18 */ // 0x808B2904
    if (<) goto 0x0x808b28dc;
    /* b 0x808b2950 */ // 0x808B2910
    /* li r31, 0 */ // 0x808B2914
}