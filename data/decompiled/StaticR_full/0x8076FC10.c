/* Function at 0x8076FC10, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8076FC10(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8076FC24
    r30 = r3;
    FUN_8076CFA4(); // bl 0x8076CFA4
    /* lis r4, 0 */ // 0x8076FC30
    /* lis r3, 0 */ // 0x8076FC34
    r4 = r4 + 0; // 0x8076FC38
    *(0 + r30) = r4; // stw @ 0x8076FC3C
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x8076FC44
    FUN_80770F48(r3, r4, r4); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x8076FC4C
    r12 = *(0x10 + r12); // lwz @ 0x8076FC50
    /* mtctr r12 */ // 0x8076FC54
    /* bctrl  */ // 0x8076FC58
    *(0x58 + r30) = r3; // stw @ 0x8076FC5C
    /* lis r5, 0 */ // 0x8076FC60
    r3 = r30;
    /* li r4, 0 */ // 0x8076FC68
    r12 = *(0 + r30); // lwz @ 0x8076FC6C
    /* lfs f1, 0(r5) */ // 0x8076FC70
    r12 = *(0x10 + r12); // lwz @ 0x8076FC74
    /* mtctr r12 */ // 0x8076FC78
    /* bctrl  */ // 0x8076FC7C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8076FC84
    r30 = *(8 + r1); // lwz @ 0x8076FC88
    r0 = *(0x14 + r1); // lwz @ 0x8076FC8C
    return;
}