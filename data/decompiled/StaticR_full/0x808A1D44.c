/* Function at 0x808A1D44, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808A1D44(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808A1D50
    r31 = r3;
    r4 = *(0x2c + r3); // lhz @ 0x808A1D58
    /* rlwinm. r0, r4, 0, 0x1e, 0x1e */ // 0x808A1D5C
    if (==) goto 0x0x808a1d88;
    r3 = r3 + 0x58; // 0x808A1D64
    r4 = r31 + 0x48; // 0x808A1D68
    r5 = r31 + 0x30; // 0x808A1D6C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r0 = *(0x2c + r31); // lhz @ 0x808A1D74
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 4; // 0x808A1D7C
    *(0x2c + r31) = r0; // sth @ 0x808A1D80
    /* b 0x808a1db0 */ // 0x808A1D84
    /* clrlwi. r0, r4, 0x1f */ // 0x808A1D88
    if (==) goto 0x0x808a1db0;
    /* lfs f2, 0x30(r3) */ // 0x808A1D90
    r0 = r4 | 4; // 0x808A1D94
    /* lfs f1, 0x34(r3) */ // 0x808A1D98
    /* lfs f0, 0x38(r3) */ // 0x808A1D9C
    /* stfs f2, 0x64(r3) */ // 0x808A1DA0
    /* stfs f1, 0x74(r3) */ // 0x808A1DA4
    /* stfs f0, 0x84(r3) */ // 0x808A1DA8
    *(0x2c + r3) = r0; // sth @ 0x808A1DAC
    r3 = *(0x2c + r31); // lhz @ 0x808A1DB0
    /* rlwinm. r0, r3, 0, 0x1d, 0x1d */ // 0x808A1DB4
    if (==) goto 0x0x808a1dec;
    r0 = r3 rlwinm 0; // rlwinm
    *(0x2c + r31) = r0; // sth @ 0x808A1DC0
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x808A1DC8
    r12 = *(0x6c + r12); // lwz @ 0x808A1DCC
    /* mtctr r12 */ // 0x808A1DD0
    /* bctrl  */ // 0x808A1DD4
    r12 = *(0 + r31); // lwz @ 0x808A1DD8
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808A1DE0
    /* mtctr r12 */ // 0x808A1DE4
    /* bctrl  */ // 0x808A1DE8
    r3 = *(0x2c + r31); // lhz @ 0x808A1DEC
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x808A1DF0
    if (==) goto 0x0x808a1e28;
    r0 = r3 rlwinm 0; // rlwinm
    *(0x2c + r31) = r0; // sth @ 0x808A1DFC
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x808A1E04
    r12 = *(0x78 + r12); // lwz @ 0x808A1E08
    /* mtctr r12 */ // 0x808A1E0C
    /* bctrl  */ // 0x808A1E10
    r12 = *(0 + r31); // lwz @ 0x808A1E14
    r3 = r31;
    r12 = *(0x7c + r12); // lwz @ 0x808A1E1C
    /* mtctr r12 */ // 0x808A1E20
    /* bctrl  */ // 0x808A1E24
}