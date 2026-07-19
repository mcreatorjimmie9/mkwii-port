/* Function at 0x80642A78, size=184 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80642A78(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x68 + r1) = r30; // stw @ 0x80642A88
    r30 = r3;
    r0 = *(0x64 + r3); // lbz @ 0x80642A90
    if (==) goto 0x0x80642bac;
    r0 = *(0x60 + r3); // lwz @ 0x80642A9C
    if (==) goto 0x0x80642bac;
    if (!=) goto 0x0x80642af8;
    /* lis r4, 0 */ // 0x80642AB0
    /* lfs f1, 0x70(r3) */ // 0x80642AB4
    /* lfs f0, 0(r4) */ // 0x80642AB8
    /* lis r4, 0 */ // 0x80642ABC
    /* fsubs f0, f1, f0 */ // 0x80642AC0
    /* stfs f0, 0x70(r3) */ // 0x80642AC4
    /* lfs f1, 0(r4) */ // 0x80642AC8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80642ACC
    if (<=) goto 0x0x80642ae0;
    /* stfs f1, 0x70(r3) */ // 0x80642AD4
    /* li r0, 1 */ // 0x80642AD8
    /* b 0x80642ae4 */ // 0x80642ADC
    /* li r0, 0 */ // 0x80642AE0
    if (==) goto 0x0x80642bac;
    /* li r0, 0 */ // 0x80642AEC
    *(0x64 + r3) = r0; // stb @ 0x80642AF0
    /* b 0x80642bac */ // 0x80642AF4
    /* lfs f1, 0x68(r3) */ // 0x80642AF8
    /* lis r31, 0 */ // 0x80642AFC
    r0 = *(0 + r31); // lwz @ 0x80642B00
    *(8 + r1) = r0; // stw @ 0x80642B08
    /* li r5, 0 */ // 0x80642B10
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r4 = r30 + 0x6c; // 0x80642B1C
    FUN_805E3430(r4, r5, r3, r4); // bl 0x805E3430
    r0 = *(0 + r31); // lwz @ 0x80642B24
    if (!=) goto 0x0x80642b5c;
}