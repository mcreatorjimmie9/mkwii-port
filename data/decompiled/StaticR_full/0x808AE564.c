/* Function at 0x808AE564, size=156 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808AE564(int r3, int r4, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808AE578
    r31 = r31 + 0; // 0x808AE57C
    *(0x28 + r1) = r30; // stw @ 0x808AE580
    r30 = r7;
    *(0x24 + r1) = r29; // stw @ 0x808AE588
    r29 = r3;
    if (==) goto 0x0x808ae66c;
    r0 = *(0xb0 + r3); // lwz @ 0x808AE594
    if (>) goto 0x0x808ae66c;
    /* lis r4, 0 */ // 0x808AE5A0
    /* li r0, 5 */ // 0x808AE5A4
    r4 = *(0 + r4); // lwz @ 0x808AE5A8
    /* lfs f0, 0(r31) */ // 0x808AE5AC
    r4 = *(0x20 + r4); // lwz @ 0x808AE5B0
    *(0xe4 + r3) = r4; // stw @ 0x808AE5B4
    *(0xb0 + r3) = r0; // stw @ 0x808AE5B8
    /* lfs f2, 8(r7) */ // 0x808AE5BC
    /* lfs f1, 0(r7) */ // 0x808AE5C0
    /* fneg f2, f2 */ // 0x808AE5C4
    /* fneg f1, f1 */ // 0x808AE5C8
    /* stfs f0, 0xf0(r3) */ // 0x808AE5CC
    /* stfs f1, 0xec(r3) */ // 0x808AE5D0
    /* stfs f2, 0xf4(r3) */ // 0x808AE5D4
    r3 = r3 + 0xec; // 0x808AE5D8
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f1, 0x30(r31) */ // 0x808AE5E0
    r4 = r29 + 0xec; // 0x808AE5E8
    FUN_805A443C(r3, r3, r4); // bl 0x805A443C
    /* lis r4, 0 */ // 0x808AE5F0
    /* lfs f1, 0(r4) */ // 0x808AE5F8
}