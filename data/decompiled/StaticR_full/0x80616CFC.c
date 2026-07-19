/* Function at 0x80616CFC, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80616CFC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80616D04
    /* li r7, 0 */ // 0x80616D08
    *(0x14 + r1) = r0; // stw @ 0x80616D0C
    /* li r0, 1 */ // 0x80616D10
    /* lfs f0, 0(r4) */ // 0x80616D14
    /* lis r6, 0 */ // 0x80616D18
    *(0xc + r1) = r31; // stw @ 0x80616D1C
    r31 = r3;
    r5 = *(0 + r3); // lwz @ 0x80616D24
    r8 = *(4 + r5); // lwz @ 0x80616D28
    /* lis r5, 0 */ // 0x80616D2C
    r4 = *(4 + r8); // lwz @ 0x80616D30
    r4 = r4 | 0x2000; // 0x80616D34
    *(4 + r8) = r4; // stw @ 0x80616D38
    *(0x2a8 + r3) = r7; // stw @ 0x80616D3C
    *(0x2ac + r3) = r0; // stb @ 0x80616D40
    /* lfs f1, 0(r6) */ // 0x80616D44
    /* stfs f1, 0x2a4(r3) */ // 0x80616D48
    *(0x2b4 + r3) = r7; // sth @ 0x80616D4C
    r0 = *(0 + r5); // lha @ 0x80616D50
    *(0x2b6 + r3) = r0; // sth @ 0x80616D54
    /* stfs f0, 0x2b8(r3) */ // 0x80616D58
    *(0x2bc + r3) = r7; // sth @ 0x80616D5C
    FUN_8061E01C(); // bl 0x8061E01C
    FUN_808F5000(); // bl 0x808F5000
    r3 = r31;
    FUN_8061ECD4(r3); // bl 0x8061ECD4
    r0 = *(0x14 + r3); // lwz @ 0x80616D70
    /* xori r0, r0, 0x800 */ // 0x80616D74
    *(0x14 + r3) = r0; // stw @ 0x80616D78
    r31 = *(0xc + r1); // lwz @ 0x80616D7C
    r0 = *(0x14 + r1); // lwz @ 0x80616D80
    return;
}