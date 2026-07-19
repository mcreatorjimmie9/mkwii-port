/* Function at 0x8062B09C, size=388 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_8062B09C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8062B0AC
    r31 = r31 + 0; // 0x8062B0B0
    *(0x18 + r1) = r30; // stw @ 0x8062B0B4
    r30 = r3;
    /* lis r3, 0 */ // 0x8062B0BC
    *(0x14 + r1) = r29; // stw @ 0x8062B0C0
    *(0x10 + r1) = r28; // stw @ 0x8062B0C4
    r4 = *(0x9c + r30); // lbz @ 0x8062B0C8
    r3 = *(0 + r3); // lwz @ 0x8062B0CC
    /* extsb r4, r4 */ // 0x8062B0D0
    FUN_8061D97C(); // bl 0x8061D97C
    /* lis r29, 0 */ // 0x8062B0D8
    r28 = r3;
    r3 = *(0 + r29); // lwz @ 0x8062B0E0
    r4 = *(0x9c + r30); // lbz @ 0x8062B0E4
    FUN_805C1470(); // bl 0x805C1470
    r4 = *(0x8c + r30); // lwz @ 0x8062B0EC
    /* extsb r3, r3 */ // 0x8062B0F0
    r0 = *(0x68 + r4); // lwz @ 0x8062B0F4
    if (==) goto 0x0x8062b110;
    r3 = *(0 + r29); // lwz @ 0x8062B100
    r0 = *(0xb74 + r3); // lwz @ 0x8062B104
    if (!=) goto 0x0x8062b11c;
    r3 = r28;
    r4 = r30;
    FUN_8061E674(r3, r4); // bl 0x8061E674
    r3 = r28;
    FUN_8061E0F0(r3, r4, r3); // bl 0x8061E0F0
    /* lis r4, 0 */ // 0x8062B124
    r3 = *(8 + r3); // lwz @ 0x8062B128
    r4 = *(0 + r4); // lwz @ 0x8062B12C
    r0 = r4 + -2; // 0x8062B130
    /* cntlzw r0, r0 */ // 0x8062B134
    /* srwi r4, r0, 5 */ // 0x8062B138
    FUN_80620050(); // bl 0x80620050
    /* lis r4, 0 */ // 0x8062B140
    r0 = *(0 + r4); // lwz @ 0x8062B144
    if (!=) goto 0x0x8062b158;
    *(0x188 + r30) = r3; // stw @ 0x8062B150
    /* b 0x8062b160 */ // 0x8062B154
    r0 = r3 + 0x10; // 0x8062B158
    *(0x188 + r30) = r0; // stw @ 0x8062B15C
    r3 = *(0x18c + r30); // lwz @ 0x8062B160
    if (==) goto 0x0x8062b17c;
    r12 = *(0 + r3); // lwz @ 0x8062B16C
    r12 = *(0xc + r12); // lwz @ 0x8062B170
    /* mtctr r12 */ // 0x8062B174
    /* bctrl  */ // 0x8062B178
    r3 = *(0x198 + r30); // lwz @ 0x8062B17C
    if (==) goto 0x0x8062b18c;
    FUN_80630108(); // bl 0x80630108
    r0 = *(0x33e + r30); // lbz @ 0x8062B18C
    if (==) goto 0x0x8062b1e0;
    r3 = *(0x188 + r30); // lwz @ 0x8062B198
    r28 = *(0x8c + r30); // lwz @ 0x8062B19C
    /* lfs f2, 0(r3) */ // 0x8062B1A0
    /* lfs f0, 0x10(r28) */ // 0x8062B1A4
    /* fcmpu cr0, f0, f2 */ // 0x8062B1A8
    if (==) goto 0x0x8062b1e0;
    /* lfs f1, 0x10c(r31) */ // 0x8062B1B0
    /* lfs f0, 0x110(r31) */ // 0x8062B1B8
    /* fmuls f1, f2, f1 */ // 0x8062B1C0
    /* stfs f2, 0x10(r28) */ // 0x8062B1C4
    /* fmuls f1, f0, f1 */ // 0x8062B1C8
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 8(r1) */ // 0x8062B1D0
    /* lfs f0, 0xc(r1) */ // 0x8062B1D4
    /* fdivs f0, f1, f0 */ // 0x8062B1D8
    /* stfs f0, 0x14(r28) */ // 0x8062B1DC
    r3 = r30;
    FUN_8062DA24(r3); // bl 0x8062DA24
    /* lfs f0, 0(r31) */ // 0x8062B1E8
    /* li r0, 0 */ // 0x8062B1EC
    /* stfs f0, 0x120(r30) */ // 0x8062B1F0
    r3 = *(0x188 + r30); // lwz @ 0x8062B1F4
    /* lfs f0, 0x114(r31) */ // 0x8062B1F8
    /* lfs f1, 0(r3) */ // 0x8062B1FC
    /* stfs f1, 0x11c(r30) */ // 0x8062B200
    *(0x33c + r30) = r0; // sth @ 0x8062B204
    /* stfs f0, 0x344(r30) */ // 0x8062B208
    *(0x334 + r30) = r0; // sth @ 0x8062B20C
    r31 = *(0x1c + r1); // lwz @ 0x8062B210
    r30 = *(0x18 + r1); // lwz @ 0x8062B214
    r29 = *(0x14 + r1); // lwz @ 0x8062B218
    r28 = *(0x10 + r1); // lwz @ 0x8062B21C
}