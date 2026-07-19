/* Function at 0x80616D90, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80616D90(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x80616D98
    *(0x14 + r1) = r0; // stw @ 0x80616D9C
    /* li r0, 0 */ // 0x80616DA0
    /* lfs f0, 0(r4) */ // 0x80616DA4
    r5 = *(0 + r3); // lwz @ 0x80616DA8
    r5 = *(4 + r5); // lwz @ 0x80616DAC
    r4 = *(4 + r5); // lwz @ 0x80616DB0
    r4 = r4 rlwinm 0; // rlwinm
    *(4 + r5) = r4; // stw @ 0x80616DB8
    *(0x2ac + r3) = r0; // stb @ 0x80616DBC
    /* stfs f0, 0x2b8(r3) */ // 0x80616DC0
    *(0x2bc + r3) = r0; // sth @ 0x80616DC4
    FUN_8061ECD4(); // bl 0x8061ECD4
    r0 = *(0x14 + r3); // lwz @ 0x80616DCC
    /* xori r0, r0, 0x1000 */ // 0x80616DD0
    *(0x14 + r3) = r0; // stw @ 0x80616DD4
    r0 = *(0x14 + r1); // lwz @ 0x80616DD8
    return;
}