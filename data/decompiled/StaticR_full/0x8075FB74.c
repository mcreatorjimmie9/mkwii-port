/* Function at 0x8075FB74, size=236 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8075FB74(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x8075FB7C
    r5 = r5 + 0; // 0x8075FB84
    *(0x28 + r1) = r30; // stw @ 0x8075FB8C
    *(0x24 + r1) = r29; // stw @ 0x8075FB90
    r29 = r3;
    *(0x20 + r1) = r28; // stw @ 0x8075FB98
    FUN_8089F578(); // bl 0x8089F578
    /* lis r8, 0 */ // 0x8075FBA0
    /* li r30, 0 */ // 0x8075FBA4
    r8 = r8 + 0; // 0x8075FBA8
    /* lis r4, 0x4330 */ // 0x8075FBAC
    r7 = r8 + 0xec; // 0x8075FBB0
    /* li r0, -1 */ // 0x8075FBB4
    *(0xb8 + r29) = r0; // stw @ 0x8075FBB8
    /* lis r5, 0 */ // 0x8075FBBC
    r6 = *(0xa0 + r29); // lwz @ 0x8075FBC0
    /* lis r3, 0 */ // 0x8075FBC4
    *(0xb4 + r29) = r30; // sth @ 0x8075FBC8
    /* lis r28, 0 */ // 0x8075FBCC
    /* lfd f2, 0(r5) */ // 0x8075FBD0
    r31 = r28 + 0; // 0x8075FBD4
    *(0xbc + r29) = r30; // stw @ 0x8075FBD8
    /* li r0, 4 */ // 0x8075FBDC
    /* lfs f1, 0(r3) */ // 0x8075FBE0
    /* li r3, 8 */ // 0x8075FBE4
    *(0xc0 + r29) = r30; // sth @ 0x8075FBE8
    *(0xc8 + r29) = r30; // stw @ 0x8075FBEC
    *(0xcc + r29) = r30; // stw @ 0x8075FBF0
    *(0 + r29) = r8; // stw @ 0x8075FBF4
    *(0xb0 + r29) = r7; // stw @ 0x8075FBF8
    r5 = *(0 + r6); // lwz @ 0x8075FBFC
    *(8 + r1) = r4; // stw @ 0x8075FC00
    r5 = *(0x2a + r5); // lha @ 0x8075FC04
    *(0xd0 + r29) = r5; // sth @ 0x8075FC08
    r5 = *(0 + r6); // lwz @ 0x8075FC0C
    *(0x10 + r1) = r4; // stw @ 0x8075FC10
    r4 = *(0x2e + r5); // lha @ 0x8075FC14
    /* xoris r4, r4, 0x8000 */ // 0x8075FC18
    *(0xc + r1) = r4; // stw @ 0x8075FC1C
    /* lfd f0, 8(r1) */ // 0x8075FC20
    /* fsubs f0, f0, f2 */ // 0x8075FC24
    /* fdivs f0, f0, f1 */ // 0x8075FC28
    /* stfs f0, 0xd8(r29) */ // 0x8075FC2C
    r4 = *(0 + r6); // lwz @ 0x8075FC30
    r4 = *(0x2c + r4); // lha @ 0x8075FC34
    /* xoris r4, r4, 0x8000 */ // 0x8075FC38
    *(0x14 + r1) = r4; // stw @ 0x8075FC3C
    /* lfd f0, 0x10(r1) */ // 0x8075FC40
    *(0xcc + r29) = r29; // stw @ 0x8075FC44
    /* fsubs f0, f0, f2 */ // 0x8075FC48
    *(0xc8 + r29) = r31; // stw @ 0x8075FC4C
    /* fdivs f0, f0, f1 */ // 0x8075FC50
    *(0xc0 + r29) = r0; // sth @ 0x8075FC54
    /* stfs f0, 0xd4(r29) */ // 0x8075FC58
    FUN_805E3430(); // bl 0x805E3430
}