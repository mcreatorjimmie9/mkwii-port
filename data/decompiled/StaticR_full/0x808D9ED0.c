/* Function at 0x808D9ED0, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808D9ED0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808D9ED8
    *(0x1c + r1) = r31; // stw @ 0x808D9EE0
    /* lis r31, 0 */ // 0x808D9EE4
    r31 = r31 + 0; // 0x808D9EE8
    *(0x18 + r1) = r30; // stw @ 0x808D9EEC
    r30 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lfs f0, 4(r31) */ // 0x808D9EF8
    /* lis r3, 0 */ // 0x808D9EFC
    r3 = r3 + 0; // 0x808D9F00
    *(0 + r30) = r3; // stw @ 0x808D9F04
    /* lis r4, 0 */ // 0x808D9F08
    /* lfs f1, 0x10(r31) */ // 0x808D9F0C
    /* stfs f0, 0xac(r30) */ // 0x808D9F10
    r3 = r30;
    /* lfd f2, 8(r31) */ // 0x808D9F18
    /* lfs f3, 0(r4) */ // 0x808D9F1C
    /* lfs f0, 0x14(r31) */ // 0x808D9F20
    /* fmul f2, f2, f3 */ // 0x808D9F24
    /* stfs f1, 0xb4(r30) */ // 0x808D9F28
    /* stfs f0, 0xb8(r30) */ // 0x808D9F2C
    /* frsp f2, f2 */ // 0x808D9F30
    /* stfs f1, 0xc(r1) */ // 0x808D9F34
    /* stfs f2, 0xb0(r30) */ // 0x808D9F38
    r31 = *(0x1c + r1); // lwz @ 0x808D9F3C
    r30 = *(0x18 + r1); // lwz @ 0x808D9F40
    r0 = *(0x24 + r1); // lwz @ 0x808D9F44
    /* stfs f0, 0x10(r1) */ // 0x808D9F48
    /* stfs f2, 8(r1) */ // 0x808D9F4C
    return;
}