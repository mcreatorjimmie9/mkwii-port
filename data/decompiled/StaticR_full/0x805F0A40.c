/* Function at 0x805F0A40, size=600 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_805F0A40(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805F0A48
    /* lfs f1, 0(r4) */ // 0x805F0A50
    *(0x2c + r1) = r31; // stw @ 0x805F0A54
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x805F0A5C
    /* lfs f2, 0x28(r3) */ // 0x805F0A60
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x805F0A64
    if (>=) goto 0x0x805f0c30;
    /* lfs f0, 0x24(r3) */ // 0x805F0A6C
    /* fadds f0, f2, f0 */ // 0x805F0A70
    /* stfs f0, 0x28(r3) */ // 0x805F0A74
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805F0A78
    if (>=) goto 0x0x805f0a84;
    /* stfs f1, 0x28(r3) */ // 0x805F0A80
    r4 = *(0x14 + r3); // lwz @ 0x805F0A84
    r0 = *(0x21 + r3); // lbz @ 0x805F0A88
    r3 = r3 + 0x2c; // 0x805F0A8C
    r5 = *(0xc + r4); // lwz @ 0x805F0A90
    r4 = r3;
    /* slwi r0, r0, 2 */ // 0x805F0A98
    /* lfs f1, 0x28(r31) */ // 0x805F0A9C
    /* lwzx r30, r5, r0 */ // 0x805F0AA0
    r5 = r30 + 0x14; // 0x805F0AA4
    FUN_80637E20(r4, r5); // bl 0x80637E20
    r3 = r31 + 0x38; // 0x805F0AAC
    /* lfs f1, 0x28(r31) */ // 0x805F0AB0
    r4 = r3;
    r5 = r30 + 8; // 0x805F0AB8
    FUN_80637E20(r3, r4, r5); // bl 0x80637E20
    r3 = r31 + 0x44; // 0x805F0AC0
    /* lfs f1, 0x28(r31) */ // 0x805F0AC4
    r4 = r3;
    r5 = r30 + 0x2c; // 0x805F0ACC
    FUN_80637E8C(r3, r4, r5); // bl 0x80637E8C
    r5 = *(0x14 + r31); // lwz @ 0x805F0AD4
    r3 = r31 + 0x48; // 0x805F0AD8
    r0 = *(0x21 + r31); // lbz @ 0x805F0ADC
    r4 = r3;
    r5 = *(0x10 + r5); // lwz @ 0x805F0AE4
    /* slwi r0, r0, 3 */ // 0x805F0AE8
    /* lfs f1, 0x28(r31) */ // 0x805F0AEC
    r5 = r5 + r0; // 0x805F0AF0
    FUN_80637E8C(r4); // bl 0x80637E8C
    r0 = *(0x44 + r31); // lbz @ 0x805F0AF8
    *(0x20 + r1) = r0; // stb @ 0x805F0AFC
    r0 = *(0x45 + r31); // lbz @ 0x805F0B00
    *(0x21 + r1) = r0; // stb @ 0x805F0B04
    r0 = *(0x46 + r31); // lbz @ 0x805F0B08
    *(0x22 + r1) = r0; // stb @ 0x805F0B0C
    r0 = *(0x47 + r31); // lbz @ 0x805F0B10
    *(0x23 + r1) = r0; // stb @ 0x805F0B14
    r0 = *(0x54 + r31); // lbz @ 0x805F0B18
    r5 = *(0x48 + r31); // lbz @ 0x805F0B1C
    r4 = *(0x49 + r31); // lbz @ 0x805F0B20
    r3 = *(0x4a + r31); // lbz @ 0x805F0B28
    r0 = *(0x4b + r31); // lbz @ 0x805F0B2C
    *(0x4c + r31) = r5; // stb @ 0x805F0B30
    *(0x4d + r31) = r4; // stb @ 0x805F0B34
    *(0x4e + r31) = r3; // stb @ 0x805F0B38
    *(0x4f + r31) = r0; // stb @ 0x805F0B3C
    if (==) goto 0x0x805f0b64;
    /* lfs f1, 0x50(r31) */ // 0x805F0B44
    r4 = r31 + 0x44; // 0x805F0B4C
    FUN_80637F8C(r3, r4); // bl 0x80637F8C
    /* lfs f1, 0x50(r31) */ // 0x805F0B54
    r3 = r31 + 0x4c; // 0x805F0B58
    r4 = r31 + 0x48; // 0x805F0B5C
    FUN_80637F8C(r4, r3, r4); // bl 0x80637F8C
    r6 = *(0x4c + r31); // lbz @ 0x805F0B64
    r5 = *(0x4d + r31); // lbz @ 0x805F0B68
    r4 = *(0x4e + r31); // lbz @ 0x805F0B6C
    r0 = *(0x4f + r31); // lbz @ 0x805F0B70
    r3 = *(0x18 + r31); // lwz @ 0x805F0B74
    r30 = *(0x20 + r1); // lwz @ 0x805F0B78
    /* lfs f0, 0x2c(r31) */ // 0x805F0B7C
    /* stfs f0, 0x14(r3) */ // 0x805F0B80
    /* lfs f0, 0x30(r31) */ // 0x805F0B84
    /* stfs f0, 0x18(r3) */ // 0x805F0B88
    /* lfs f0, 0x34(r31) */ // 0x805F0B8C
    *(0x18 + r1) = r6; // stb @ 0x805F0B90
    *(0x19 + r1) = r5; // stb @ 0x805F0B94
    *(0x1a + r1) = r4; // stb @ 0x805F0B98
    *(0x1b + r1) = r0; // stb @ 0x805F0B9C
    /* stfs f0, 0x1c(r3) */ // 0x805F0BA0
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x18 + r31); // lwz @ 0x805F0BA8
    /* lfs f0, 0x38(r31) */ // 0x805F0BAC
    /* stfs f0, 8(r3) */ // 0x805F0BB0
    /* lfs f0, 0x3c(r31) */ // 0x805F0BB4
    /* stfs f0, 0xc(r3) */ // 0x805F0BB8
    /* lfs f0, 0x40(r31) */ // 0x805F0BBC
    /* stfs f0, 0x10(r3) */ // 0x805F0BC0
    FUN_805E3430(); // bl 0x805E3430
    *(8 + r1) = r30; // stw @ 0x805F0BC8
    r3 = *(0x18 + r31); // lwz @ 0x805F0BCC
    r0 = *(8 + r1); // lbz @ 0x805F0BD0
    *(0x2c + r3) = r0; // stb @ 0x805F0BD4
    r0 = *(9 + r1); // lbz @ 0x805F0BD8
    *(0x2d + r3) = r0; // stb @ 0x805F0BDC
    r0 = *(0xa + r1); // lbz @ 0x805F0BE0
    *(0x2e + r3) = r0; // stb @ 0x805F0BE4
    r0 = *(0xb + r1); // lbz @ 0x805F0BE8
    *(0x2f + r3) = r0; // stb @ 0x805F0BEC
    r4 = *(0x18 + r1); // lwz @ 0x805F0BF0
    r0 = *(0x1c + r31); // lwz @ 0x805F0BF4
    r3 = *(0x14 + r31); // lwz @ 0x805F0BF8
    *(0xc + r1) = r4; // stw @ 0x805F0BFC
    r0 = r0 rlwinm 3; // rlwinm
    r4 = *(0x10 + r3); // lwz @ 0x805F0C04
    r3 = *(0xc + r1); // lbz @ 0x805F0C08
    r4 = r4 + r0; // 0x805F0C0C
    r0 = *(0xd + r1); // lbz @ 0x805F0C10
    *(0 + r4) = r3; // stb @ 0x805F0C14
    r3 = *(0xe + r1); // lbz @ 0x805F0C18
    *(1 + r4) = r0; // stb @ 0x805F0C1C
    r0 = *(0xf + r1); // lbz @ 0x805F0C20
    *(2 + r4) = r3; // stb @ 0x805F0C24
    *(3 + r4) = r0; // stb @ 0x805F0C28
    /* b 0x805f0d08 */ // 0x805F0C2C
    r0 = *(0x54 + r3); // lbz @ 0x805F0C30
    if (==) goto 0x0x805f0d08;
    r0 = *(0x44 + r3); // lbz @ 0x805F0C3C
    r4 = r31 + 0x44; // 0x805F0C40
    *(0x1c + r1) = r0; // stb @ 0x805F0C44
    r0 = *(0x45 + r3); // lbz @ 0x805F0C48
    *(0x1d + r1) = r0; // stb @ 0x805F0C4C
    r0 = *(0x46 + r3); // lbz @ 0x805F0C50
    *(0x1e + r1) = r0; // stb @ 0x805F0C54
    r0 = *(0x47 + r3); // lbz @ 0x805F0C58
    *(0x1f + r1) = r0; // stb @ 0x805F0C5C
    r7 = *(0x48 + r3); // lbz @ 0x805F0C60
    r6 = *(0x49 + r3); // lbz @ 0x805F0C64
    r5 = *(0x4a + r3); // lbz @ 0x805F0C68
    r0 = *(0x4b + r3); // lbz @ 0x805F0C6C
    *(0x4c + r3) = r7; // stb @ 0x805F0C70
    /* lfs f1, 0x50(r31) */ // 0x805F0C74
    *(0x4d + r3) = r6; // stb @ 0x805F0C78
    *(0x4e + r3) = r5; // stb @ 0x805F0C7C
    *(0x4f + r3) = r0; // stb @ 0x805F0C80
    FUN_80637F8C(r3); // bl 0x80637F8C
    /* lfs f1, 0x50(r31) */ // 0x805F0C8C
    r3 = r31 + 0x4c; // 0x805F0C90
    r4 = r31 + 0x48; // 0x805F0C94
}