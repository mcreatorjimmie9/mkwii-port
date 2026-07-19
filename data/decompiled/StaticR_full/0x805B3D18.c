/* Function at 0x805B3D18, size=376 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_805B3D18(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r30, r4, 0xec */ // 0x805B3D2C
    *(0x14 + r1) = r29; // stw @ 0x805B3D30
    r29 = r3;
    r31 = r3 + r30; // 0x805B3D38
    r3 = *(8 + r31); // lwz @ 0x805B3D3C
    if (==) goto 0x0x805b3d5c;
    r12 = *(0 + r3); // lwz @ 0x805B3D48
    r12 = *(0x10 + r12); // lwz @ 0x805B3D4C
    /* mtctr r12 */ // 0x805B3D50
    /* bctrl  */ // 0x805B3D54
    /* b 0x805b3d60 */ // 0x805B3D58
    /* li r3, -1 */ // 0x805B3D5C
    if (==) goto 0x0x805b3e70;
    r3 = *(8 + r31); // lwz @ 0x805B3D68
    if (==) goto 0x0x805b3d88;
    r12 = *(0 + r3); // lwz @ 0x805B3D74
    r12 = *(0x10 + r12); // lwz @ 0x805B3D78
    /* mtctr r12 */ // 0x805B3D7C
    /* bctrl  */ // 0x805B3D80
    /* b 0x805b3d8c */ // 0x805B3D84
    /* li r3, -1 */ // 0x805B3D88
    /* li r31, 3 */ // 0x805B3D90
    if (<=) goto 0x0x805b3da8;
    if (!=) goto 0x0x805b3dac;
    /* li r31, 1 */ // 0x805B3DA0
    /* b 0x805b3dac */ // 0x805B3DA4
    /* li r31, 0 */ // 0x805B3DA8
    r3 = r29 + r30; // 0x805B3DAC
    r3 = *(0xc + r3); // lwz @ 0x805B3DB0
    if (==) goto 0x0x805b3dd0;
    r12 = *(0 + r3); // lwz @ 0x805B3DBC
    r12 = *(0x34 + r12); // lwz @ 0x805B3DC0
    /* mtctr r12 */ // 0x805B3DC4
    /* bctrl  */ // 0x805B3DC8
    /* b 0x805b3dd4 */ // 0x805B3DCC
    /* li r3, -1 */ // 0x805B3DD0
    /* li r5, 0 */ // 0x805B3DD8
    if (==) goto 0x0x805b3dec;
    if (==) goto 0x0x805b3e2c;
    /* b 0x805b3e68 */ // 0x805B3DE8
    /* clrlwi r0, r3, 0x18 */ // 0x805B3DEC
    /* mulli r0, r0, 0x920 */ // 0x805B3DF0
    r3 = r29 + r0; // 0x805B3DF4
    r0 = *(0x1770 + r3); // lbz @ 0x805B3DF8
    r4 = r3 + 0x1720; // 0x805B3DFC
    if (==) goto 0x0x805b3e68;
    r3 = r29 + 0x15b4; // 0x805B3E08
    /* li r5, 0 */ // 0x805B3E0C
    FUN_805B1180(r4, r3, r5); // bl 0x805B1180
    r4 = *(0x15b8 + r29); // lwz @ 0x805B3E14
    r3 = r29 + 0x167c; // 0x805B3E18
    *(0x15c0 + r29) = r4; // stw @ 0x805B3E1C
    FUN_805B1F90(r5, r3); // bl 0x805B1F90
    /* li r5, 1 */ // 0x805B3E24
    /* b 0x805b3e68 */ // 0x805B3E28
    /* clrlwi r0, r3, 0x18 */ // 0x805B3E2C
    /* mulli r0, r0, 0xb0 */ // 0x805B3E30
    r3 = r29 + r0; // 0x805B3E34
    r0 = *(0x3bf0 + r3); // lbz @ 0x805B3E38
    r4 = r3 + 0x3ba0; // 0x805B3E3C
    if (==) goto 0x0x805b3e68;
    r3 = r29 + 0x15b4; // 0x805B3E48
    /* li r5, 0 */ // 0x805B3E4C
    FUN_805B1180(r4, r3, r5); // bl 0x805B1180
    r4 = *(0x15b8 + r29); // lwz @ 0x805B3E54
    r3 = r29 + 0x167c; // 0x805B3E58
    *(0x15c0 + r29) = r4; // stw @ 0x805B3E5C
    FUN_805B1F90(r5, r3); // bl 0x805B1F90
    /* li r5, 1 */ // 0x805B3E64
    r3 = r5;
    /* b 0x805b3e74 */ // 0x805B3E6C
    /* li r3, 0 */ // 0x805B3E70
    r0 = *(0x24 + r1); // lwz @ 0x805B3E74
    r31 = *(0x1c + r1); // lwz @ 0x805B3E78
    r30 = *(0x18 + r1); // lwz @ 0x805B3E7C
    r29 = *(0x14 + r1); // lwz @ 0x805B3E80
    return;
}