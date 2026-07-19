/* Function at 0x807B0AFC, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807B0AFC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807B0B0C
    r4 = r31 + 0; // 0x807B0B10
    *(0x18 + r1) = r30; // stw @ 0x807B0B14
    /* lis r30, 0 */ // 0x807B0B18
    r30 = r30 + 0; // 0x807B0B1C
    *(0x14 + r1) = r29; // stw @ 0x807B0B20
    /* lis r29, 0 */ // 0x807B0B24
    r29 = r29 + 0; // 0x807B0B28
    /* lfs f2, 0x2c(r30) */ // 0x807B0B2C
    r3 = r29 + 0xc; // 0x807B0B30
    /* lfs f1, 0(r30) */ // 0x807B0B34
    /* lfs f0, 0x30(r30) */ // 0x807B0B38
    r5 = r29 + 0; // 0x807B0B3C
    /* stfs f2, 0xc(r29) */ // 0x807B0B40
    /* stfs f1, 4(r3) */ // 0x807B0B44
    /* stfs f0, 8(r3) */ // 0x807B0B48
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x807B0B50
    r3 = r29 + 0x24; // 0x807B0B54
    /* lfs f0, 0x34(r30) */ // 0x807B0B58
    r4 = r31 + 0; // 0x807B0B5C
    /* stfs f1, 0x24(r29) */ // 0x807B0B60
    r5 = r29 + 0x18; // 0x807B0B64
    /* stfs f0, 4(r3) */ // 0x807B0B68
    /* stfs f1, 8(r3) */ // 0x807B0B6C
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x807B0B74
    r3 = r29 + 0x3c; // 0x807B0B78
    /* lfs f0, 0x38(r30) */ // 0x807B0B7C
    r4 = r31 + 0; // 0x807B0B80
    /* stfs f1, 0x3c(r29) */ // 0x807B0B84
    r5 = r29 + 0x30; // 0x807B0B88
    /* stfs f0, 4(r3) */ // 0x807B0B8C
    /* stfs f1, 8(r3) */ // 0x807B0B90
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x807B0B98
    r31 = *(0x1c + r1); // lwz @ 0x807B0B9C
    r30 = *(0x18 + r1); // lwz @ 0x807B0BA0
    r29 = *(0x14 + r1); // lwz @ 0x807B0BA4
    return;
}