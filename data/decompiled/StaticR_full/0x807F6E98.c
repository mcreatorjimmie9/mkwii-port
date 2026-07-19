/* Function at 0x807F6E98, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807F6E98(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807F6EA0
    *(0xc + r1) = r31; // stw @ 0x807F6EA8
    *(8 + r1) = r30; // stw @ 0x807F6EAC
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807F6EB8
    /* lis r3, 0 */ // 0x807F6EBC
    /* lfs f0, 0(r3) */ // 0x807F6EC0
    r4 = r4 + 0; // 0x807F6EC4
    *(0 + r30) = r4; // stw @ 0x807F6EC8
    /* lis r4, 0 */ // 0x807F6ECC
    r4 = r4 + 0; // 0x807F6ED0
    /* li r3, 0x7c */ // 0x807F6ED4
    /* stfs f0, 0xd0(r30) */ // 0x807F6ED8
    *(0 + r30) = r4; // stw @ 0x807F6EDC
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
}