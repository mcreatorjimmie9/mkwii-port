/* Function at 0x808AC274, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808AC274(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808AC27C
    *(0x24 + r1) = r0; // stw @ 0x808AC280
    *(0x1c + r1) = r31; // stw @ 0x808AC284
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x808AC28C
    r0 = *(0xb68 + r4); // lwz @ 0x808AC290
    if (!=) goto 0x0x808ac384;
    /* lis r4, 0 */ // 0x808AC29C
    /* lfs f1, 0x34(r3) */ // 0x808AC2A0
    /* lfs f0, 0(r4) */ // 0x808AC2A4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808AC2A8
    if (>=) goto 0x0x808ac2ec;
    r12 = *(0 + r3); // lwz @ 0x808AC2B0
    /* li r4, 0 */ // 0x808AC2B4
    r12 = *(0x68 + r12); // lwz @ 0x808AC2B8
    /* mtctr r12 */ // 0x808AC2BC
    /* bctrl  */ // 0x808AC2C0
    r12 = *(0 + r31); // lwz @ 0x808AC2C4
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x808AC2CC
    /* mtctr r12 */ // 0x808AC2D0
    /* bctrl  */ // 0x808AC2D4
    r0 = *(0x20 + r3); // lwz @ 0x808AC2D8
    r0 = r0 | 0x2121; // 0x808AC2DC
    r0 = r0 | 0x2121; // 0x808AC2E0
    *(0x20 + r3) = r0; // stw @ 0x808AC2E4
    /* b 0x808ac384 */ // 0x808AC2E8
    r3 = *(0x13c + r3); // lwz @ 0x808AC2EC
    r4 = *(0 + r3); // lwz @ 0x808AC2F0
    /* rlwinm. r0, r4, 0, 0x17, 0x17 */ // 0x808AC2F4
    if (==) goto 0x0x808ac384;
    /* rlwinm. r0, r4, 0, 0x1a, 0x1a */ // 0x808AC2FC
    if (==) goto 0x0x808ac30c;
    r4 = r31 + 0xb8; // 0x808AC304
    FUN_80842F28(r4); // bl 0x80842F28
    r3 = *(0x13c + r31); // lwz @ 0x808AC30C
    r0 = *(0 + r3); // lwz @ 0x808AC310
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x808AC314
    if (==) goto 0x0x808ac328;
    r4 = r31 + 0xb8; // 0x808AC31C
    r5 = r31 + 0xc4; // 0x808AC320
    FUN_80842F48(r4, r5); // bl 0x80842F48
    /* lis r3, 0 */ // 0x808AC328
    r3 = *(0 + r3); // lwz @ 0x808AC32C
    r0 = *(0xb68 + r3); // lwz @ 0x808AC330
    if (!=) goto 0x0x808ac34c;
    /* lfs f1, 0xd0(r31) */ // 0x808AC33C
    /* lfs f0, 0xd8(r31) */ // 0x808AC340
    /* stfs f1, 0xb8(r31) */ // 0x808AC344
    /* stfs f0, 0xc0(r31) */ // 0x808AC348
    /* lis r5, 0 */ // 0x808AC34C
    r4 = r31 + 0xb8; // 0x808AC354
    r5 = r5 + 0; // 0x808AC358
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x808AC360
    /* lfs f0, 0x10(r1) */ // 0x808AC364
    /* lfs f1, 0xc(r1) */ // 0x808AC368
    r0 = r0 | 1; // 0x808AC36C
    /* lfs f2, 8(r1) */ // 0x808AC370
    /* stfs f2, 0x30(r31) */ // 0x808AC374
    *(0x2c + r31) = r0; // sth @ 0x808AC378
    /* stfs f1, 0x34(r31) */ // 0x808AC37C
    /* stfs f0, 0x38(r31) */ // 0x808AC380
    r0 = *(0x24 + r1); // lwz @ 0x808AC384
    r31 = *(0x1c + r1); // lwz @ 0x808AC388
    return;
}