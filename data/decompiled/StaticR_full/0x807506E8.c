/* Function at 0x807506E8, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807506E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807506F8
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80750700
    r12 = *(0x90 + r12); // lwz @ 0x80750704
    /* mtctr r12 */ // 0x80750708
    /* bctrl  */ // 0x8075070C
    /* li r31, 0 */ // 0x80750710
    *(0xc4 + r30) = r31; // stw @ 0x80750714
    /* lis r3, 0 */ // 0x80750718
    /* lis r4, 0 */ // 0x8075071C
    /* lfs f2, 0(r3) */ // 0x80750720
    /* lis r3, 0 */ // 0x80750724
    /* lfs f1, 0(r4) */ // 0x80750728
    /* lfs f0, 0(r3) */ // 0x8075072C
    /* fmuls f1, f2, f1 */ // 0x80750730
    /* fdivs f1, f1, f0 */ // 0x80750734
    FUN_805E3430(r3); // bl 0x805E3430
}