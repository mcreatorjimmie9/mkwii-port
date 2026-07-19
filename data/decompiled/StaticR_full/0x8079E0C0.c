/* Function at 0x8079E0C0, size=844 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 24 function(s) */

int FUN_8079E0C0(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x8079E0C8
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x8079E0D8
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x8079E0E0
    *(0x30 + r1) = r28; // stw @ 0x8079E0E4
    r3 = *(0 + r5); // lwz @ 0x8079E0E8
    r0 = *(8 + r3); // lwz @ 0x8079E0EC
    if (>=) goto 0x0x8079e79c;
    FUN_807A03C8(); // bl 0x807A03C8
    if (!=) goto 0x0x8079e79c;
    r0 = *(0x70 + r30); // lbz @ 0x8079E104
    if (==) goto 0x0x8079e118;
    if (!=) goto 0x0x8079e79c;
    if (!=) goto 0x0x8079e168;
    r0 = *(0x40 + r30); // lwz @ 0x8079E120
    if (!=) goto 0x0x8079e168;
    r3 = *(0x2c + r30); // lwz @ 0x8079E12C
    if (==) goto 0x0x8079e144;
    if (==) goto 0x0x8079e144;
    /* li r4, 0 */ // 0x8079E13C
    FUN_805E3430(r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8079E144
    r4 = r30 + 0x2c; // 0x8079E148
    r3 = *(0 + r3); // lwz @ 0x8079E14C
    /* li r5, 0x74 */ // 0x8079E150
    r12 = *(0 + r3); // lwz @ 0x8079E154
    r12 = *(0xb0 + r12); // lwz @ 0x8079E158
    /* mtctr r12 */ // 0x8079E15C
    /* bctrl  */ // 0x8079E160
    /* b 0x8079e79c */ // 0x8079E164
    /* lis r3, 0 */ // 0x8079E168
    r3 = *(0 + r3); // lwz @ 0x8079E16C
    r4 = *(0x1c + r3); // lwz @ 0x8079E170
    if (==) goto 0x0x8079e1a4;
    r4 = *(0 + r4); // lwz @ 0x8079E17C
    if (==) goto 0x0x8079e190;
    r0 = *(0x90 + r4); // lwz @ 0x8079E188
    /* b 0x8079e194 */ // 0x8079E18C
    /* li r0, -1 */ // 0x8079E190
    if (==) goto 0x0x8079e1a4;
    /* li r4, 0 */ // 0x8079E19C
    FUN_807881A8(r4); // bl 0x807881A8
    if (==) goto 0x0x8079e1e0;
    if (==) goto 0x0x8079e2bc;
    if (==) goto 0x0x8079e50c;
    if (==) goto 0x0x8079e608;
    if (==) goto 0x0x8079e64c;
    if (==) goto 0x0x8079e69c;
    if (==) goto 0x0x8079e6e0;
    /* b 0x8079e798 */ // 0x8079E1DC
    /* lis r3, 0 */ // 0x8079E1E0
    r3 = *(0 + r3); // lwz @ 0x8079E1E4
    r3 = *(0x10 + r3); // lwz @ 0x8079E1E8
    r0 = r3 + -0x36; // 0x8079E1EC
    if (<=) goto 0x0x8079e244;
    if (==) goto 0x0x8079e208;
    if (!=) goto 0x0x8079e280;
    r0 = *(0x48 + r30); // lwz @ 0x8079E208
    if (!=) goto 0x0x8079e22c;
    /* lis r3, 0 */ // 0x8079E214
    /* li r4, 0xcd */ // 0x8079E218
    r3 = *(0 + r3); // lwz @ 0x8079E21C
    /* li r5, 0 */ // 0x8079E220
    FUN_80787C60(r3, r4, r5); // bl 0x80787C60
    /* b 0x8079e798 */ // 0x8079E228
    /* lis r3, 0 */ // 0x8079E22C
    /* li r4, 0xca */ // 0x8079E230
    r3 = *(0 + r3); // lwz @ 0x8079E234
    /* li r5, 0 */ // 0x8079E238
    FUN_80787C60(r3, r4, r5); // bl 0x80787C60
    /* b 0x8079e798 */ // 0x8079E240
    r0 = *(0x48 + r30); // lwz @ 0x8079E244
    if (!=) goto 0x0x8079e268;
    /* lis r3, 0 */ // 0x8079E250
    /* li r4, 0xcd */ // 0x8079E254
    r3 = *(0 + r3); // lwz @ 0x8079E258
    /* li r5, 0 */ // 0x8079E25C
    FUN_80787C60(r3, r4, r5); // bl 0x80787C60
    /* b 0x8079e798 */ // 0x8079E264
    /* lis r3, 0 */ // 0x8079E268
    /* li r4, 0xcb */ // 0x8079E26C
    r3 = *(0 + r3); // lwz @ 0x8079E270
    /* li r5, 0 */ // 0x8079E274
    FUN_80787C60(r3, r4, r5); // bl 0x80787C60
    /* b 0x8079e798 */ // 0x8079E27C
    FUN_80694E54(r4, r5); // bl 0x80694E54
    if (!=) goto 0x0x8079e2a4;
    /* lis r5, 0 */ // 0x8079E28C
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x8079E294
    /* li r5, 0x1c */ // 0x8079E298
    FUN_80787C60(r5, r4, r5); // bl 0x80787C60
    /* b 0x8079e798 */ // 0x8079E2A0
    /* lis r5, 0 */ // 0x8079E2A4
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x8079E2AC
    /* li r5, 0 */ // 0x8079E2B0
    FUN_80787C60(r5, r4, r5); // bl 0x80787C60
    /* b 0x8079e798 */ // 0x8079E2B8
    /* lis r29, 0 */ // 0x8079E2BC
    /* lis r28, 0 */ // 0x8079E2C0
    /* lfs f0, 0(r29) */ // 0x8079E2C4
    /* li r4, 2 */ // 0x8079E2C8
    /* stfs f0, 0x68(r30) */ // 0x8079E2CC
    r3 = *(0 + r28); // lwz @ 0x8079E2D0
    r3 = *(0x5bc + r3); // lwz @ 0x8079E2D4
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0(r29) */ // 0x8079E2DC
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0 + r28); // lwz @ 0x8079E2E4
    /* li r4, 6 */ // 0x8079E2E8
    r3 = *(0x5bc + r3); // lwz @ 0x8079E2EC
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0(r29) */ // 0x8079E2F4
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0 + r28); // lwz @ 0x8079E2FC
    /* li r4, 3 */ // 0x8079E300
    r3 = *(0x5bc + r3); // lwz @ 0x8079E304
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0(r29) */ // 0x8079E30C
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0 + r28); // lwz @ 0x8079E314
    /* li r4, 4 */ // 0x8079E318
    r3 = *(0x5bc + r3); // lwz @ 0x8079E31C
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0(r29) */ // 0x8079E324
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0 + r28); // lwz @ 0x8079E32C
    /* li r4, 5 */ // 0x8079E330
    r3 = *(0x5bc + r3); // lwz @ 0x8079E334
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0(r29) */ // 0x8079E33C
    FUN_805E3430(r4); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8079E344
    r3 = r30 + 0x54; // 0x8079E348
    /* lfs f1, 0(r4) */ // 0x8079E34C
    /* li r4, 0x78 */ // 0x8079E350
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8079E358
    /* li r29, -1 */ // 0x8079E35C
    r3 = *(0 + r3); // lwz @ 0x8079E360
    r0 = *(0xb90 + r3); // lwz @ 0x8079E364
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8079E368
    if (==) goto 0x0x8079e3cc;
    /* lis r3, 0 */ // 0x8079E370
    /* li r0, 0 */ // 0x8079E374
    *(8 + r1) = r0; // stb @ 0x8079E378
    r3 = *(0 + r3); // lwz @ 0x8079E380
    *(0xc + r1) = r0; // stw @ 0x8079E384
    FUN_806F9214(r4); // bl 0x806F9214
    r3 = *(0xc + r1); // lwz @ 0x8079E38C
    r0 = *(0x44 + r3); // lbz @ 0x8079E390
    *(0x74 + r30) = r0; // stw @ 0x8079E394
    if (==) goto 0x0x8079e3b4;
    if (==) goto 0x0x8079e3bc;
    if (==) goto 0x0x8079e3c4;
    /* b 0x8079e3e0 */ // 0x8079E3B0
    /* li r29, 0x57 */ // 0x8079E3B4
    /* b 0x8079e3e0 */ // 0x8079E3B8
    /* li r29, 0x56 */ // 0x8079E3BC
    /* b 0x8079e3e0 */ // 0x8079E3C0
    /* li r29, 0x58 */ // 0x8079E3C4
    /* b 0x8079e3e0 */ // 0x8079E3C8
    /* lis r3, 0 */ // 0x8079E3CC
    r3 = *(0 + r3); // lwz @ 0x8079E3D0
    r3 = *(0x10 + r3); // lwz @ 0x8079E3D4
    FUN_80694E54(r3); // bl 0x80694E54
    r29 = r3;
    /* lis r28, 0 */ // 0x8079E3E0
    r4 = r29;
    r3 = *(0 + r28); // lwz @ 0x8079E3E8
    /* li r5, 0 */ // 0x8079E3EC
    FUN_80787C60(r4, r5); // bl 0x80787C60
    r0 = *(0x44 + r30); // lwz @ 0x8079E3F4
    if (==) goto 0x0x8079e42c;
    if (==) goto 0x0x8079e44c;
}