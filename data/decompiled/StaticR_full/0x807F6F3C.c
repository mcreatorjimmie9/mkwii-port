/* Function at 0x807F6F3C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807F6F3C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807F6F44
    *(0xc + r1) = r31; // stw @ 0x807F6F4C
    /* lis r31, 0 */ // 0x807F6F50
    r31 = r31 + 0; // 0x807F6F54
    *(8 + r1) = r30; // stw @ 0x807F6F58
    r30 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807F6F64
    /* lfs f0, 0x94(r31) */ // 0x807F6F68
    r3 = r3 + 0; // 0x807F6F6C
    *(0 + r30) = r3; // stw @ 0x807F6F70
    /* lfs f1, 0xbc(r31) */ // 0x807F6F74
    /* lis r4, 0 */ // 0x807F6F78
    /* stfs f0, 0xd0(r30) */ // 0x807F6F7C
    r4 = r4 + 0; // 0x807F6F80
    /* lfs f0, 0xc0(r31) */ // 0x807F6F84
    /* li r3, 0x7c */ // 0x807F6F88
    *(0 + r30) = r4; // stw @ 0x807F6F8C
    /* stfs f1, 0xcc(r30) */ // 0x807F6F90
    /* stfs f0, 0xd0(r30) */ // 0x807F6F94
    FUN_805E3430(r3); // bl 0x805E3430
}