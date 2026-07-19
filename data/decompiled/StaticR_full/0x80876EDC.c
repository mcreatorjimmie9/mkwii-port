/* Function at 0x80876EDC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80876EDC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80876EE4
    r4 = r4 + 0; // 0x80876EEC
    r4 = r4 + 0xd; // 0x80876EF0
    *(0xc + r1) = r31; // stw @ 0x80876EF4
    /* lis r31, 0 */ // 0x80876EF8
    r31 = r31 + 0; // 0x80876EFC
    *(8 + r1) = r30; // stw @ 0x80876F00
    r30 = r3;
    r3 = r3 + 0xa8; // 0x80876F08
    FUN_80665D1C(r3); // bl 0x80665D1C
    /* lfs f0, 0x18(r31) */ // 0x80876F10
    /* lfs f1, 0x20(r30) */ // 0x80876F14
    *(0x18c + r30) = r3; // stw @ 0x80876F18
    r3 = r30 + 0x178; // 0x80876F1C
    /* stfs f1, 0x17c(r30) */ // 0x80876F20
    /* stfs f0, 0x178(r30) */ // 0x80876F24
    /* stfs f0, 0x180(r30) */ // 0x80876F28
    FUN_805E3430(r3); // bl 0x805E3430
}