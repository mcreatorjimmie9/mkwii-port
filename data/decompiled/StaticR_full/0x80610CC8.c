/* Function at 0x80610CC8, size=460 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80610CC8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80610CD8
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x80610CE0
    r4 = *(4 + r5); // lwz @ 0x80610CE4
    r0 = *(8 + r4); // lwz @ 0x80610CE8
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x80610CEC
    if (==) goto 0x0x80610d04;
    r4 = *(4 + r5); // lwz @ 0x80610CF4
    r0 = *(0x10 + r4); // lwz @ 0x80610CF8
    r0 = r0 | 0x80; // 0x80610CFC
    *(0x10 + r4) = r0; // stw @ 0x80610D00
    /* li r31, 0 */ // 0x80610D04
    *(0x118 + r3) = r31; // sth @ 0x80610D08
    /* lis r4, 0 */ // 0x80610D0C
    r5 = *(0 + r3); // lwz @ 0x80610D10
    /* lfs f0, 0(r4) */ // 0x80610D14
    r4 = *(4 + r5); // lwz @ 0x80610D18
    r0 = *(4 + r4); // lwz @ 0x80610D1C
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80610D24
    r4 = *(0 + r3); // lwz @ 0x80610D28
    r4 = *(4 + r4); // lwz @ 0x80610D2C
    r0 = *(8 + r4); // lwz @ 0x80610D30
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80610D38
    *(0x102 + r3) = r31; // sth @ 0x80610D3C
    r4 = *(0 + r3); // lwz @ 0x80610D40
    /* stfs f0, 0x1b0(r3) */ // 0x80610D44
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x80610D4C
    r0 = *(4 + r4); // lwz @ 0x80610D50
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80610D58
    FUN_8061E6D4(r3); // bl 0x8061E6D4
    *(0x1c4 + r30) = r31; // sth @ 0x80610D60
    r3 = r30;
    r6 = *(0 + r30); // lwz @ 0x80610D68
    /* li r4, 4 */ // 0x80610D6C
    /* li r5, 0 */ // 0x80610D70
    r7 = *(4 + r6); // lwz @ 0x80610D74
    /* li r6, 1 */ // 0x80610D78
    r0 = *(4 + r7); // lwz @ 0x80610D7C
    /* clrlwi r0, r0, 1 */ // 0x80610D80
    *(4 + r7) = r0; // stw @ 0x80610D84
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    *(0x12c + r30) = r31; // sth @ 0x80610D8C
    /* lis r3, 0 */ // 0x80610D90
    r4 = *(0 + r30); // lwz @ 0x80610D94
    /* lfs f0, 0(r3) */ // 0x80610D98
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x80610DA0
    r0 = *(8 + r4); // lwz @ 0x80610DA4
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80610DAC
    r0 = *(0x254 + r30); // lhz @ 0x80610DB0
    *(0x14c + r30) = r31; // sth @ 0x80610DB4
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0 + r30); // lwz @ 0x80610DBC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14e + r30) = r31; // sth @ 0x80610DC4
    *(0x150 + r30) = r31; // sth @ 0x80610DC8
    *(0x254 + r30) = r0; // sth @ 0x80610DCC
    *(0xec + r30) = r31; // stw @ 0x80610DD0
    /* stfs f0, 0xf0(r30) */ // 0x80610DD4
    r4 = *(4 + r4); // lwz @ 0x80610DD8
    r0 = *(0xc + r4); // lwz @ 0x80610DDC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80610DE4
    r4 = *(0 + r30); // lwz @ 0x80610DE8
    r4 = *(4 + r4); // lwz @ 0x80610DEC
    r0 = *(0xc + r4); // lwz @ 0x80610DF0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80610DF8
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x148 + r30) = r31; // sth @ 0x80610E00
    /* li r4, 0 */ // 0x80610E04
    r3 = *(0 + r30); // lwz @ 0x80610E08
    r3 = *(4 + r3); // lwz @ 0x80610E0C
    r0 = *(8 + r3); // lwz @ 0x80610E10
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80610E18
    r3 = *(0 + r30); // lwz @ 0x80610E1C
    r3 = *(4 + r3); // lwz @ 0x80610E20
    r0 = *(0xc + r3); // lwz @ 0x80610E24
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x80610E2C
    r3 = *(0x25c + r30); // lwz @ 0x80610E30
    FUN_806444CC(); // bl 0x806444CC
    r3 = *(0x258 + r30); // lwz @ 0x80610E38
    FUN_80603EF4(); // bl 0x80603EF4
    r3 = *(0 + r30); // lwz @ 0x80610E40
    r3 = *(4 + r3); // lwz @ 0x80610E44
    r0 = *(8 + r3); // lwz @ 0x80610E48
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80610E50
    r3 = *(0 + r30); // lwz @ 0x80610E54
    r3 = *(4 + r3); // lwz @ 0x80610E58
    r0 = *(0xc + r3); // lwz @ 0x80610E5C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x80610E64
    r3 = *(0 + r30); // lwz @ 0x80610E68
    r3 = *(4 + r3); // lwz @ 0x80610E6C
    r0 = *(0xc + r3); // lwz @ 0x80610E70
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x80610E78
    r31 = *(0xc + r1); // lwz @ 0x80610E7C
    r30 = *(8 + r1); // lwz @ 0x80610E80
    r0 = *(0x14 + r1); // lwz @ 0x80610E84
    return;
}