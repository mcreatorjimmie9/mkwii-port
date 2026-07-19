/* Function at 0x80769CF4, size=112 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80769CF4(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r0, 0x4330 */ // 0x80769D00
    *(0x2c + r1) = r31; // stw @ 0x80769D04
    /* lis r31, 0 */ // 0x80769D08
    r31 = r31 + 0; // 0x80769D0C
    *(0x28 + r1) = r30; // stw @ 0x80769D10
    /* lis r30, 0 */ // 0x80769D14
    r30 = r30 + 0; // 0x80769D18
    /* lfs f1, 0xb8(r31) */ // 0x80769D1C
    *(0x24 + r1) = r29; // stw @ 0x80769D20
    r29 = r3;
    /* lfd f2, 0xc0(r31) */ // 0x80769D28
    r4 = *(0xbc + r3); // lwz @ 0x80769D2C
    *(0x1c + r1) = r4; // stw @ 0x80769D30
    /* lfs f4, 0x68(r30) */ // 0x80769D34
    *(0x18 + r1) = r0; // stw @ 0x80769D38
    /* fmuls f3, f1, f4 */ // 0x80769D3C
    /* lfs f1, 0xb4(r31) */ // 0x80769D40
    /* lfd f0, 0x18(r1) */ // 0x80769D44
    /* fsubs f2, f0, f2 */ // 0x80769D48
    /* lfs f0, 0xbc(r31) */ // 0x80769D4C
    /* fadds f2, f3, f2 */ // 0x80769D50
    /* fmuls f1, f1, f2 */ // 0x80769D54
    /* fdivs f1, f1, f4 */ // 0x80769D58
    /* fmuls f1, f0, f1 */ // 0x80769D5C
    FUN_805E3430(); // bl 0x805E3430
}