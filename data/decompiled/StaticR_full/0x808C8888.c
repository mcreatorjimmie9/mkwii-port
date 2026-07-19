/* Function at 0x808C8888, size=1004 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30 */
/* Calls: 15 function(s) */

int FUN_808C8888(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x808C8894
    *(0xfc + r1) = r31; // stw @ 0x808C8898
    *(0xf8 + r1) = r30; // stw @ 0x808C889C
    r30 = r3;
    *(0x7c + r3) = r0; // stw @ 0x808C88A4
    *(0x1d4 + r3) = r0; // stw @ 0x808C88A8
    *(0x68 + r3) = r0; // stb @ 0x808C88AC
    FUN_808C8C74(); // bl 0x808C8C74
    r12 = *(0 + r30); // lwz @ 0x808C88B4
    r3 = r30;
    r12 = *(0x68 + r12); // lwz @ 0x808C88BC
    /* mtctr r12 */ // 0x808C88C0
    /* bctrl  */ // 0x808C88C4
    r31 = r3;
    r3 = r30;
    r4 = r31;
    FUN_808CA118(r3, r4); // bl 0x808CA118
    r4 = r3;
    r3 = r30;
    FUN_80671C1C(r3, r4, r4, r3); // bl 0x80671C1C
    r3 = r30;
    r4 = r31;
    FUN_808CA2D0(r4, r3, r3, r4); // bl 0x808CA2D0
    /* lis r3, 0 */ // 0x808C88F0
    r4 = *(0 + r3); // lwz @ 0x808C88F4
    r0 = *(0xb90 + r4); // lwz @ 0x808C88F8
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x808C88FC
    if (!=) goto 0x0x808c8928;
    r0 = *(0xb70 + r4); // lwz @ 0x808C8904
    if (!=) goto 0x0x808c8928;
    /* lis r3, 0 */ // 0x808C8910
    r3 = *(0 + r3); // lwz @ 0x808C8914
    r3 = *(0x98 + r3); // lwz @ 0x808C8918
    r0 = *(0x3c4 + r3); // lwz @ 0x808C891C
    if (!=) goto 0x0x808c8934;
    r0 = *(0xb70 + r4); // lwz @ 0x808C8928
    if (!=) goto 0x0x808c89b0;
    FUN_805ABE9C(r3); // bl 0x805ABE9C
    /* lis r4, 0 */ // 0x808C893C
    r4 = *(0 + r4); // lwz @ 0x808C8944
    r4 = *(0xc0c + r4); // lwz @ 0x808C8948
    FUN_805AC3BC(r4, r3); // bl 0x805AC3BC
    r0 = *(0x18 + r1); // lbz @ 0x808C8950
    /* li r3, 0 */ // 0x808C8954
    if (==) goto 0x0x808c8970;
    r0 = *(0xec + r1); // lwz @ 0x808C8960
    if (==) goto 0x0x808c8970;
    /* li r3, 1 */ // 0x808C896C
    if (==) goto 0x0x808c8998;
    r0 = *(0xc0 + r1); // lhz @ 0x808C8978
    *(0x4c + r30) = r0; // sth @ 0x808C897C
    r0 = *(0xc2 + r1); // lbz @ 0x808C8980
    *(0x4e + r30) = r0; // stb @ 0x808C8984
    r0 = *(0xc4 + r1); // lhz @ 0x808C8988
    *(0x50 + r30) = r0; // sth @ 0x808C898C
    r0 = *(0xc6 + r1); // lbz @ 0x808C8990
    *(0x52 + r30) = r0; // stb @ 0x808C8994
    /* lis r4, 0 */ // 0x808C8998
    r4 = r4 + 0; // 0x808C89A0
    /* li r5, 0xc */ // 0x808C89A4
    /* li r6, 5 */ // 0x808C89A8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808C89B0
    r5 = *(0 + r3); // lwz @ 0x808C89B4
    r3 = *(0 + r5); // lwz @ 0x808C89B8
    r0 = *(0 + r3); // lwz @ 0x808C89BC
    if (<) goto 0x0x808c8a78;
    if (>) goto 0x0x808c8a78;
    /* lis r4, 0 */ // 0x808C89D0
    r3 = *(0x90 + r5); // lwz @ 0x808C89D4
    r6 = *(0 + r4); // lwz @ 0x808C89D8
    /* li r4, 4 */ // 0x808C89DC
    /* li r5, 0 */ // 0x808C89E0
    r6 = *(0xb68 + r6); // lwz @ 0x808C89E4
    FUN_80684DBC(r4, r5); // bl 0x80684DBC
    /* lis r3, 0 */ // 0x808C89EC
    r5 = *(0 + r3); // lwz @ 0x808C89F0
    r0 = *(0x36 + r5); // lha @ 0x808C89F4
    if (<) goto 0x0x808c8a1c;
    /* lis r3, 1 */ // 0x808C8A00
    /* clrlwi r4, r0, 0x18 */ // 0x808C8A04
    r0 = r3 + -0x6c10; // 0x808C8A08
    r0 = r0 * r4; // 0x808C8A0C
    r3 = r5 + r0; // 0x808C8A10
    r6 = r3 + 0x38; // 0x808C8A14
    /* b 0x808c8a20 */ // 0x808C8A18
    /* li r6, 0 */ // 0x808C8A1C
    /* addis r5, r6, 1 */ // 0x808C8A20
    /* lis r3, 2 */ // 0x808C8A24
    r4 = *(-0x6d70 + r5); // lwz @ 0x808C8A28
    r0 = r3 + -0x7961; // 0x808C8A2C
    *(0x6c + r30) = r4; // stw @ 0x808C8A30
    r3 = *(-0x6d70 + r5); // lwz @ 0x808C8A34
    r5 = r3 + 1; // 0x808C8A38
    if (<=) goto 0x0x808c8a48;
    r5 = r0;
    /* addis r4, r6, 1 */ // 0x808C8A48
    /* lis r3, 0 */ // 0x808C8A4C
    *(-0x6d70 + r4) = r5; // stw @ 0x808C8A50
    r0 = *(0x6c + r30); // lwz @ 0x808C8A54
    /* subf r0, r0, r5 */ // 0x808C8A58
    *(0x6c + r30) = r0; // stw @ 0x808C8A5C
    r3 = *(0 + r3); // lwz @ 0x808C8A60
    FUN_80703240(); // bl 0x80703240
    /* lis r3, 0 */ // 0x808C8A68
    r3 = *(0 + r3); // lwz @ 0x808C8A6C
    r3 = *(0x90 + r3); // lwz @ 0x808C8A70
    FUN_806845D0(r3); // bl 0x806845D0
    /* lis r3, 0 */ // 0x808C8A78
    /* li r4, 0 */ // 0x808C8A7C
    r3 = *(0 + r3); // lwz @ 0x808C8A80
    r0 = *(0xb70 + r3); // lwz @ 0x808C8A84
    if (<) goto 0x0x808c8a9c;
    if (>) goto 0x0x808c8a9c;
    /* li r4, 1 */ // 0x808C8A98
    if (==) goto 0x0x808c8c54;
    /* lis r4, 0 */ // 0x808C8AA4
    r6 = *(0 + r4); // lwz @ 0x808C8AA8
    r0 = *(0x36 + r6); // lha @ 0x808C8AAC
    if (<) goto 0x0x808c8ad4;
    /* lis r4, 1 */ // 0x808C8AB8
    /* clrlwi r5, r0, 0x18 */ // 0x808C8ABC
    r0 = r4 + -0x6c10; // 0x808C8AC0
    r0 = r0 * r5; // 0x808C8AC4
    r4 = r6 + r0; // 0x808C8AC8
    r31 = r4 + 0x38; // 0x808C8ACC
    /* b 0x808c8ad8 */ // 0x808C8AD0
    /* li r31, 0 */ // 0x808C8AD4
    /* lis r4, 0 */ // 0x808C8AD8
    r4 = *(0 + r4); // lwz @ 0x808C8ADC
    r4 = *(0 + r4); // lwz @ 0x808C8AE0
    r0 = *(0 + r4); // lwz @ 0x808C8AE4
    if (<) goto 0x0x808c8af8;
    if (<=) goto 0x0x808c8b0c;
    if (<) goto 0x0x808c8be0;
    if (<=) goto 0x0x808c8b78;
    /* b 0x808c8be0 */ // 0x808C8B08
    /* addis r4, r31, 1 */ // 0x808C8B0C
    /* lis r5, 0 */ // 0x808C8B10
    r0 = *(-0x6fe8 + r4); // lhz @ 0x808C8B14
    r5 = r5 + 0; // 0x808C8B18
    *(0x10 + r1) = r5; // stw @ 0x808C8B1C
    /* li r4, 0 */ // 0x808C8B20
    *(0x14 + r1) = r0; // sth @ 0x808C8B24
    FUN_805C14C8(r5, r4); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x808C8B2C
    r0 = r3;
    r3 = *(0 + r4); // lwz @ 0x808C8B34
    /* clrlwi r4, r0, 0x18 */ // 0x808C8B38
    FUN_805BDDC8(r4); // bl 0x805BDDC8
    r0 = *(0x14 + r1); // lhz @ 0x808C8B40
    /* extsh r3, r3 */ // 0x808C8B44
    r0 = r3 + r0; // 0x808C8B48
    if (>=) goto 0x0x808c8b5c;
    /* li r0, 1 */ // 0x808C8B54
    /* b 0x808c8b68 */ // 0x808C8B58
    if (<=) goto 0x0x808c8b68;
    /* li r0, 0x270f */ // 0x808C8B64
    /* addis r3, r31, 1 */ // 0x808C8B68
    *(0x14 + r1) = r0; // sth @ 0x808C8B6C
    *(-0x6fe8 + r3) = r0; // sth @ 0x808C8B70
    /* b 0x808c8be0 */ // 0x808C8B74
    /* addis r4, r31, 1 */ // 0x808C8B78
    /* lis r5, 0 */ // 0x808C8B7C
    r0 = *(-0x6fe0 + r4); // lhz @ 0x808C8B80
    r5 = r5 + 0; // 0x808C8B84
    *(8 + r1) = r5; // stw @ 0x808C8B88
    /* li r4, 0 */ // 0x808C8B8C
    *(0xc + r1) = r0; // sth @ 0x808C8B90
    FUN_805C14C8(r5, r4); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x808C8B98
    r0 = r3;
    r3 = *(0 + r4); // lwz @ 0x808C8BA0
    /* clrlwi r4, r0, 0x18 */ // 0x808C8BA4
    FUN_805BDDC8(r4); // bl 0x805BDDC8
    r0 = *(0xc + r1); // lhz @ 0x808C8BAC
    /* extsh r3, r3 */ // 0x808C8BB0
    r0 = r3 + r0; // 0x808C8BB4
    if (>=) goto 0x0x808c8bc8;
    /* li r0, 1 */ // 0x808C8BC0
    /* b 0x808c8bd4 */ // 0x808C8BC4
    if (<=) goto 0x0x808c8bd4;
    /* li r0, 0x270f */ // 0x808C8BD0
    /* addis r3, r31, 1 */ // 0x808C8BD4
    *(0xc + r1) = r0; // sth @ 0x808C8BD8
    *(-0x6fe0 + r3) = r0; // sth @ 0x808C8BDC
    /* lis r3, 0 */ // 0x808C8BE0
    r3 = *(0 + r3); // lwz @ 0x808C8BE4
    r3 = *(0 + r3); // lwz @ 0x808C8BE8
    r0 = *(0 + r3); // lwz @ 0x808C8BEC
    if (<) goto 0x0x808c8c00;
    if (<=) goto 0x0x808c8c10;
    if (<) goto 0x0x808c8c54;
    if (>) goto 0x0x808c8c54;
    /* addis r3, r31, 1 */ // 0x808C8C10
    r3 = *(-0x6c16 + r3); // lbz @ 0x808C8C14
    r0 = r3 + 1; // 0x808C8C18
    /* cmpwi cr1, r0, 0x1f */
    if (>=) goto 0x0x808c8c44;
    if (>=) goto 0x0x808c8c34;
    /* li r0, 0 */ // 0x808C8C2C
    /* b 0x808c8c3c */ // 0x808C8C30
    if (<=) goto 0x0x808c8c3c;
    /* li r0, 0x1f */ // 0x808C8C38
    /* addis r3, r31, 1 */ // 0x808C8C3C
    *(-0x6c16 + r3) = r0; // stb @ 0x808C8C40
    /* lis r3, 0 */ // 0x808C8C44
    r3 = *(0 + r3); // lwz @ 0x808C8C48
    r3 = *(0x90 + r3); // lwz @ 0x808C8C4C
    FUN_806845D0(r3); // bl 0x806845D0
    /* lis r3, 0 */ // 0x808C8C54
    *(0 + r3) = r30; // stw @ 0x808C8C58
    r31 = *(0xfc + r1); // lwz @ 0x808C8C5C
    r30 = *(0xf8 + r1); // lwz @ 0x808C8C60
    r0 = *(0x104 + r1); // lwz @ 0x808C8C64
    return;
}