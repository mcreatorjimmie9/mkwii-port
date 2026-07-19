/* Function at 0x808ACBC0, size=84 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808ACBC0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0x4330 */ // 0x808ACBC8
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x808ACBD8
    /* lis r30, 0 */ // 0x808ACBDC
    /* lfd f2, 0(r30) */ // 0x808ACBE0
    *(0x24 + r1) = r29; // stw @ 0x808ACBE4
    r0 = *(0xc4 + r3); // lha @ 0x808ACBE8
    *(8 + r1) = r4; // stw @ 0x808ACBEC
    /* xoris r0, r0, 0x8000 */ // 0x808ACBF0
    /* lfs f0, 0xcc(r3) */ // 0x808ACBF4
    *(0xc + r1) = r0; // stw @ 0x808ACBF8
    r29 = *(0xb4 + r3); // lwz @ 0x808ACBFC
    /* lfd f1, 8(r1) */ // 0x808ACC00
    *(0x10 + r1) = r4; // stw @ 0x808ACC04
    /* fsubs f1, f1, f2 */ // 0x808ACC08
    /* fmuls f1, f0, f1 */ // 0x808ACC0C
    FUN_805E3430(); // bl 0x805E3430
}