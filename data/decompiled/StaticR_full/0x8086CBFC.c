/* Function at 0x8086CBFC, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8086CBFC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8086CC10
    r30 = r4;
    r5 = *(0x1c4 + r3); // lwz @ 0x8086CC18
    if (==) goto 0x0x8086cc28;
    /* b 0x8086cc2c */ // 0x8086CC24
    r5 = *(0x1a0 + r3); // lwz @ 0x8086CC28
    r4 = *(0x1a8 + r3); // lwz @ 0x8086CC2C
    r0 = r4 + 1; // 0x8086CC30
    *(0x1a8 + r3) = r0; // stw @ 0x8086CC34
    r3 = r5;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    FUN_8060F27C(r3); // bl 0x8060F27C
    r4 = *(0x1a0 + r31); // lwz @ 0x8086CC44
    /* lis r3, 0 */ // 0x8086CC48
    /* mulli r0, r30, 0x248 */ // 0x8086CC4C
    r4 = *(0x18 + r4); // lbz @ 0x8086CC50
    *(0x1a4 + r31) = r4; // stb @ 0x8086CC54
    r3 = *(0 + r3); // lwz @ 0x8086CC58
    r3 = *(0x14 + r3); // lwz @ 0x8086CC5C
    r3 = r3 + r0; // 0x8086CC60
    *(0x1a0 + r31) = r3; // stw @ 0x8086CC64
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060F264(); // bl 0x8060F264
    r0 = *(0x1c4 + r31); // lwz @ 0x8086CC70
    if (==) goto 0x0x8086cc84;
    /* li r0, 0 */ // 0x8086CC7C
    *(0x1c4 + r31) = r0; // stw @ 0x8086CC80
    /* lis r4, 0 */ // 0x8086CC84
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8086CC8C
    /* li r4, 0x121 */ // 0x8086CC90
    FUN_8082DFAC(r4, r3, r4); // bl 0x8082DFAC
    r3 = *(0x1d8 + r31); // lwz @ 0x8086CC98
    /* li r0, 0x2d */ // 0x8086CC9C
    *(0x1d4 + r31) = r0; // stw @ 0x8086CCA0
    /* li r5, 0x1e0 */ // 0x8086CCA4
    if (>) goto 0x0x8086ccb4;
    r5 = r3;
    /* lis r3, 0 */ // 0x8086CCB4
    /* lis r4, 0 */ // 0x8086CCB8
    /* lfs f1, 0(r3) */ // 0x8086CCBC
    /* li r3, 0 */ // 0x8086CCC0
    /* lfs f0, 0(r4) */ // 0x8086CCC4
    /* li r0, 0x50 */ // 0x8086CCC8
    *(0x1d8 + r31) = r5; // stw @ 0x8086CCCC
    /* stfs f1, 0x1f8(r31) */ // 0x8086CCD0
    /* stfs f1, 0x1fc(r31) */ // 0x8086CCD4
    /* stfs f0, 0x1f4(r31) */ // 0x8086CCD8
    *(0x1b4 + r31) = r3; // stb @ 0x8086CCDC
    *(0x1ac + r31) = r0; // stw @ 0x8086CCE0
    /* stfs f1, 0x1b0(r31) */ // 0x8086CCE4
    r31 = *(0xc + r1); // lwz @ 0x8086CCE8
    r30 = *(8 + r1); // lwz @ 0x8086CCEC
    r0 = *(0x14 + r1); // lwz @ 0x8086CCF0
    return;
}