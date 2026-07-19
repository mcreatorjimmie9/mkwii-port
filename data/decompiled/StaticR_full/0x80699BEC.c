/* Function at 0x80699BEC, size=584 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 14 function(s) */

int FUN_80699BEC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x80699BF8
    r31 = r3;
    FUN_806A0780(); // bl 0x806A0780
    r3 = r31 + 0x98; // 0x80699C04
    /* li r4, 1 */ // 0x80699C08
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80699C10
    if (==) goto 0x0x80699c58;
    r3 = r31 + 0x98; // 0x80699C1C
    /* li r4, 0 */ // 0x80699C20
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80699C28
    r4 = *(0 + r3); // lwz @ 0x80699C2C
    /* slwi r0, r0, 4 */ // 0x80699C30
    /* lwzx r0, r4, r0 */ // 0x80699C34
    if (==) goto 0x0x80699c48;
    /* li r0, 1 */ // 0x80699C40
    *(0x35 + r3) = r0; // stb @ 0x80699C44
    /* lis r3, 0 */ // 0x80699C48
    /* lfs f0, 0(r3) */ // 0x80699C4C
    /* stfs f0, 0x7c(r31) */ // 0x80699C50
    /* b 0x80699c80 */ // 0x80699C54
    r3 = r31 + 0x98; // 0x80699C58
    /* li r4, 0 */ // 0x80699C5C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80699C64
    /* li r4, 0 */ // 0x80699C68
    /* lfs f1, 0(r5) */ // 0x80699C6C
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    /* lis r3, 0 */ // 0x80699C74
    /* lfs f0, 0(r3) */ // 0x80699C78
    /* stfs f0, 0x7c(r31) */ // 0x80699C7C
    r0 = *(0x240 + r31); // lwz @ 0x80699C80
    if (==) goto 0x0x80699d04;
    r3 = r31 + 0x174; // 0x80699C8C
    FUN_806699A8(r3, r4, r5); // bl 0x806699A8
    r3 = *(0x240 + r31); // lwz @ 0x80699C9C
    r12 = *(0 + r3); // lwz @ 0x80699CA0
    r12 = *(0x68 + r12); // lwz @ 0x80699CA4
    /* mtctr r12 */ // 0x80699CA8
    /* bctrl  */ // 0x80699CAC
    r0 = *(0x18 + r1); // lha @ 0x80699CB0
    *(0x10 + r3) = r0; // sth @ 0x80699CB4
    r0 = *(0x1a + r1); // lha @ 0x80699CB8
    *(0x12 + r3) = r0; // sth @ 0x80699CBC
    r0 = *(0x1c + r1); // lha @ 0x80699CC0
    *(0x14 + r3) = r0; // sth @ 0x80699CC4
    r0 = *(0x1e + r1); // lha @ 0x80699CC8
    *(0x16 + r3) = r0; // sth @ 0x80699CCC
    r3 = *(0x240 + r31); // lwz @ 0x80699CD0
    r12 = *(0 + r3); // lwz @ 0x80699CD4
    r12 = *(0x68 + r12); // lwz @ 0x80699CD8
    /* mtctr r12 */ // 0x80699CDC
    /* bctrl  */ // 0x80699CE0
    r0 = *(0x10 + r1); // lha @ 0x80699CE4
    *(0x18 + r3) = r0; // sth @ 0x80699CE8
    r0 = *(0x12 + r1); // lha @ 0x80699CEC
    *(0x1a + r3) = r0; // sth @ 0x80699CF0
    r0 = *(0x14 + r1); // lha @ 0x80699CF4
    *(0x1c + r3) = r0; // sth @ 0x80699CF8
    r0 = *(0x16 + r1); // lha @ 0x80699CFC
    *(0x1e + r3) = r0; // sth @ 0x80699D00
    r0 = *(0x244 + r31); // lwz @ 0x80699D04
    if (==) goto 0x0x80699d84;
    r3 = r31 + 0x174; // 0x80699D10
    FUN_80669AA4(r3, r4); // bl 0x80669AA4
    r3 = *(0x244 + r31); // lwz @ 0x80699D1C
    r12 = *(0 + r3); // lwz @ 0x80699D20
    r12 = *(0x68 + r12); // lwz @ 0x80699D24
    /* mtctr r12 */ // 0x80699D28
    /* bctrl  */ // 0x80699D2C
    r0 = *(8 + r1); // lha @ 0x80699D30
    *(0x10 + r3) = r0; // sth @ 0x80699D34
    r0 = *(0xa + r1); // lha @ 0x80699D38
    *(0x12 + r3) = r0; // sth @ 0x80699D3C
    r0 = *(0xc + r1); // lha @ 0x80699D40
    *(0x14 + r3) = r0; // sth @ 0x80699D44
    r0 = *(0xe + r1); // lha @ 0x80699D48
    *(0x16 + r3) = r0; // sth @ 0x80699D4C
    r3 = *(0x244 + r31); // lwz @ 0x80699D50
    r12 = *(0 + r3); // lwz @ 0x80699D54
    r12 = *(0x68 + r12); // lwz @ 0x80699D58
    /* mtctr r12 */ // 0x80699D5C
    /* bctrl  */ // 0x80699D60
    r0 = *(8 + r1); // lha @ 0x80699D64
    *(0x18 + r3) = r0; // sth @ 0x80699D68
    r0 = *(0xa + r1); // lha @ 0x80699D6C
    *(0x1a + r3) = r0; // sth @ 0x80699D70
    r0 = *(0xc + r1); // lha @ 0x80699D74
    *(0x1c + r3) = r0; // sth @ 0x80699D78
    r0 = *(0xe + r1); // lha @ 0x80699D7C
    *(0x1e + r3) = r0; // sth @ 0x80699D80
    r0 = *(0x23c + r31); // lbz @ 0x80699D84
    if (!=) goto 0x0x80699dc8;
    r3 = r31 + 0x98; // 0x80699D90
    /* li r4, 4 */ // 0x80699D94
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80699D9C
    if (==) goto 0x0x80699dc8;
    r3 = r31 + 0x98; // 0x80699DA8
    /* li r4, 4 */ // 0x80699DAC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80699DB4
    /* li r4, 0 */ // 0x80699DB8
    /* lfs f1, 0(r5) */ // 0x80699DBC
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x80699e20 */ // 0x80699DC4
    r0 = *(0x23c + r31); // lbz @ 0x80699DC8
    if (!=) goto 0x0x80699e20;
    r3 = r31 + 0x98; // 0x80699DD4
    /* li r4, 4 */ // 0x80699DD8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80699DE0
    if (==) goto 0x0x80699e20;
    r3 = r31 + 0x98; // 0x80699DEC
    /* li r4, 3 */ // 0x80699DF0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80699DF8
    if (==) goto 0x0x80699e20;
    r3 = r31 + 0x98; // 0x80699E04
    /* li r4, 4 */ // 0x80699E08
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80699E10
    /* li r4, 1 */ // 0x80699E14
    /* lfs f1, 0(r5) */ // 0x80699E18
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x34 + r1); // lwz @ 0x80699E20
    r31 = *(0x2c + r1); // lwz @ 0x80699E24
    return;
}