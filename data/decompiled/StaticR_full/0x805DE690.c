/* Function at 0x805DE690, size=88 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805DE690(int r3, int r4)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805DE698
    *(0x7c + r1) = r31; // stw @ 0x805DE6A0
    r31 = r3;
    *(0x78 + r1) = r30; // stw @ 0x805DE6A8
    /* lis r30, 0 */ // 0x805DE6AC
    r30 = r30 + 0; // 0x805DE6B0
    r0 = *(0 + r4); // lwz @ 0x805DE6B4
    /* lfs f1, 0(r30) */ // 0x805DE6B8
    /* lfs f6, 4(r30) */ // 0x805DE6C0
    if (!=) goto 0x0x805de6ec;
    /* fmr f3, f1 */ // 0x805DE6C8
    /* lfs f2, 8(r30) */ // 0x805DE6CC
    /* fmr f5, f1 */ // 0x805DE6D0
    /* lfs f4, 0xc(r30) */ // 0x805DE6D4
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r4, 1 */ // 0x805DE6E4
}