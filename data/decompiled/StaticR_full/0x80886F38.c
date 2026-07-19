/* Function at 0x80886F38, size=148 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80886F38(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80886F40
    *(0x44 + r1) = r0; // stw @ 0x80886F44
    *(0x3c + r1) = r31; // stw @ 0x80886F48
    r31 = r3;
    r5 = *(0 + r5); // lwz @ 0x80886F50
    r0 = *(0x20 + r5); // lwz @ 0x80886F54
    /* subf r4, r4, r0 */ // 0x80886F58
    FUN_80886FE4(); // bl 0x80886FE4
    r4 = r31 + 0x134; // 0x80886F64
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r31 + 0x108; // 0x80886F70
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    r0 = *(0x54 + r31); // lbz @ 0x80886F7C
    if (==) goto 0x0x80886f90;
    r4 = r31 + 0x48; // 0x80886F88
    /* b 0x80886fc0 */ // 0x80886F8C
    /* li r0, 1 */ // 0x80886F90
    *(0x54 + r31) = r0; // stb @ 0x80886F94
    r4 = r31 + 0x58; // 0x80886F9C
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x80886FA4
    r4 = r31 + 0x48; // 0x80886FA8
    /* stfs f0, 0x48(r31) */ // 0x80886FAC
    /* lfs f0, 0xc(r1) */ // 0x80886FB0
    /* stfs f0, 0x4c(r31) */ // 0x80886FB4
    /* lfs f0, 0x10(r1) */ // 0x80886FB8
    /* stfs f0, 0x50(r31) */ // 0x80886FBC
    r3 = r31 + 0x140; // 0x80886FC0
    FUN_805E3430(r3, r5); // bl 0x805E3430
}