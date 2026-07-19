/* Function at 0x80881D08, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80881D08(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80881D18
    r31 = r31 + 0; // 0x80881D1C
    *(8 + r1) = r30; // stw @ 0x80881D20
    r30 = r4;
    /* lfs f2, 0x218(r31) */ // 0x80881D28
    r0 = *(0x1b8 + r3); // lwz @ 0x80881D2C
    if (==) goto 0x0x80881d44;
    if (==) goto 0x0x80881d88;
    /* b 0x80881d98 */ // 0x80881D40
    /* lfs f0, 0x8c(r31) */ // 0x80881D44
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80881D48
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80881D4C
    if (!=) goto 0x0x80881d64;
    /* lfs f0, 0x21c(r31) */ // 0x80881D54
    /* fadds f0, f0, f1 */ // 0x80881D58
    /* fmuls f1, f0, f2 */ // 0x80881D5C
    /* b 0x80881d74 */ // 0x80881D60
    /* lfs f0, 0x21c(r31) */ // 0x80881D64
    /* fsubs f0, f0, f2 */ // 0x80881D68
    /* fmuls f0, f1, f0 */ // 0x80881D6C
    /* fadds f1, f2, f0 */ // 0x80881D70
    r4 = r30;
    FUN_8069FE14(r4); // bl 0x8069FE14
    /* lfs f0, 0x220(r31) */ // 0x80881D7C
    /* stfs f0, 8(r30) */ // 0x80881D80
    /* b 0x80881dc8 */ // 0x80881D84
    FUN_8069FE14(r4); // bl 0x8069FE14
    /* lfs f0, 0x220(r31) */ // 0x80881D8C
    /* stfs f0, 8(r30) */ // 0x80881D90
    /* b 0x80881dc8 */ // 0x80881D94
    /* lis r4, 0 */ // 0x80881D98
    r4 = *(0 + r4); // lwz @ 0x80881D9C
    r0 = *(0xb70 + r4); // lwz @ 0x80881DA0
    if (!=) goto 0x0x80881dc0;
    /* lfs f0, 0x8c(r31) */ // 0x80881DAC
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80881DB0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80881DB4
    if (!=) goto 0x0x80881dc0;
    /* fmr f1, f0 */ // 0x80881DBC
    r4 = r30;
    FUN_8069FE14(r4); // bl 0x8069FE14
    r0 = *(0x14 + r1); // lwz @ 0x80881DC8
    r31 = *(0xc + r1); // lwz @ 0x80881DCC
    r30 = *(8 + r1); // lwz @ 0x80881DD0
    return;
}