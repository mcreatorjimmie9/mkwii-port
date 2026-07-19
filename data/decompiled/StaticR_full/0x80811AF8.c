/* Function at 0x80811AF8, size=96 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80811AF8(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    *(0x6c + r1) = r31; // stw @ 0x80811B04
    r31 = r3;
    r4 = *(0xa0 + r3); // lwz @ 0x80811B0C
    r4 = *(0 + r4); // lwz @ 0x80811B10
    r0 = *(0x2c + r4); // lha @ 0x80811B14
    if (!=) goto 0x0x80811b34;
    /* lfs f1, 0xb4(r3) */ // 0x80811B20
    /* lfs f0, 0xb0(r3) */ // 0x80811B24
    /* fsubs f0, f1, f0 */ // 0x80811B28
    /* stfs f0, 0xb4(r3) */ // 0x80811B2C
    /* b 0x80811b44 */ // 0x80811B30
    /* lfs f1, 0xb4(r3) */ // 0x80811B34
    /* lfs f0, 0xb0(r3) */ // 0x80811B38
    /* fadds f0, f1, f0 */ // 0x80811B3C
    /* stfs f0, 0xb4(r3) */ // 0x80811B40
    /* lis r4, 0 */ // 0x80811B44
    /* lfs f1, 0xb4(r31) */ // 0x80811B48
    r4 = r4 + 0; // 0x80811B50
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}