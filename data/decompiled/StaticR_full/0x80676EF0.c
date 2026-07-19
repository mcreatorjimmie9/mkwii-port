/* Function at 0x80676EF0, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80676EF0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0x4330 */ // 0x80676F00
    *(0x18 + r1) = r30; // stw @ 0x80676F04
    /* lis r30, 0 */ // 0x80676F08
    r30 = r30 + 0; // 0x80676F0C
    *(0x14 + r1) = r29; // stw @ 0x80676F10
    /* lfd f3, 0x138(r30) */ // 0x80676F14
    *(0x10 + r1) = r28; // stw @ 0x80676F18
    r28 = r3;
    /* lfs f2, 0x128(r30) */ // 0x80676F20
    r0 = *(0x190 + r3); // lwz @ 0x80676F24
    *(8 + r1) = r31; // stw @ 0x80676F28
    /* xoris r0, r0, 0x8000 */ // 0x80676F2C
    /* lfs f1, 0x12c(r30) */ // 0x80676F30
    *(0xc + r1) = r0; // stw @ 0x80676F34
    /* li r0, 1 */ // 0x80676F38
    /* lfd f0, 8(r1) */ // 0x80676F3C
    *(0x18c + r3) = r0; // stw @ 0x80676F40
    /* fsubs f3, f0, f3 */ // 0x80676F44
    /* lfs f0, 0x124(r30) */ // 0x80676F48
    /* fmuls f2, f3, f2 */ // 0x80676F4C
    /* fdivs f1, f2, f1 */ // 0x80676F50
    /* fsubs f1, f0, f1 */ // 0x80676F54
    /* stfs f1, 0x19c(r3) */ // 0x80676F58
    FUN_805E3430(); // bl 0x805E3430
}