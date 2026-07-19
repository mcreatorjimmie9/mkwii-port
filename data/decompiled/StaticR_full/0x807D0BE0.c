/* Function at 0x807D0BE0, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807D0BE0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807D0BE8
    *(0xc + r1) = r31; // stw @ 0x807D0BF0
    *(8 + r1) = r30; // stw @ 0x807D0BF4
    r30 = r3;
    r4 = *(0x114 + r3); // lwz @ 0x807D0BFC
    r5 = *(0 + r5); // lwz @ 0x807D0C00
    r3 = *(0 + r4); // lwz @ 0x807D0C04
    r31 = *(0x90 + r5); // lwz @ 0x807D0C08
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r4, r3, 0x18 */ // 0x807D0C10
    r3 = r31;
    FUN_807C0A6C(r3); // bl 0x807C0A6C
    /* lis r5, 0 */ // 0x807D0C1C
    /* lis r4, 0 */ // 0x807D0C20
    /* lfs f1, 0(r5) */ // 0x807D0C24
    /* li r0, 0 */ // 0x807D0C28
    /* lfs f0, 0(r4) */ // 0x807D0C2C
    r4 = r30 + 0x38; // 0x807D0C30
    *(0x118 + r30) = r3; // stw @ 0x807D0C34
    r3 = r30;
    *(0x14c + r30) = r0; // stw @ 0x807D0C3C
    *(0x150 + r30) = r0; // stw @ 0x807D0C40
    *(0x154 + r30) = r0; // stw @ 0x807D0C44
    *(0x158 + r30) = r0; // stb @ 0x807D0C48
    /* stfs f1, 0x15c(r30) */ // 0x807D0C4C
    /* stfs f1, 0x124(r30) */ // 0x807D0C50
    /* stfs f1, 0x120(r30) */ // 0x807D0C54
    /* stfs f1, 0x11c(r30) */ // 0x807D0C58
    /* stfs f1, 0x130(r30) */ // 0x807D0C5C
    /* stfs f1, 0x12c(r30) */ // 0x807D0C60
    /* stfs f1, 0x128(r30) */ // 0x807D0C64
    /* stfs f1, 0x13c(r30) */ // 0x807D0C68
    /* stfs f1, 0x138(r30) */ // 0x807D0C6C
    /* stfs f1, 0x134(r30) */ // 0x807D0C70
    /* stfs f0, 0x140(r30) */ // 0x807D0C74
    /* stfs f0, 0x144(r30) */ // 0x807D0C78
    *(0x148 + r30) = r0; // stw @ 0x807D0C7C
    FUN_807CF1B4(); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D0C84
    r31 = *(0xc + r1); // lwz @ 0x807D0C88
    r30 = *(8 + r1); // lwz @ 0x807D0C8C
    return;
}