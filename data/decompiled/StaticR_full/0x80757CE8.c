/* Function at 0x80757CE8, size=152 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80757CE8(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x80757CF4
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80757CFC
    r12 = *(0xb4 + r12); // lwz @ 0x80757D00
    /* mtctr r12 */ // 0x80757D04
    /* bctrl  */ // 0x80757D08
    if (==) goto 0x0x80757db4;
    /* lis r3, 0 */ // 0x80757D14
    /* lis r4, 0 */ // 0x80757D18
    /* lfs f0, 0(r3) */ // 0x80757D1C
    /* lfs f1, 0(r4) */ // 0x80757D24
    /* stfs f0, 8(r1) */ // 0x80757D2C
    /* stfs f1, 0xc(r1) */ // 0x80757D30
    /* stfs f0, 0x10(r1) */ // 0x80757D34
    /* stfs f0, 0x48(r1) */ // 0x80757D38
    /* stfs f0, 0x4c(r1) */ // 0x80757D3C
    /* stfs f0, 0x50(r1) */ // 0x80757D40
    /* stfs f0, 0x54(r1) */ // 0x80757D44
    /* stfs f0, 0x58(r1) */ // 0x80757D48
    /* stfs f0, 0x5c(r1) */ // 0x80757D4C
    /* stfs f0, 0x60(r1) */ // 0x80757D50
    /* stfs f0, 0x64(r1) */ // 0x80757D54
    /* stfs f0, 0x68(r1) */ // 0x80757D58
    /* stfs f0, 0x6c(r1) */ // 0x80757D5C
    /* stfs f0, 0x70(r1) */ // 0x80757D60
    /* stfs f0, 0x74(r1) */ // 0x80757D64
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = r31 + 0x58; // 0x80757D74
}