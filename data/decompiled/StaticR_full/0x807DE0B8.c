/* Function at 0x807DE0B8, size=540 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807DE0B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807DE0C0
    r4 = r4 + 0; // 0x807DE0C8
    *(0x2c + r1) = r31; // stw @ 0x807DE0CC
    /* lis r31, 0 */ // 0x807DE0D0
    r31 = r31 + 0; // 0x807DE0D4
    *(0x28 + r1) = r30; // stw @ 0x807DE0D8
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x807DE0E0
    r0 = *(4 + r4); // lwz @ 0x807DE0E4
    if (>) goto 0x0x807de104;
    r12 = *(0 + r4); // lwz @ 0x807DE0F0
    r3 = r4;
    r12 = *(0x18 + r12); // lwz @ 0x807DE0F8
    /* mtctr r12 */ // 0x807DE0FC
    /* bctrl  */ // 0x807DE100
    /* lis r3, 0 */ // 0x807DE104
    r3 = r3 + 0; // 0x807DE108
    r4 = *(8 + r3); // lwz @ 0x807DE10C
    r4 = *(0 + r4); // lwz @ 0x807DE110
    r4 = *(0x6c + r4); // lwz @ 0x807DE114
    /* lfs f0, 0x64(r4) */ // 0x807DE118
    /* stfs f0, 0x90(r30) */ // 0x807DE11C
    /* lfs f0, 0x68(r4) */ // 0x807DE120
    /* stfs f0, 0x94(r30) */ // 0x807DE124
    /* lfs f0, 0x6c(r4) */ // 0x807DE128
    /* stfs f0, 0x98(r30) */ // 0x807DE12C
    r0 = *(4 + r3); // lwz @ 0x807DE130
    if (>) goto 0x0x807de14c;
    r12 = *(0 + r3); // lwz @ 0x807DE13C
    r12 = *(0x18 + r12); // lwz @ 0x807DE140
    /* mtctr r12 */ // 0x807DE144
    /* bctrl  */ // 0x807DE148
    /* lis r3, 0 */ // 0x807DE14C
    r3 = r3 + 0; // 0x807DE150
    r4 = *(8 + r3); // lwz @ 0x807DE154
    r4 = *(0 + r4); // lwz @ 0x807DE158
    r4 = *(0x6c + r4); // lwz @ 0x807DE15C
    /* lfs f0, 0x70(r4) */ // 0x807DE160
    /* stfs f0, 0x9c(r30) */ // 0x807DE164
    /* lfs f0, 0x74(r4) */ // 0x807DE168
    /* stfs f0, 0xa0(r30) */ // 0x807DE16C
    /* lfs f0, 0x78(r4) */ // 0x807DE170
    /* stfs f0, 0xa4(r30) */ // 0x807DE174
    r0 = *(4 + r3); // lwz @ 0x807DE178
    if (>) goto 0x0x807de194;
    r12 = *(0 + r3); // lwz @ 0x807DE184
    r12 = *(0x18 + r12); // lwz @ 0x807DE188
    /* mtctr r12 */ // 0x807DE18C
    /* bctrl  */ // 0x807DE190
    /* lis r5, 0 */ // 0x807DE194
    /* lis r4, 0 */ // 0x807DE198
    r5 = r5 + 0; // 0x807DE19C
    r6 = *(8 + r5); // lwz @ 0x807DE1A4
    r4 = r4 + 0; // 0x807DE1A8
    r5 = r30 + 0x90; // 0x807DE1AC
    r6 = *(0 + r6); // lwz @ 0x807DE1B0
    /* lfs f0, 0x10(r6) */ // 0x807DE1B4
    /* stfs f0, 0xa8(r30) */ // 0x807DE1B8
    FUN_805A4498(r4, r5); // bl 0x805A4498
    /* lfs f0, 0x14(r1) */ // 0x807DE1C0
    /* lis r4, 0 */ // 0x807DE1C4
    /* stfs f0, 0xac(r30) */ // 0x807DE1C8
    r4 = r4 + 0; // 0x807DE1D0
    r5 = r30 + 0x9c; // 0x807DE1D4
    /* lfs f0, 0x18(r1) */ // 0x807DE1D8
    /* stfs f0, 0xb0(r30) */ // 0x807DE1DC
    /* lfs f0, 0x1c(r1) */ // 0x807DE1E0
    /* stfs f0, 0xb4(r30) */ // 0x807DE1E4
    FUN_805A4498(r5); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x807DE1EC
    /* li r29, 0 */ // 0x807DE1F0
    /* stfs f0, 0xb8(r30) */ // 0x807DE1F4
    /* lis r3, 0 */ // 0x807DE1F8
    /* lfs f0, 0xcc(r30) */ // 0x807DE1FC
    /* lfs f1, 0xc(r1) */ // 0x807DE200
    /* stfs f1, 0xbc(r30) */ // 0x807DE204
    /* fneg f1, f0 */ // 0x807DE208
    /* lfs f2, 0x294(r31) */ // 0x807DE20C
    /* lfs f3, 0x10(r1) */ // 0x807DE210
    /* lfs f0, 0xa8(r30) */ // 0x807DE214
    /* stfs f3, 0xc0(r30) */ // 0x807DE218
    /* fsubs f0, f2, f0 */ // 0x807DE21C
    r0 = *(0x100 + r30); // lbz @ 0x807DE220
    *(0x8c + r30) = r29; // stw @ 0x807DE224
    /* lfs f3, 0xcc(r30) */ // 0x807DE22C
    /* stfs f0, 0xc4(r30) */ // 0x807DE230
    /* lfs f2, 0xd0(r30) */ // 0x807DE234
    /* lfs f4, 0(r3) */ // 0x807DE238
    /* lfs f0, 0x270(r31) */ // 0x807DE23C
    /* stfs f4, 0xfc(r30) */ // 0x807DE240
    /* stfs f3, 0xe0(r30) */ // 0x807DE244
    /* stfs f2, 0xe4(r30) */ // 0x807DE248
    /* stfs f1, 0xd8(r30) */ // 0x807DE24C
    /* stfs f0, 0xdc(r30) */ // 0x807DE250
    if (==) goto 0x0x807de274;
    r3 = *(0x24 + r30); // lwz @ 0x807DE258
    /* li r4, 1 */ // 0x807DE25C
    /* lfs f1, 0x288(r31) */ // 0x807DE260
    r3 = *(0x28 + r3); // lwz @ 0x807DE264
    /* lfs f2, 0x278(r31) */ // 0x807DE268
    FUN_805E70EC(r4); // bl 0x805E70EC
    *(0x100 + r30) = r29; // stb @ 0x807DE270
    r0 = *(0xf8 + r30); // lbz @ 0x807DE274
    if (==) goto 0x0x807de2b8;
    /* lfs f1, 0xc4(r30) */ // 0x807DE280
    /* lfs f0, 0x2a4(r31) */ // 0x807DE284
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DE288
    if (<=) goto 0x0x807de2b8;
    /* lis r3, 0 */ // 0x807DE290
    r3 = *(0 + r3); // lwz @ 0x807DE294
    if (==) goto 0x0x807de2b8;
    r12 = *(0 + r3); // lwz @ 0x807DE2A0
    /* li r4, 0x48 */ // 0x807DE2A4
    /* li r5, 0 */ // 0x807DE2A8
    r12 = *(0x20 + r12); // lwz @ 0x807DE2AC
    /* mtctr r12 */ // 0x807DE2B0
    /* bctrl  */ // 0x807DE2B4
    r0 = *(0x34 + r1); // lwz @ 0x807DE2B8
    r31 = *(0x2c + r1); // lwz @ 0x807DE2BC
    r30 = *(0x28 + r1); // lwz @ 0x807DE2C0
    r29 = *(0x24 + r1); // lwz @ 0x807DE2C4
    return;
}