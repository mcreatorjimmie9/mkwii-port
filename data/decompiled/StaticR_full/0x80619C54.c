/* Function at 0x80619C54, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_80619C54(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80619C60
    r31 = r3;
    FUN_8061DFE0(); // bl 0x8061DFE0
    FUN_80623978(); // bl 0x80623978
    r3 = r31;
    r4 = r31 + 0x68; // 0x80619C74
    FUN_80619958(r3, r4); // bl 0x80619958
    r5 = *(0x68 + r31); // lwz @ 0x80619C7C
    /* lis r4, 0 */ // 0x80619C80
    r0 = *(0x6c + r31); // lwz @ 0x80619C84
    r3 = r31;
    *(0xc + r1) = r0; // stw @ 0x80619C8C
    /* lfs f0, 0(r4) */ // 0x80619C90
    *(8 + r1) = r5; // stw @ 0x80619C94
    /* lfs f1, 0xc(r1) */ // 0x80619C98
    r0 = *(0x70 + r31); // lwz @ 0x80619C9C
    /* fsubs f0, f1, f0 */ // 0x80619CA0
    *(0x10 + r1) = r0; // stw @ 0x80619CA4
    /* stfs f0, 0xc(r1) */ // 0x80619CA8
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_80611EC4(r4); // bl 0x80611EC4
    r3 = r31;
    FUN_8061E6A4(r4, r3); // bl 0x8061E6A4
    r3 = r31;
    FUN_8061E2D8(r4, r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80619CC8
    /* clrlwi r0, r3, 0x18 */ // 0x80619CCC
    r3 = *(0 + r4); // lwz @ 0x80619CD0
    /* mulli r0, r0, 0x248 */ // 0x80619CD4
    r3 = *(0x14 + r3); // lwz @ 0x80619CD8
    r3 = r3 + r0; // 0x80619CDC
    FUN_80824018(); // bl 0x80824018
    r3 = *(0x60 + r31); // lhz @ 0x80619CE4
    /* li r0, 0 */ // 0x80619CE8
    *(0x5c + r31) = r0; // stw @ 0x80619CEC
    r0 = r3 rlwinm 0; // rlwinm
    *(0x60 + r31) = r0; // sth @ 0x80619CF4
    r31 = *(0x1c + r1); // lwz @ 0x80619CF8
    r0 = *(0x24 + r1); // lwz @ 0x80619CFC
    return;
}