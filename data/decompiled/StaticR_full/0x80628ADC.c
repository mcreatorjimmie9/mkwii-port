/* Function at 0x80628ADC, size=192 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80628ADC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80628AEC
    r31 = r31 + 0; // 0x80628AF0
    *(0x58 + r1) = r30; // stw @ 0x80628AF4
    r30 = r3;
    r4 = *(0x7c + r3); // lwz @ 0x80628AFC
    r0 = *(4 + r4); // lwz @ 0x80628B00
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80628B04
    if (==) goto 0x0x80628c1c;
    FUN_8061DF18(); // bl 0x8061DF18
    r4 = *(0x98 + r30); // lwz @ 0x80628B10
    /* lfs f2, 0(r31) */ // 0x80628B14
    /* lfs f1, 0x6c(r4) */ // 0x80628B18
    /* lfs f0, 0x22c(r3) */ // 0x80628B1C
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x80628B20
    if (<=) goto 0x0x80628b2c;
    /* fdivs f2, f0, f1 */ // 0x80628B28
    /* lfs f0, 0x9c(r30) */ // 0x80628B2C
    /* lfs f1, 4(r31) */ // 0x80628B30
    /* fadds f2, f0, f2 */ // 0x80628B34
    /* stfs f2, 0x9c(r30) */ // 0x80628B38
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x80628B3C
    if (<=) goto 0x0x80628b50;
    /* fsubs f0, f2, f1 */ // 0x80628B44
    /* stfs f0, 0x9c(r30) */ // 0x80628B48
    /* b 0x80628b64 */ // 0x80628B4C
    /* lfs f0, 8(r31) */ // 0x80628B50
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80628B54
    if (>=) goto 0x0x80628b64;
    /* fadds f0, f2, f1 */ // 0x80628B5C
    /* stfs f0, 0x9c(r30) */ // 0x80628B60
    /* lfs f1, 0x9c(r30) */ // 0x80628B64
    r3 = r30 + 0x4c; // 0x80628B68
    /* lfs f0, 0(r31) */ // 0x80628B6C
    /* stfs f1, 0x14(r1) */ // 0x80628B74
    /* stfs f0, 0x18(r1) */ // 0x80628B78
    /* stfs f0, 0x1c(r1) */ // 0x80628B7C
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r30 + 0x1c; // 0x80628B84
    r4 = r30 + 0x4c; // 0x80628B88
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r6 = *(0x98 + r30); // lwz @ 0x80628B94
    r3 = r30;
}