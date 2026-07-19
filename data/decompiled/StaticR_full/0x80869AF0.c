/* Function at 0x80869AF0, size=128 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80869AF0(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 2 */ // 0x80869AF8
    /* li r0, 2 */ // 0x80869B00
    *(0x3c + r1) = r31; // stw @ 0x80869B04
    /* lis r31, 0 */ // 0x80869B08
    r31 = r31 + 0; // 0x80869B0C
    *(0x38 + r1) = r30; // stw @ 0x80869B10
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x80869B18
    *(0 + r3) = r0; // stw @ 0x80869B1C
    r5 = *(4 + r3); // lwz @ 0x80869B20
    /* lfs f2, 4(r31) */ // 0x80869B24
    r3 = *(0x28 + r5); // lwz @ 0x80869B28
    /* li r5, 0 */ // 0x80869B2C
    FUN_805E73A4(r5); // bl 0x805E73A4
    r3 = *(4 + r30); // lwz @ 0x80869B34
    /* li r4, 0 */ // 0x80869B38
    /* lfs f1, 0x54(r31) */ // 0x80869B3C
    r3 = *(0x28 + r3); // lwz @ 0x80869B40
    FUN_805E558C(r4); // bl 0x805E558C
    r3 = *(4 + r30); // lwz @ 0x80869B48
    r3 = *(0x10 + r3); // lwz @ 0x80869B4C
    r3 = *(0 + r3); // lwz @ 0x80869B50
    if (==) goto 0x0x80869b6c;
    r3 = r3 + 0xc; // 0x80869B5C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80869b74 */ // 0x80869B68
}