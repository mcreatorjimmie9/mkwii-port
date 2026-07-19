/* Function at 0x80614D3C, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80614D3C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80614D48
    r31 = r3;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80614D54
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80614D5C
    r3 = *(0xc + r3); // lwz @ 0x80614D60
    /* lwzx r3, r3, r0 */ // 0x80614D64
    r0 = *(0x38 + r3); // lwz @ 0x80614D68
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80614D6C
    if (==) goto 0x0x80614df4;
    r3 = *(0 + r31); // lwz @ 0x80614D74
    r3 = *(4 + r3); // lwz @ 0x80614D78
    r0 = *(0x14 + r3); // lwz @ 0x80614D7C
    /* rlwinm. r0, r0, 0, 0x13, 0x13 */ // 0x80614D80
    if (!=) goto 0x0x80614df4;
    r3 = *(0x290 + r31); // lha @ 0x80614D88
    /* lis r4, 0 */ // 0x80614D8C
    /* lfs f1, 0x20(r31) */ // 0x80614D90
    /* lfs f0, 0(r4) */ // 0x80614D94
    r3 = r3 + 1; // 0x80614D98
    /* extsh r0, r3 */ // 0x80614D9C
    /* fmuls f0, f1, f0 */ // 0x80614DA0
    *(0x290 + r31) = r3; // sth @ 0x80614DA8
    /* stfs f0, 0x20(r31) */ // 0x80614DAC
    if (<=) goto 0x0x80614df4;
    r3 = r31;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r5 = *(0 + r3); // lwz @ 0x80614DBC
    r4 = *(4 + r5); // lwz @ 0x80614DC0
    r0 = *(0xc + r4); // lwz @ 0x80614DC4
    /* rlwinm. r0, r0, 0, 0xc, 0xd */ // 0x80614DC8
    if (!=) goto 0x0x80614de0;
    r4 = *(4 + r5); // lwz @ 0x80614DD0
    r0 = *(0xc + r4); // lwz @ 0x80614DD4
    r0 = r0 | 4; // 0x80614DD8
    *(0xc + r4) = r0; // stw @ 0x80614DDC
    r3 = *(0 + r3); // lwz @ 0x80614DE0
    r3 = *(4 + r3); // lwz @ 0x80614DE4
    r0 = *(0x14 + r3); // lwz @ 0x80614DE8
    r0 = r0 | 0x1000; // 0x80614DEC
    *(0x14 + r3) = r0; // stw @ 0x80614DF0
    r0 = *(0x14 + r1); // lwz @ 0x80614DF4
    r31 = *(0xc + r1); // lwz @ 0x80614DF8
    return;
}