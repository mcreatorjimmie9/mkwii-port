/* Function at 0x807E2784, size=60 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807E2784(int r3, int r4)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807E2794
    r31 = r31 + 0; // 0x807E2798
    *(0x78 + r1) = r30; // stw @ 0x807E279C
    r30 = r3;
    r4 = r30 + 0xcc; // 0x807E27A8
    FUN_805A4400(r3, r4); // bl 0x805A4400
    /* lfs f0, 0(r31) */ // 0x807E27B0
    /* stfs f0, 0x6c(r1) */ // 0x807E27B8
    FUN_805E3430(r4, r3); // bl 0x805E3430
}