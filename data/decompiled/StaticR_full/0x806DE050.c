/* Function at 0x806DE050, size=488 bytes */
/* Stack frame: 32 bytes */

int FUN_806DE050(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* lis r9, 0x4330 */ // 0x806DE054
    /* lis r5, 0 */ // 0x806DE058
    /* lis r8, 0 */ // 0x806DE05C
    *(0x14 + r1) = r4; // stw @ 0x806DE060
    /* lis r7, 0 */ // 0x806DE064
    /* lfd f4, 0(r5) */ // 0x806DE068
    /* li r0, 2 */ // 0x806DE06C
    *(0x10 + r1) = r9; // stw @ 0x806DE070
    /* li r6, -1 */ // 0x806DE074
    /* lfs f2, 0(r8) */ // 0x806DE078
    /* li r5, 0 */ // 0x806DE07C
    /* lfd f0, 0x10(r1) */ // 0x806DE080
    /* li r8, 0 */ // 0x806DE084
    *(0x1c + r1) = r4; // stw @ 0x806DE088
    /* fsubs f1, f0, f4 */ // 0x806DE08C
    *(0x18 + r1) = r9; // stw @ 0x806DE090
    /* lfd f0, 0x18(r1) */ // 0x806DE094
    /* fsubs f1, f1, f2 */ // 0x806DE098
    *(0xc + r1) = r4; // stw @ 0x806DE09C
    /* fsubs f0, f0, f4 */ // 0x806DE0A0
    *(8 + r1) = r9; // stw @ 0x806DE0A4
    /* fadds f0, f2, f0 */ // 0x806DE0A8
    /* lfd f3, 8(r1) */ // 0x806DE0AC
    /* stfs f1, 0xc(r3) */ // 0x806DE0B0
    /* fsubs f2, f3, f4 */ // 0x806DE0B4
    /* stfs f0, 0x10(r3) */ // 0x806DE0B8
    /* stfs f2, 8(r3) */ // 0x806DE0BC
    /* fsubs f1, f1, f2 */ // 0x806DE0C0
    /* lfs f0, 0(r7) */ // 0x806DE0C4
    /* fdivs f0, f0, f1 */ // 0x806DE0C8
    *(0x18 + r3) = r6; // stw @ 0x806DE0CC
    *(0x1c + r3) = r6; // stw @ 0x806DE0D0
    *(0x20 + r3) = r6; // stw @ 0x806DE0D4
    *(0x24 + r3) = r6; // stw @ 0x806DE0D8
    *(0x28 + r3) = r6; // stw @ 0x806DE0DC
    /* stfs f0, 0x14(r3) */ // 0x806DE0E0
    *(0x2c + r3) = r6; // stw @ 0x806DE0E4
    *(0x30 + r3) = r5; // stb @ 0x806DE0E8
    *(0x3c + r3) = r5; // stw @ 0x806DE0EC
    /* mtctr r0 */ // 0x806DE0F0
    r4 = r3 + r8; // 0x806DE0F4
    r8 = r8 + 8; // 0x806DE0F8
    *(0x44 + r4) = r5; // stb @ 0x806DE0FC
    *(0x45 + r4) = r5; // stb @ 0x806DE100
    *(0x46 + r4) = r5; // stb @ 0x806DE104
    *(0x47 + r4) = r5; // stb @ 0x806DE108
    *(0x48 + r4) = r5; // stb @ 0x806DE10C
    *(0x49 + r4) = r5; // stb @ 0x806DE110
    *(0x4a + r4) = r5; // stb @ 0x806DE114
    *(0x4b + r4) = r5; // stb @ 0x806DE118
    r4 = r3 + r8; // 0x806DE11C
    r8 = r8 + 8; // 0x806DE120
    *(0x44 + r4) = r5; // stb @ 0x806DE124
    *(0x45 + r4) = r5; // stb @ 0x806DE128
    *(0x46 + r4) = r5; // stb @ 0x806DE12C
    *(0x47 + r4) = r5; // stb @ 0x806DE130
    *(0x48 + r4) = r5; // stb @ 0x806DE134
    *(0x49 + r4) = r5; // stb @ 0x806DE138
    *(0x4a + r4) = r5; // stb @ 0x806DE13C
    *(0x4b + r4) = r5; // stb @ 0x806DE140
    r4 = r3 + r8; // 0x806DE144
    r8 = r8 + 8; // 0x806DE148
    *(0x44 + r4) = r5; // stb @ 0x806DE14C
    *(0x45 + r4) = r5; // stb @ 0x806DE150
    *(0x46 + r4) = r5; // stb @ 0x806DE154
    *(0x47 + r4) = r5; // stb @ 0x806DE158
    *(0x48 + r4) = r5; // stb @ 0x806DE15C
    *(0x49 + r4) = r5; // stb @ 0x806DE160
    *(0x4a + r4) = r5; // stb @ 0x806DE164
    *(0x4b + r4) = r5; // stb @ 0x806DE168
    r4 = r3 + r8; // 0x806DE16C
    r8 = r8 + 8; // 0x806DE170
    *(0x44 + r4) = r5; // stb @ 0x806DE174
    *(0x45 + r4) = r5; // stb @ 0x806DE178
    *(0x46 + r4) = r5; // stb @ 0x806DE17C
    *(0x47 + r4) = r5; // stb @ 0x806DE180
    *(0x48 + r4) = r5; // stb @ 0x806DE184
    *(0x49 + r4) = r5; // stb @ 0x806DE188
    *(0x4a + r4) = r5; // stb @ 0x806DE18C
    *(0x4b + r4) = r5; // stb @ 0x806DE190
    r4 = r3 + r8; // 0x806DE194
    r8 = r8 + 8; // 0x806DE198
    *(0x44 + r4) = r5; // stb @ 0x806DE19C
    *(0x45 + r4) = r5; // stb @ 0x806DE1A0
    *(0x46 + r4) = r5; // stb @ 0x806DE1A4
    *(0x47 + r4) = r5; // stb @ 0x806DE1A8
    *(0x48 + r4) = r5; // stb @ 0x806DE1AC
    *(0x49 + r4) = r5; // stb @ 0x806DE1B0
    *(0x4a + r4) = r5; // stb @ 0x806DE1B4
    *(0x4b + r4) = r5; // stb @ 0x806DE1B8
    r4 = r3 + r8; // 0x806DE1BC
    r8 = r8 + 8; // 0x806DE1C0
    *(0x44 + r4) = r5; // stb @ 0x806DE1C4
    *(0x45 + r4) = r5; // stb @ 0x806DE1C8
    *(0x46 + r4) = r5; // stb @ 0x806DE1CC
    *(0x47 + r4) = r5; // stb @ 0x806DE1D0
    *(0x48 + r4) = r5; // stb @ 0x806DE1D4
    *(0x49 + r4) = r5; // stb @ 0x806DE1D8
    *(0x4a + r4) = r5; // stb @ 0x806DE1DC
    *(0x4b + r4) = r5; // stb @ 0x806DE1E0
    if (counter-- != 0) goto 0x0x806de0f4;
    r4 = r3 + r8; // 0x806DE1E8
    /* li r5, 0 */ // 0x806DE1EC
    *(0x44 + r4) = r5; // stb @ 0x806DE1F0
    /* li r7, 0 */ // 0x806DE1F4
    /* li r6, 0 */ // 0x806DE1F8
    *(0x45 + r4) = r5; // stb @ 0x806DE1FC
    *(0x46 + r4) = r5; // stb @ 0x806DE200
    *(0x47 + r4) = r5; // stb @ 0x806DE204
    /* b 0x806de21c */ // 0x806DE208
    r4 = *(0x34 + r3); // lwz @ 0x806DE20C
    r7 = r7 + 1; // 0x806DE210
    /* stwx r5, r4, r6 */ // 0x806DE214
    r6 = r6 + 4; // 0x806DE218
    r0 = *(0x38 + r3); // lwz @ 0x806DE21C
    if (<) goto 0x0x806de20c;
    /* li r0, 0 */ // 0x806DE228
    *(0x40 + r3) = r0; // stw @ 0x806DE22C
    return;
}