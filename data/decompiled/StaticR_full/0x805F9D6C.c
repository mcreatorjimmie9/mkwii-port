/* Function at 0x805F9D6C, size=280 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_805F9D6C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r8, 0 */ // 0x805F9D74
    r8 = r8 + 0; // 0x805F9D7C
    *(0xc + r1) = r31; // stw @ 0x805F9D80
    *(8 + r1) = r30; // stw @ 0x805F9D84
    r30 = r3;
    r0 = *(0x1c + r3); // lwz @ 0x805F9D8C
    if (!=) goto 0x0x805f9e68;
    r0 = *(0x20 + r3); // lwz @ 0x805F9D98
    /* li r31, 0 */ // 0x805F9D9C
    if (<) goto 0x0x805f9e30;
    /* lfs f4, 0xd0(r3) */ // 0x805F9DA8
    /* lfs f0, 0x90(r8) */ // 0x805F9DAC
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x805F9DB0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x805F9DB4
    if (!=) goto 0x0x805f9e30;
    /* li r0, 0 */ // 0x805F9DBC
    /* lfs f0, 0(r8) */ // 0x805F9DC0
    /* mulli r4, r0, 0x18 */ // 0x805F9DC4
    /* stfs f0, 0xd0(r3) */ // 0x805F9DC8
    r0 = r8 + 8; // 0x805F9DCC
    /* lfs f0, 4(r8) */ // 0x805F9DD0
    /* li r7, 1 */ // 0x805F9DD4
    r6 = *(0xcc + r3); // lhz @ 0x805F9DD8
    r5 = r0 + r4; // 0x805F9DDC
    r0 = r6 | 2; // 0x805F9DE0
    /* lfs f3, 0x14(r5) */ // 0x805F9DE4
    /* li r31, 1 */ // 0x805F9DE8
    /* lfs f2, 0(r5) */ // 0x805F9DEC
    /* lfs f1, 0xc(r5) */ // 0x805F9DF0
    *(0x20 + r3) = r7; // stw @ 0x805F9DF4
    r4 = *(0 + r3); // lwz @ 0x805F9DF8
    *(0xcc + r3) = r0; // sth @ 0x805F9DFC
    *(0xe4 + r3) = r5; // stw @ 0x805F9E00
    /* stfs f3, 0xe0(r3) */ // 0x805F9E04
    /* stfs f2, 0xd4(r3) */ // 0x805F9E08
    /* stfs f1, 0xdc(r3) */ // 0x805F9E0C
    /* stfs f0, 0xd8(r3) */ // 0x805F9E10
    /* stfs f4, 0xd0(r3) */ // 0x805F9E14
    r4 = *(4 + r4); // lwz @ 0x805F9E18
    r0 = *(0x14 + r4); // lwz @ 0x805F9E1C
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805F9E20
    if (==) goto 0x0x805f9e30;
    /* li r4, 0 */ // 0x805F9E28
    FUN_8061F070(r4); // bl 0x8061F070
    if (!=) goto 0x0x805f9e68;
    r3 = r30;
    FUN_8061DC28(r4, r3); // bl 0x8061DC28
    r4 = r30 + 0xb0; // 0x805F9E40
    FUN_8062A210(r3, r4); // bl 0x8062A210
    r3 = r30;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F9E50
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x805F9E58
    r3 = *(0x68 + r3); // lwz @ 0x805F9E5C
    /* lwzx r3, r3, r0 */ // 0x805F9E60
    FUN_8073A5A0(r4); // bl 0x8073A5A0
    r31 = *(0xc + r1); // lwz @ 0x805F9E68
    /* li r3, 1 */ // 0x805F9E6C
    r30 = *(8 + r1); // lwz @ 0x805F9E70
    r0 = *(0x14 + r1); // lwz @ 0x805F9E74
    return;
}