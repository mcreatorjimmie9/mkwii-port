/* Function at 0x80605AD8, size=568 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 17 function(s) */

int FUN_80605AD8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80605AE0
    /* li r5, 0 */ // 0x80605AE4
    *(0x14 + r1) = r0; // stw @ 0x80605AE8
    *(0xc + r1) = r31; // stw @ 0x80605AEC
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80605AF4
    r12 = *(0xc + r3); // lwz @ 0x80605AF8
    r12 = *(0x14 + r12); // lwz @ 0x80605AFC
    /* mtctr r12 */ // 0x80605B00
    /* bctrl  */ // 0x80605B04
    r3 = r31;
    r4 = r31 + 0x5c; // 0x80605B0C
    FUN_8061E510(r3, r4); // bl 0x8061E510
    /* lfs f5, 0x5c(r31) */ // 0x80605B14
    r3 = r31;
    /* lfs f4, 0x60(r31) */ // 0x80605B1C
    /* lfs f3, 0x64(r31) */ // 0x80605B20
    /* frsp f2, f5 */ // 0x80605B24
    /* frsp f1, f4 */ // 0x80605B28
    /* stfs f5, 0x68(r31) */ // 0x80605B2C
    /* frsp f0, f3 */ // 0x80605B30
    /* stfs f4, 0x6c(r31) */ // 0x80605B34
    /* stfs f3, 0x70(r31) */ // 0x80605B38
    /* stfs f5, 0x74(r31) */ // 0x80605B3C
    /* stfs f4, 0x78(r31) */ // 0x80605B40
    /* stfs f3, 0x7c(r31) */ // 0x80605B44
    /* stfs f5, 0x50(r31) */ // 0x80605B48
    /* stfs f4, 0x54(r31) */ // 0x80605B4C
    /* stfs f3, 0x58(r31) */ // 0x80605B50
    /* stfs f5, 0x80(r31) */ // 0x80605B54
    /* stfs f4, 0x84(r31) */ // 0x80605B58
    /* stfs f3, 0x88(r31) */ // 0x80605B5C
    /* stfs f2, 0xa4(r31) */ // 0x80605B60
    /* stfs f1, 0xa8(r31) */ // 0x80605B64
    /* stfs f0, 0xac(r31) */ // 0x80605B68
    FUN_8061E28C(); // bl 0x8061E28C
    if (==) goto 0x0x80605b8c;
    if (==) goto 0x0x80605b9c;
    if (==) goto 0x0x80605bb0;
    /* b 0x80605bc0 */ // 0x80605B88
    /* lis r3, 0 */ // 0x80605B8C
    r3 = r3 + 0; // 0x80605B90
    *(0x284 + r31) = r3; // stw @ 0x80605B94
    /* b 0x80605bc0 */ // 0x80605B98
    /* lis r3, 0 */ // 0x80605B9C
    r3 = r3 + 0; // 0x80605BA0
    r0 = r3 + 0x10; // 0x80605BA4
    *(0x284 + r31) = r0; // stw @ 0x80605BA8
    /* b 0x80605bc0 */ // 0x80605BAC
    /* lis r3, 0 */ // 0x80605BB0
    r3 = r3 + 0; // 0x80605BB4
    r0 = r3 + 0x20; // 0x80605BB8
    *(0x284 + r31) = r0; // stw @ 0x80605BBC
    r4 = *(0 + r31); // lwz @ 0x80605BC0
    r3 = r31;
    /* li r5, 0 */ // 0x80605BC8
    /* li r6, 1 */ // 0x80605BCC
    r4 = *(4 + r4); // lwz @ 0x80605BD0
    /* li r7, 0 */ // 0x80605BD4
    r0 = *(0x14 + r4); // lwz @ 0x80605BD8
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r4) = r0; // stw @ 0x80605BE0
    r4 = *(0 + r31); // lwz @ 0x80605BE4
    r4 = *(4 + r4); // lwz @ 0x80605BE8
    r0 = *(0x14 + r4); // lwz @ 0x80605BEC
    r0 = r0 rlwinm 0; // rlwinm
    /* cntlzw r0, r0 */ // 0x80605BF4
    /* srwi r4, r0, 5 */ // 0x80605BF8
    FUN_8061E318(); // bl 0x8061E318
    r3 = *(0x260 + r31); // lwz @ 0x80605C00
    FUN_8064252C(); // bl 0x8064252C
    r3 = r31;
    FUN_8061E8B4(r3); // bl 0x8061E8B4
    /* li r30, 0 */ // 0x80605C10
    *(0x190 + r31) = r30; // stb @ 0x80605C14
    r3 = r31;
    FUN_8061ECA4(r3, r3); // bl 0x8061ECA4
    /* lis r4, 0 */ // 0x80605C20
    *(0x54 + r3) = r30; // stb @ 0x80605C24
    /* lfs f0, 0(r4) */ // 0x80605C28
    /* stfs f0, 0x50(r3) */ // 0x80605C2C
    r3 = r31;
    FUN_8061E908(r4, r3); // bl 0x8061E908
    /* li r4, 1 */ // 0x80605C38
    FUN_805FA020(r3, r4); // bl 0x805FA020
    r3 = r31;
    FUN_8061E920(r3, r4, r3); // bl 0x8061E920
    /* li r4, 1 */ // 0x80605C48
    FUN_805FA3F8(r4, r3, r4); // bl 0x805FA3F8
    r3 = r31;
    /* li r4, 9 */ // 0x80605C54
    /* li r5, 1 */ // 0x80605C58
    /* li r6, 0 */ // 0x80605C5C
    FUN_8061E8CC(r3, r4, r5, r6); // bl 0x8061E8CC
    r3 = r31;
    FUN_8061E59C(r4, r5, r6, r3); // bl 0x8061E59C
    /* li r4, 1 */ // 0x80605C6C
    FUN_805F77A8(r6, r3, r4); // bl 0x805F77A8
    r3 = *(0 + r31); // lwz @ 0x80605C74
    r3 = *(4 + r3); // lwz @ 0x80605C78
    r0 = *(0xc + r3); // lwz @ 0x80605C7C
    /* rlwinm. r0, r0, 0, 4, 4 */ // 0x80605C80
    if (==) goto 0x0x80605c94;
    r3 = r31;
    FUN_8061EE94(r3); // bl 0x8061EE94
    FUN_806451A0(r3); // bl 0x806451A0
    r4 = *(0 + r31); // lwz @ 0x80605C94
    r3 = *(4 + r4); // lwz @ 0x80605C98
    r0 = *(0xc + r3); // lwz @ 0x80605C9C
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x80605CA0
    if (==) goto 0x0x80605cc8;
    r4 = *(4 + r4); // lwz @ 0x80605CA8
    r3 = r31;
    r0 = *(0xc + r4); // lwz @ 0x80605CB0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80605CB8
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* li r0, 0 */ // 0x80605CC0
    *(0x171 + r3) = r0; // stb @ 0x80605CC4
    r3 = r31;
    r4 = r31 + 0x164; // 0x80605CCC
    FUN_8061EEE0(r3, r4); // bl 0x8061EEE0
    r4 = *(0 + r31); // lwz @ 0x80605CD4
    r3 = *(4 + r4); // lwz @ 0x80605CD8
    r0 = *(0x14 + r3); // lwz @ 0x80605CDC
    /* rlwinm. r0, r0, 0, 0x13, 0x13 */ // 0x80605CE0
    if (==) goto 0x0x80605cf8;
    r3 = *(4 + r4); // lwz @ 0x80605CE8
    r0 = *(0xc + r3); // lwz @ 0x80605CEC
    r0 = r0 | 8; // 0x80605CF0
    *(0xc + r3) = r0; // stw @ 0x80605CF4
    r0 = *(0x14 + r1); // lwz @ 0x80605CF8
    r31 = *(0xc + r1); // lwz @ 0x80605CFC
    r30 = *(8 + r1); // lwz @ 0x80605D00
    return;
}