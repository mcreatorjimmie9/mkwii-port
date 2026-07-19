/* Function at 0x80745D18, size=304 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80745D18(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x5c + r1) = r31; // stw @ 0x80745D24
    r31 = r3;
    r0 = *(0xf0 + r3); // lbz @ 0x80745D2C
    if (==) goto 0x0x80745e8c;
    r3 = *(0x20 + r3); // lwz @ 0x80745D38
    r12 = *(0 + r3); // lwz @ 0x80745D3C
    r12 = *(0x14 + r12); // lwz @ 0x80745D40
    /* mtctr r12 */ // 0x80745D44
    /* bctrl  */ // 0x80745D48
    if (!=) goto 0x0x80745d8c;
    /* li r0, 0 */ // 0x80745D54
    *(0xf0 + r31) = r0; // stb @ 0x80745D58
    r3 = r31;
    /* li r4, 0 */ // 0x80745D60
    r12 = *(0 + r31); // lwz @ 0x80745D64
    r12 = *(0x68 + r12); // lwz @ 0x80745D68
    /* mtctr r12 */ // 0x80745D6C
    /* bctrl  */ // 0x80745D70
    r12 = *(0 + r31); // lwz @ 0x80745D74
    r3 = r31;
    r12 = *(0x8c + r12); // lwz @ 0x80745D7C
    /* mtctr r12 */ // 0x80745D80
    /* bctrl  */ // 0x80745D84
    /* b 0x80745e8c */ // 0x80745D88
    r4 = *(0x20 + r31); // lwz @ 0x80745D8C
    r3 = r31;
    r4 = r4 + 0x24; // 0x80745D94
    FUN_808A1E3C(r3, r4); // bl 0x808A1E3C
    r3 = r31;
    FUN_808A1BCC(r3, r4, r3); // bl 0x808A1BCC
    r5 = *(0x58 + r31); // lwz @ 0x80745DA4
    /* lis r4, 0 */ // 0x80745DA8
    r0 = *(0x5c + r31); // lwz @ 0x80745DAC
    r6 = r4 + 0; // 0x80745DB0
    *(0x24 + r1) = r0; // stw @ 0x80745DB4
    /* lfs f2, 0(r4) */ // 0x80745DBC
    *(0x20 + r1) = r5; // stw @ 0x80745DC4
    r5 = r31 + 0xe4; // 0x80745DC8
    /* lfs f1, 4(r6) */ // 0x80745DCC
    r7 = *(0x60 + r31); // lwz @ 0x80745DD0
    r0 = *(0x64 + r31); // lwz @ 0x80745DD4
    *(0x2c + r1) = r0; // stw @ 0x80745DD8
    /* lfs f0, 8(r6) */ // 0x80745DDC
    *(0x28 + r1) = r7; // stw @ 0x80745DE0
    r6 = *(0x68 + r31); // lwz @ 0x80745DE4
    r0 = *(0x6c + r31); // lwz @ 0x80745DE8
    *(0x34 + r1) = r0; // stw @ 0x80745DEC
    *(0x30 + r1) = r6; // stw @ 0x80745DF0
    r6 = *(0x70 + r31); // lwz @ 0x80745DF4
    r0 = *(0x74 + r31); // lwz @ 0x80745DF8
    *(0x3c + r1) = r0; // stw @ 0x80745DFC
    *(0x38 + r1) = r6; // stw @ 0x80745E00
    r6 = *(0x78 + r31); // lwz @ 0x80745E04
    r0 = *(0x7c + r31); // lwz @ 0x80745E08
    *(0x44 + r1) = r0; // stw @ 0x80745E0C
    *(0x40 + r1) = r6; // stw @ 0x80745E10
    r6 = *(0x80 + r31); // lwz @ 0x80745E14
    r0 = *(0x84 + r31); // lwz @ 0x80745E18
    *(0x4c + r1) = r0; // stw @ 0x80745E1C
    *(0x48 + r1) = r6; // stw @ 0x80745E20
    /* stfs f2, 0x2c(r1) */ // 0x80745E24
    /* stfs f1, 0x3c(r1) */ // 0x80745E28
    /* stfs f0, 0x4c(r1) */ // 0x80745E2C
    FUN_805E3430(); // bl 0x805E3430
    r4 = *(0x20 + r31); // lwz @ 0x80745E34
    r4 = r4 + 0x18; // 0x80745E40
    FUN_805A4464(r3, r5, r4); // bl 0x805A4464
}