/* Function at 0x806B8B94, size=1288 bytes */
/* Stack frame: 448 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_806B8B94(int r3, int r4, int r5)
{
    /* Stack frame: -448(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x1b8 + r1) = r30; // stw @ 0x806B8BA8
    *(0x1b4 + r1) = r29; // stw @ 0x806B8BAC
    r0 = *(0x7c + r3); // lwz @ 0x806B8BB0
    if (==) goto 0x0x806b8bd8;
    if (==) goto 0x0x806b8ca4;
    if (==) goto 0x0x806b8e88;
    if (==) goto 0x0x806b8f98;
    /* b 0x806b9080 */ // 0x806B8BD4
    /* lis r3, 0 */ // 0x806B8BD8
    r3 = *(0 + r3); // lwz @ 0x806B8BDC
    r3 = *(0 + r3); // lwz @ 0x806B8BE0
    r29 = *(0x150 + r3); // lwz @ 0x806B8BE4
    if (!=) goto 0x0x806b8bf8;
    /* li r29, 0 */ // 0x806B8BF0
    /* b 0x806b8c4c */ // 0x806B8BF4
    /* lis r30, 0 */ // 0x806B8BF8
    r30 = r30 + 0; // 0x806B8BFC
    if (==) goto 0x0x806b8c48;
    r12 = *(0 + r29); // lwz @ 0x806B8C04
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B8C0C
    /* mtctr r12 */ // 0x806B8C10
    /* bctrl  */ // 0x806B8C14
    /* b 0x806b8c30 */ // 0x806B8C18
    if (!=) goto 0x0x806b8c2c;
    /* li r0, 1 */ // 0x806B8C24
    /* b 0x806b8c3c */ // 0x806B8C28
    r3 = *(0 + r3); // lwz @ 0x806B8C2C
    if (!=) goto 0x0x806b8c1c;
    /* li r0, 0 */ // 0x806B8C38
    if (==) goto 0x0x806b8c48;
    /* b 0x806b8c4c */ // 0x806B8C44
    /* li r29, 0 */ // 0x806B8C48
    r0 = *(0xa50 + r29); // lwz @ 0x806B8C4C
    if (==) goto 0x0x806b8c64;
    if (==) goto 0x0x806b8c8c;
    /* b 0x806b9080 */ // 0x806B8C60
    r12 = *(0 + r31); // lwz @ 0x806B8C64
    r3 = r31;
    /* li r4, 0x84 */ // 0x806B8C6C
    /* li r5, 0 */ // 0x806B8C70
    r12 = *(0x24 + r12); // lwz @ 0x806B8C74
    /* mtctr r12 */ // 0x806B8C78
    /* bctrl  */ // 0x806B8C7C
    /* li r0, 2 */ // 0x806B8C80
    *(0x7c + r31) = r0; // stw @ 0x806B8C84
    /* b 0x806b9080 */ // 0x806B8C88
    /* lis r4, 0 */ // 0x806B8C8C
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x806B8C94
    /* li r4, 1 */ // 0x806B8C98
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x806b9080 */ // 0x806B8CA0
    /* lis r3, 0 */ // 0x806B8CA4
    r3 = *(0 + r3); // lwz @ 0x806B8CA8
    FUN_806E69B4(r4, r3); // bl 0x806E69B4
    if (==) goto 0x0x806b9080;
    /* lis r3, 0 */ // 0x806B8CB8
    r4 = r31 + 0x80; // 0x806B8CBC
    r3 = *(0 + r3); // lwz @ 0x806B8CC0
    FUN_80700E54(r3, r4); // bl 0x80700E54
    if (==) goto 0x0x806b8d9c;
    /* lis r3, 0 */ // 0x806B8CD0
    r3 = *(0 + r3); // lwz @ 0x806B8CD4
    r3 = *(0 + r3); // lwz @ 0x806B8CD8
    r29 = *(0x144 + r3); // lwz @ 0x806B8CDC
    if (!=) goto 0x0x806b8cf0;
    /* li r29, 0 */ // 0x806B8CE8
    /* b 0x806b8d44 */ // 0x806B8CEC
    /* lis r30, 0 */ // 0x806B8CF0
    r30 = r30 + 0; // 0x806B8CF4
    if (==) goto 0x0x806b8d40;
    r12 = *(0 + r29); // lwz @ 0x806B8CFC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B8D04
    /* mtctr r12 */ // 0x806B8D08
    /* bctrl  */ // 0x806B8D0C
    /* b 0x806b8d28 */ // 0x806B8D10
    if (!=) goto 0x0x806b8d24;
    /* li r0, 1 */ // 0x806B8D1C
    /* b 0x806b8d34 */ // 0x806B8D20
    r3 = *(0 + r3); // lwz @ 0x806B8D24
    if (!=) goto 0x0x806b8d14;
    /* li r0, 0 */ // 0x806B8D30
    if (==) goto 0x0x806b8d40;
    /* b 0x806b8d44 */ // 0x806B8D3C
    /* li r29, 0 */ // 0x806B8D40
    r12 = *(0 + r29); // lwz @ 0x806B8D44
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B8D4C
    /* mtctr r12 */ // 0x806B8D50
    /* bctrl  */ // 0x806B8D54
    r12 = *(0 + r29); // lwz @ 0x806B8D58
    r3 = r29;
    /* li r4, 0x1997 */ // 0x806B8D60
    /* li r5, 0 */ // 0x806B8D64
    r12 = *(0x68 + r12); // lwz @ 0x806B8D68
    /* mtctr r12 */ // 0x806B8D6C
    /* bctrl  */ // 0x806B8D70
    r12 = *(0 + r31); // lwz @ 0x806B8D74
    r3 = r31;
    /* li r4, 0x4f */ // 0x806B8D7C
    /* li r5, 0 */ // 0x806B8D80
    r12 = *(0x24 + r12); // lwz @ 0x806B8D84
    /* mtctr r12 */ // 0x806B8D88
    /* bctrl  */ // 0x806B8D8C
    /* li r0, 3 */ // 0x806B8D90
    *(0x7c + r31) = r0; // stw @ 0x806B8D94
    /* b 0x806b9080 */ // 0x806B8D98
    /* lis r3, 0 */ // 0x806B8D9C
    r3 = *(0 + r3); // lwz @ 0x806B8DA0
    r3 = *(0 + r3); // lwz @ 0x806B8DA4
    r29 = *(0x14c + r3); // lwz @ 0x806B8DA8
    if (!=) goto 0x0x806b8dbc;
    /* li r29, 0 */ // 0x806B8DB4
    /* b 0x806b8e10 */ // 0x806B8DB8
    /* lis r30, 0 */ // 0x806B8DBC
    r30 = r30 + 0; // 0x806B8DC0
    if (==) goto 0x0x806b8e0c;
    r12 = *(0 + r29); // lwz @ 0x806B8DC8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B8DD0
    /* mtctr r12 */ // 0x806B8DD4
    /* bctrl  */ // 0x806B8DD8
    /* b 0x806b8df4 */ // 0x806B8DDC
    if (!=) goto 0x0x806b8df0;
    /* li r0, 1 */ // 0x806B8DE8
    /* b 0x806b8e00 */ // 0x806B8DEC
    r3 = *(0 + r3); // lwz @ 0x806B8DF0
    if (!=) goto 0x0x806b8de0;
    /* li r0, 0 */ // 0x806B8DFC
    if (==) goto 0x0x806b8e0c;
    /* b 0x806b8e10 */ // 0x806B8E08
    /* li r29, 0 */ // 0x806B8E0C
    r12 = *(0 + r29); // lwz @ 0x806B8E10
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B8E18
    /* mtctr r12 */ // 0x806B8E1C
    /* bctrl  */ // 0x806B8E20
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806B8E2C
    r3 = *(0 + r3); // lwz @ 0x806B8E30
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(0xe8 + r1) = r3; // stw @ 0x806B8E38
    r3 = r29;
    /* li r4, 0x1998 */ // 0x806B8E44
    r12 = *(0 + r29); // lwz @ 0x806B8E48
    r12 = *(0x68 + r12); // lwz @ 0x806B8E4C
    /* mtctr r12 */ // 0x806B8E50
    /* bctrl  */ // 0x806B8E54
    r0 = r31 + 0x44; // 0x806B8E58
    *(0x188 + r29) = r0; // stw @ 0x806B8E5C
    r3 = r31;
    /* li r4, 0x51 */ // 0x806B8E64
    r12 = *(0 + r31); // lwz @ 0x806B8E68
    /* li r5, 0 */ // 0x806B8E6C
    r12 = *(0x24 + r12); // lwz @ 0x806B8E70
    /* mtctr r12 */ // 0x806B8E74
    /* bctrl  */ // 0x806B8E78
    /* li r0, 6 */ // 0x806B8E7C
    *(0x7c + r31) = r0; // stw @ 0x806B8E80
    /* b 0x806b9080 */ // 0x806B8E84
    /* lis r3, 0 */ // 0x806B8E88
    /* li r0, 0 */ // 0x806B8E8C
    *(8 + r1) = r0; // stb @ 0x806B8E90
    r3 = *(0 + r3); // lwz @ 0x806B8E98
    *(0xc + r1) = r0; // stw @ 0x806B8E9C
    FUN_806F9214(r4); // bl 0x806F9214
    r0 = *(0x20 + r1); // lbz @ 0x806B8EA4
    if (==) goto 0x0x806b8f68;
    /* lis r3, 0 */ // 0x806B8EB0
    r3 = *(0 + r3); // lwz @ 0x806B8EB4
    r3 = *(0 + r3); // lwz @ 0x806B8EB8
    r29 = *(0x14c + r3); // lwz @ 0x806B8EBC
    if (!=) goto 0x0x806b8ed0;
    /* li r29, 0 */ // 0x806B8EC8
    /* b 0x806b8f24 */ // 0x806B8ECC
    /* lis r30, 0 */ // 0x806B8ED0
    r30 = r30 + 0; // 0x806B8ED4
    if (==) goto 0x0x806b8f20;
    r12 = *(0 + r29); // lwz @ 0x806B8EDC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B8EE4
    /* mtctr r12 */ // 0x806B8EE8
    /* bctrl  */ // 0x806B8EEC
    /* b 0x806b8f08 */ // 0x806B8EF0
    if (!=) goto 0x0x806b8f04;
    /* li r0, 1 */ // 0x806B8EFC
    /* b 0x806b8f14 */ // 0x806B8F00
    r3 = *(0 + r3); // lwz @ 0x806B8F04
    if (!=) goto 0x0x806b8ef4;
    /* li r0, 0 */ // 0x806B8F10
    if (==) goto 0x0x806b8f20;
    /* b 0x806b8f24 */ // 0x806B8F1C
    /* li r29, 0 */ // 0x806B8F20
    r12 = *(0 + r29); // lwz @ 0x806B8F24
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B8F2C
    /* mtctr r12 */ // 0x806B8F30
    /* bctrl  */ // 0x806B8F34
    r12 = *(0 + r29); // lwz @ 0x806B8F38
    r3 = r29;
    /* li r4, 0x199c */ // 0x806B8F40
    /* li r5, 0 */ // 0x806B8F44
    r12 = *(0x68 + r12); // lwz @ 0x806B8F48
    /* mtctr r12 */ // 0x806B8F4C
    /* bctrl  */ // 0x806B8F50
    /* li r0, 0xa9 */ // 0x806B8F54
    *(0x604 + r29) = r0; // stw @ 0x806B8F58
    /* li r0, 0x51 */ // 0x806B8F5C
    *(0x84 + r31) = r0; // stw @ 0x806B8F60
    /* b 0x806b8f70 */ // 0x806B8F64
    /* li r0, 0xa9 */ // 0x806B8F68
    *(0x84 + r31) = r0; // stw @ 0x806B8F6C
    /* lis r4, 0 */ // 0x806B8F70
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x806B8F78
    /* li r4, 0 */ // 0x806B8F7C
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    r3 = r31;
    /* li r4, 0x50 */ // 0x806B8F88
    /* li r5, -1 */ // 0x806B8F8C
    FUN_806724B8(r4, r3, r4, r5); // bl 0x806724B8
    /* b 0x806b9080 */ // 0x806B8F94
    /* lis r3, 0 */ // 0x806B8F98
    r3 = *(0 + r3); // lwz @ 0x806B8F9C
    r3 = *(0 + r3); // lwz @ 0x806B8FA0
    r29 = *(0x14c + r3); // lwz @ 0x806B8FA4
    if (!=) goto 0x0x806b8fb8;
    /* li r29, 0 */ // 0x806B8FB0
    /* b 0x806b900c */ // 0x806B8FB4
    /* lis r30, 0 */ // 0x806B8FB8
    r30 = r30 + 0; // 0x806B8FBC
    if (==) goto 0x0x806b9008;
    r12 = *(0 + r29); // lwz @ 0x806B8FC4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B8FCC
    /* mtctr r12 */ // 0x806B8FD0
    /* bctrl  */ // 0x806B8FD4
    /* b 0x806b8ff0 */ // 0x806B8FD8
    if (!=) goto 0x0x806b8fec;
    /* li r0, 1 */ // 0x806B8FE4
    /* b 0x806b8ffc */ // 0x806B8FE8
    r3 = *(0 + r3); // lwz @ 0x806B8FEC
    if (!=) goto 0x0x806b8fdc;
    /* li r0, 0 */ // 0x806B8FF8
    if (==) goto 0x0x806b9008;
    /* b 0x806b900c */ // 0x806B9004
    /* li r29, 0 */ // 0x806B9008
    r12 = *(0 + r29); // lwz @ 0x806B900C
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B9014
    /* mtctr r12 */ // 0x806B9018
    /* bctrl  */ // 0x806B901C
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806B9028
    r3 = *(0 + r3); // lwz @ 0x806B902C
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(0x24 + r1) = r3; // stw @ 0x806B9034
    r3 = r29;
    /* li r4, 0x1998 */ // 0x806B9040
    r12 = *(0 + r29); // lwz @ 0x806B9044
    r12 = *(0x68 + r12); // lwz @ 0x806B9048
    /* mtctr r12 */ // 0x806B904C
    /* bctrl  */ // 0x806B9050
    r0 = r31 + 0x44; // 0x806B9054
    *(0x188 + r29) = r0; // stw @ 0x806B9058
    r3 = r31;
    /* li r4, 0x51 */ // 0x806B9060
    r12 = *(0 + r31); // lwz @ 0x806B9064
    /* li r5, 0 */ // 0x806B9068
    r12 = *(0x24 + r12); // lwz @ 0x806B906C
    /* mtctr r12 */ // 0x806B9070
    /* bctrl  */ // 0x806B9074
    /* li r0, 6 */ // 0x806B9078
    *(0x7c + r31) = r0; // stw @ 0x806B907C
    r0 = *(0x1c4 + r1); // lwz @ 0x806B9080
    r31 = *(0x1bc + r1); // lwz @ 0x806B9084
    r30 = *(0x1b8 + r1); // lwz @ 0x806B9088
    r29 = *(0x1b4 + r1); // lwz @ 0x806B908C
    return;
}