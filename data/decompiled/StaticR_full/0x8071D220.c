/* Function at 0x8071D220, size=320 bytes */
/* Stack frame: 80 bytes */
/* Calls: 6 function(s) */

int FUN_8071D220(int r3, int r5)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8071D228
    r0 = *(0x33 + r3); // lbz @ 0x8071D22C
    if (!=) goto 0x0x8071d350;
    r0 = *(0x30 + r3); // lbz @ 0x8071D238
    if (!=) goto 0x0x8071d2cc;
    if (==) goto 0x0x8071d260;
    if (==) goto 0x0x8071d284;
    if (==) goto 0x0x8071d2a8;
    /* b 0x8071d350 */ // 0x8071D25C
    /* lis r3, 0 */ // 0x8071D260
    /* stfs f1, 0x44(r1) */ // 0x8071D264
    r3 = r3 + 0; // 0x8071D268
    /* stfs f1, 0x48(r1) */ // 0x8071D270
    r3 = r3 + 0xb5; // 0x8071D274
    /* stfs f1, 0x4c(r1) */ // 0x8071D278
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    /* b 0x8071d350 */ // 0x8071D280
    /* lis r3, 0 */ // 0x8071D284
    /* stfs f1, 0x38(r1) */ // 0x8071D288
    r3 = r3 + 0; // 0x8071D28C
    /* stfs f1, 0x3c(r1) */ // 0x8071D294
    r3 = r3 + 0xc0; // 0x8071D298
    /* stfs f1, 0x40(r1) */ // 0x8071D29C
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    /* b 0x8071d350 */ // 0x8071D2A4
    /* lis r3, 0 */ // 0x8071D2A8
    /* stfs f1, 0x2c(r1) */ // 0x8071D2AC
    r3 = r3 + 0; // 0x8071D2B0
    /* stfs f1, 0x30(r1) */ // 0x8071D2B8
    r3 = r3 + 0xcb; // 0x8071D2BC
    /* stfs f1, 0x34(r1) */ // 0x8071D2C0
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    /* b 0x8071d350 */ // 0x8071D2C8
    if (==) goto 0x0x8071d2e8;
    if (==) goto 0x0x8071d30c;
    if (==) goto 0x0x8071d330;
    /* b 0x8071d350 */ // 0x8071D2E4
    /* lis r3, 0 */ // 0x8071D2E8
    /* stfs f1, 0x20(r1) */ // 0x8071D2EC
    r3 = r3 + 0; // 0x8071D2F0
    /* stfs f1, 0x24(r1) */ // 0x8071D2F8
    r3 = r3 + 0xd7; // 0x8071D2FC
    /* stfs f1, 0x28(r1) */ // 0x8071D300
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    /* b 0x8071d350 */ // 0x8071D308
    /* lis r3, 0 */ // 0x8071D30C
    /* stfs f1, 0x14(r1) */ // 0x8071D310
    r3 = r3 + 0; // 0x8071D314
    /* stfs f1, 0x18(r1) */ // 0x8071D31C
    r3 = r3 + 0xe3; // 0x8071D320
    /* stfs f1, 0x1c(r1) */ // 0x8071D324
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    /* b 0x8071d350 */ // 0x8071D32C
    /* lis r3, 0 */ // 0x8071D330
    /* stfs f1, 8(r1) */ // 0x8071D334
    r3 = r3 + 0; // 0x8071D338
    /* stfs f1, 0xc(r1) */ // 0x8071D340
    r3 = r3 + 0xef; // 0x8071D344
    /* stfs f1, 0x10(r1) */ // 0x8071D348
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    r0 = *(0x54 + r1); // lwz @ 0x8071D350
    return;
}