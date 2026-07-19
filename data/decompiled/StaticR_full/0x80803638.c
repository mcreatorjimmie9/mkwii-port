/* Function at 0x80803638, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80803638(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80803648
    r31 = r31 + 0; // 0x8080364C
    *(0x18 + r1) = r30; // stw @ 0x80803650
    r30 = r3;
    /* lfs f0, 8(r31) */ // 0x80803658
    /* lfs f2, 0x114(r3) */ // 0x8080365C
    /* lfs f1, 0x118(r3) */ // 0x80803660
    /* fadds f1, f2, f1 */ // 0x80803664
    /* stfs f1, 0x114(r3) */ // 0x80803668
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8080366C
    if (<=) goto 0x0x8080367c;
    /* lfs f0, 0(r31) */ // 0x80803674
    /* stfs f0, 0x114(r3) */ // 0x80803678
    /* lfs f1, 0x114(r3) */ // 0x8080367C
    /* lfs f0, 0xc(r31) */ // 0x80803680
    /* fmuls f1, f1, f0 */ // 0x80803684
    FUN_805E3430(); // bl 0x805E3430
}