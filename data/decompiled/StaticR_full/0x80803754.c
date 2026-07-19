/* Function at 0x80803754, size=92 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80803754(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8080375C
    r31 = r3;
    *(0x48 + r1) = r30; // stw @ 0x8080376C
    /* lis r30, 0 */ // 0x80803770
    r30 = r30 + 0; // 0x80803774
    *(0x44 + r1) = r29; // stw @ 0x80803778
    /* lfs f0, 8(r30) */ // 0x8080377C
    /* lfs f2, 0x110(r3) */ // 0x80803780
    /* lfs f1, 0(r4) */ // 0x80803784
    /* fadds f1, f2, f1 */ // 0x80803788
    /* stfs f1, 0x110(r3) */ // 0x8080378C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80803790
    if (<=) goto 0x0x808037a0;
    /* lfs f0, 0(r30) */ // 0x80803798
    /* stfs f0, 0x110(r3) */ // 0x8080379C
    /* lfs f1, 0x110(r3) */ // 0x808037A0
    /* lfs f0, 0xc(r30) */ // 0x808037A4
    /* fmuls f1, f1, f0 */ // 0x808037A8
    FUN_805E3430(); // bl 0x805E3430
}