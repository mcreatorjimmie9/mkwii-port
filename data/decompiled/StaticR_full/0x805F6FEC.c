/* Function at 0x805F6FEC, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F6FEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F6FF8
    r31 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x805F7004
    /* li r6, 0 */ // 0x805F7008
    r3 = r3 + 0; // 0x805F700C
    /* li r0, -1 */ // 0x805F7010
    *(0xc + r31) = r3; // stw @ 0x805F7014
    /* lis r5, 0 */ // 0x805F7018
    r4 = r5 + 0; // 0x805F701C
    r3 = r31;
    *(0x1c + r31) = r0; // stw @ 0x805F7024
    *(0xcc + r31) = r6; // sth @ 0x805F7028
    /* lfs f0, 0(r5) */ // 0x805F702C
    /* stfs f0, 0x30(r31) */ // 0x805F7030
    /* lfs f0, 4(r4) */ // 0x805F7034
    /* stfs f0, 0x34(r31) */ // 0x805F7038
    /* lfs f0, 8(r4) */ // 0x805F703C
    /* stfs f0, 0x38(r31) */ // 0x805F7040
    /* lfs f0, 0(r5) */ // 0x805F7044
    /* stfs f0, 0x48(r31) */ // 0x805F7048
    /* lfs f0, 4(r4) */ // 0x805F704C
    /* stfs f0, 0x4c(r31) */ // 0x805F7050
    /* lfs f0, 8(r4) */ // 0x805F7054
    /* stfs f0, 0x50(r31) */ // 0x805F7058
    *(0xcc + r31) = r6; // sth @ 0x805F705C
    *(0xe4 + r31) = r6; // stw @ 0x805F7060
    *(0xf8 + r31) = r6; // stb @ 0x805F7064
    r31 = *(0xc + r1); // lwz @ 0x805F7068
    r0 = *(0x14 + r1); // lwz @ 0x805F706C
    return;
}