/* Function at 0x80768DCC, size=152 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80768DCC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x80768DD8
    r31 = r3;
    r0 = *(0xb4 + r3); // lhz @ 0x80768DE0
    if (!=) goto 0x0x80768e04;
    /* lis r3, 0 */ // 0x80768DEC
    r4 = r31 + 0x114; // 0x80768DF0
    r3 = r3 + 0; // 0x80768DF4
    FUN_80743DF8(r3, r4, r3, r5); // bl 0x80743DF8
    /* b 0x80768e14 */ // 0x80768E00
    r3 = r3 + 0x120; // 0x80768E04
    r4 = r31 + 0x114; // 0x80768E08
    FUN_80743DF8(r3, r4, r5); // bl 0x80743DF8
    /* lis r3, 0 */ // 0x80768E14
    /* lis r4, 0 */ // 0x80768E18
    r5 = r3 + 0; // 0x80768E1C
    /* lfs f1, 0(r3) */ // 0x80768E20
    /* lfs f0, 4(r5) */ // 0x80768E24
    /* lis r6, 0 */ // 0x80768E28
    /* lfs f2, 8(r5) */ // 0x80768E2C
    /* stfs f1, 0x54(r1) */ // 0x80768E34
    /* lfs f1, 0(r4) */ // 0x80768E38
    /* stfs f0, 0x64(r1) */ // 0x80768E40
    /* lfs f0, 0(r6) */ // 0x80768E44
    /* stfs f2, 0x74(r1) */ // 0x80768E48
    /* lfs f2, 0x110(r31) */ // 0x80768E4C
    /* fmuls f1, f2, f1 */ // 0x80768E50
    /* stfs f0, 0xc(r1) */ // 0x80768E54
    /* stfs f1, 8(r1) */ // 0x80768E58
    /* stfs f0, 0x10(r1) */ // 0x80768E5C
    FUN_805E3430(); // bl 0x805E3430
}