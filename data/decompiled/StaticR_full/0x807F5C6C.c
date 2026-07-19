/* Function at 0x807F5C6C, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807F5C6C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x807F5C74
    *(0x18 + r1) = r30; // stw @ 0x807F5C80
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807F5C88
    r29 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807F5C94
    /* lis r3, 0 */ // 0x807F5C98
    /* lfs f0, 0(r3) */ // 0x807F5C9C
    r4 = r4 + 0; // 0x807F5CA0
    *(0 + r29) = r4; // stw @ 0x807F5CA4
    /* lis r4, 0 */ // 0x807F5CA8
    r4 = r4 + 0; // 0x807F5CAC
    /* li r3, 0xb0 */ // 0x807F5CB0
    /* stfs f0, 0xd0(r29) */ // 0x807F5CB4
    *(0 + r29) = r4; // stw @ 0x807F5CB8
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
}