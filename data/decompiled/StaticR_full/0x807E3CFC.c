/* Function at 0x807E3CFC, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807E3CFC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807E3D04
    /* lis r4, 0 */ // 0x807E3D08
    *(0x24 + r1) = r0; // stw @ 0x807E3D0C
    r4 = r4 + 0; // 0x807E3D10
    /* lfs f0, 0(r5) */ // 0x807E3D14
    /* lis r5, 0 */ // 0x807E3D18
    *(0x1c + r1) = r31; // stw @ 0x807E3D1C
    /* lis r6, 0 */ // 0x807E3D20
    r31 = r3;
    r4 = r4 + 0x99; // 0x807E3D28
    /* stfs f0, 8(r1) */ // 0x807E3D2C
    r5 = r5 + 0; // 0x807E3D30
    r6 = r6 + 0; // 0x807E3D34
    /* stfs f0, 0xc(r1) */ // 0x807E3D3C
    /* li r8, 0 */ // 0x807E3D40
    /* stfs f0, 0x10(r1) */ // 0x807E3D44
    FUN_8089F5F0(r6, r7, r8); // bl 0x8089F5F0
    /* lis r4, 0 */ // 0x807E3D4C
    r3 = r31;
    r4 = r4 + 0; // 0x807E3D54
    *(0 + r31) = r4; // stw @ 0x807E3D58
    r31 = *(0x1c + r1); // lwz @ 0x807E3D5C
    r0 = *(0x24 + r1); // lwz @ 0x807E3D60
    return;
}