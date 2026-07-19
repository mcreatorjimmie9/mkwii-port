/* Function at 0x80615BCC, size=116 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_80615BCC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x80615BD4
    /* li r7, 0 */ // 0x80615BD8
    *(0x14 + r1) = r0; // stw @ 0x80615BDC
    /* li r0, 1 */ // 0x80615BE0
    /* lfs f0, 0(r4) */ // 0x80615BE4
    /* lis r6, 0 */ // 0x80615BE8
    r5 = *(0 + r3); // lwz @ 0x80615BEC
    r8 = *(4 + r5); // lwz @ 0x80615BF0
    /* lis r5, 0 */ // 0x80615BF4
    r4 = *(4 + r8); // lwz @ 0x80615BF8
    r4 = r4 | 0x2000; // 0x80615BFC
    *(4 + r8) = r4; // stw @ 0x80615C00
    *(0x2a8 + r3) = r7; // stw @ 0x80615C04
    *(0x2ac + r3) = r0; // stb @ 0x80615C08
    /* lfs f1, 0(r6) */ // 0x80615C0C
    /* stfs f1, 0x2a4(r3) */ // 0x80615C10
    *(0x2b4 + r3) = r7; // sth @ 0x80615C14
    r0 = *(0 + r5); // lha @ 0x80615C18
    *(0x2b6 + r3) = r0; // sth @ 0x80615C1C
    /* stfs f0, 0x2b8(r3) */ // 0x80615C20
    *(0x2bc + r3) = r7; // sth @ 0x80615C24
    FUN_8061E01C(); // bl 0x8061E01C
    FUN_808F5000(); // bl 0x808F5000
    r0 = *(0x14 + r1); // lwz @ 0x80615C30
    return;
}