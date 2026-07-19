/* Function at 0x807F3DA4, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_807F3DA4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x807F3DB0
    r31 = r3;
    /* lfs f1, 0xbc(r3) */ // 0x807F3DB8
    r3 = r3 + 0x30; // 0x807F3DBC
    FUN_80812778(r3); // bl 0x80812778
    if (<) goto 0x0x807f3de8;
    /* lis r5, 0 */ // 0x807F3DCC
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807F3DD4
    FUN_8061D97C(r5, r4); // bl 0x8061D97C
    /* li r0, 1 */ // 0x807F3DDC
    *(0xb8 + r31) = r3; // stw @ 0x807F3DE0
    *(0xb0 + r31) = r0; // stw @ 0x807F3DE4
    /* lis r4, 0 */ // 0x807F3DE8
    /* lfs f1, 0(r4) */ // 0x807F3DF0
    r4 = r31 + 0xd0; // 0x807F3DF4
    FUN_80735EBC(r4, r3, r4); // bl 0x80735EBC
    r4 = r31 + 0xc4; // 0x807F3E00
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x807F3E0C
    r3 = r31 + 0xc4; // 0x807F3E10
    /* stfs f0, 0xc4(r31) */ // 0x807F3E14
    /* lfs f0, 0xc(r1) */ // 0x807F3E18
    /* stfs f0, 0xc8(r31) */ // 0x807F3E1C
    /* lfs f0, 0x10(r1) */ // 0x807F3E20
    /* stfs f0, 0xcc(r31) */ // 0x807F3E24
    FUN_805E3430(); // bl 0x805E3430
}