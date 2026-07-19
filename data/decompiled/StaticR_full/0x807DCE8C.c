/* Function at 0x807DCE8C, size=60 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DCE8C(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807DCE94
    r4 = r4 + 0; // 0x807DCE9C
    *(0x6c + r1) = r31; // stw @ 0x807DCEA0
    /* lis r31, 0 */ // 0x807DCEA4
    *(0x68 + r1) = r30; // stw @ 0x807DCEA8
    r30 = r3;
    /* lfs f0, 0xd0(r3) */ // 0x807DCEB0
    /* fneg f1, f0 */ // 0x807DCEB8
    /* lfs f0, 0(r31) */ // 0x807DCEBC
    /* fmuls f1, f1, f0 */ // 0x807DCEC0
    FUN_805E3430(r3); // bl 0x805E3430
}