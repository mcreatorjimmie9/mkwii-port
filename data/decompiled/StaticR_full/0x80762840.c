/* Function at 0x80762840, size=1128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_80762840(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8076284C
    r31 = r3;
    /* li r29, 0 */ // 0x80762854
    r12 = *(0 + r3); // lwz @ 0x80762858
    r12 = *(0x30 + r12); // lwz @ 0x8076285C
    /* mtctr r12 */ // 0x80762860
    /* bctrl  */ // 0x80762864
    /* lis r4, 0x101 */ // 0x80762868
    r0 = *(0x20 + r3); // lwz @ 0x8076286C
    r3 = r4 + 0x101; // 0x80762870
    /* andc. r0, r3, r0 */ // 0x80762874
    if (!=) goto 0x0x80762894;
    /* lis r3, 0 */ // 0x8076287C
    r3 = *(0 + r3); // lwz @ 0x80762880
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80762894;
    /* li r29, 1 */ // 0x80762890
    *(0xc9 + r31) = r29; // stb @ 0x80762898
    /* li r30, 0 */ // 0x8076289C
    if (==) goto 0x0x807628b4;
    r0 = *(0xca + r31); // lbz @ 0x807628A4
    if (!=) goto 0x0x807628b4;
    /* li r30, 1 */ // 0x807628B0
    /* li r28, 0 */ // 0x807628B8
    if (!=) goto 0x0x807628d0;
    r0 = *(0xca + r31); // lbz @ 0x807628C0
    if (==) goto 0x0x807628d0;
    /* li r28, 1 */ // 0x807628CC
    r0 = *(0xc0 + r31); // lbz @ 0x807628D0
    if (!=) goto 0x0x807628e0;
    /* b 0x80762c24 */ // 0x807628DC
    if (!=) goto 0x0x807629b8;
    r12 = *(0 + r31); // lwz @ 0x807628E8
    r3 = r31;
    /* li r4, 0 */ // 0x807628F0
    r12 = *(0x68 + r12); // lwz @ 0x807628F4
    /* mtctr r12 */ // 0x807628F8
    /* bctrl  */ // 0x807628FC
    r0 = *(0xc9 + r31); // lbz @ 0x80762900
    if (==) goto 0x0x80762934;
    r0 = *(0xc4 + r31); // lwz @ 0x8076290C
    if (!=) goto 0x0x80762c24;
    r3 = *(0xb4 + r31); // lwz @ 0x80762918
    /* li r4, 1 */ // 0x8076291C
    r12 = *(0 + r3); // lwz @ 0x80762920
    r12 = *(0x24 + r12); // lwz @ 0x80762924
    /* mtctr r12 */ // 0x80762928
    /* bctrl  */ // 0x8076292C
    /* b 0x80762c24 */ // 0x80762930
    if (==) goto 0x0x80762954;
    r3 = *(0xb4 + r31); // lwz @ 0x8076293C
    /* li r4, 0 */ // 0x80762940
    r12 = *(0 + r3); // lwz @ 0x80762944
    r12 = *(0x24 + r12); // lwz @ 0x80762948
    /* mtctr r12 */ // 0x8076294C
    /* bctrl  */ // 0x80762950
    r3 = *(0xb4 + r31); // lwz @ 0x80762954
    r12 = *(0 + r3); // lwz @ 0x80762958
    r12 = *(0xc + r12); // lwz @ 0x8076295C
    /* mtctr r12 */ // 0x80762960
    /* bctrl  */ // 0x80762964
    r3 = *(0xb4 + r31); // lwz @ 0x80762968
    r4 = r31 + 0x30; // 0x8076296C
    r12 = *(0 + r3); // lwz @ 0x80762970
    r12 = *(0x74 + r12); // lwz @ 0x80762974
    /* mtctr r12 */ // 0x80762978
    /* bctrl  */ // 0x8076297C
    r3 = *(0xb4 + r31); // lwz @ 0x80762980
    r12 = *(0 + r3); // lwz @ 0x80762984
    r12 = *(0x80 + r12); // lwz @ 0x80762988
    /* mtctr r12 */ // 0x8076298C
    /* bctrl  */ // 0x80762990
    if (==) goto 0x0x80762c24;
    r3 = *(0xb4 + r31); // lwz @ 0x8076299C
    /* li r4, 1 */ // 0x807629A0
    r12 = *(0 + r3); // lwz @ 0x807629A4
    r12 = *(0x24 + r12); // lwz @ 0x807629A8
    /* mtctr r12 */ // 0x807629AC
    /* bctrl  */ // 0x807629B0
    /* b 0x80762c24 */ // 0x807629B4
    if (==) goto 0x0x807629c8;
    if (!=) goto 0x0x80762b94;
    r3 = *(0xc4 + r31); // lwz @ 0x807629C8
    r0 = *(0xbc + r31); // lwz @ 0x807629CC
    if (!=) goto 0x0x807629ec;
    r12 = *(0 + r31); // lwz @ 0x807629D8
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x807629E0
    /* mtctr r12 */ // 0x807629E4
    /* bctrl  */ // 0x807629E8
    if (==) goto 0x0x80762a10;
    r3 = *(0xb0 + r31); // lwz @ 0x807629F4
    /* li r4, 0 */ // 0x807629F8
    r12 = *(0 + r3); // lwz @ 0x807629FC
    r12 = *(0x20 + r12); // lwz @ 0x80762A00
    /* mtctr r12 */ // 0x80762A04
    /* bctrl  */ // 0x80762A08
    /* b 0x80762a30 */ // 0x80762A0C
    if (==) goto 0x0x80762a30;
    r3 = *(0xb0 + r31); // lwz @ 0x80762A18
    /* li r4, 1 */ // 0x80762A1C
    r12 = *(0 + r3); // lwz @ 0x80762A20
    r12 = *(0x20 + r12); // lwz @ 0x80762A24
    /* mtctr r12 */ // 0x80762A28
    /* bctrl  */ // 0x80762A2C
    /* lis r3, 0 */ // 0x80762A30
    r0 = *(0 + r3); // lhz @ 0x80762A34
    if (!=) goto 0x0x80762aec;
    r0 = *(0xbc + r31); // lwz @ 0x80762A40
    r3 = *(0xc4 + r31); // lwz @ 0x80762A44
    if (!=) goto 0x0x80762a80;
    r3 = *(0xb0 + r31); // lwz @ 0x80762A50
    r12 = *(0 + r3); // lwz @ 0x80762A54
    r12 = *(0xc + r12); // lwz @ 0x80762A58
    /* mtctr r12 */ // 0x80762A5C
    /* bctrl  */ // 0x80762A60
    r3 = *(0xb0 + r31); // lwz @ 0x80762A64
    r4 = r31 + 0x30; // 0x80762A68
    r12 = *(0 + r3); // lwz @ 0x80762A6C
    r12 = *(0x74 + r12); // lwz @ 0x80762A70
    /* mtctr r12 */ // 0x80762A74
    /* bctrl  */ // 0x80762A78
    /* b 0x80762c24 */ // 0x80762A7C
    if (<=) goto 0x0x80762c24;
    r0 = *(0xcc + r31); // lwz @ 0x80762A84
    if (!=) goto 0x0x80762ab0;
    r3 = *(0xb0 + r31); // lwz @ 0x80762A90
    /* li r4, 1 */ // 0x80762A94
    /* li r5, 1 */ // 0x80762A98
    r12 = *(0 + r3); // lwz @ 0x80762A9C
    r12 = *(0x7c + r12); // lwz @ 0x80762AA0
    /* mtctr r12 */ // 0x80762AA4
    /* bctrl  */ // 0x80762AA8
    /* b 0x80762ad4 */ // 0x80762AAC
    if (!=) goto 0x0x80762ad4;
    r3 = *(0xb0 + r31); // lwz @ 0x80762AB8
    /* li r4, 1 */ // 0x80762ABC
    /* li r5, 0 */ // 0x80762AC0
    r12 = *(0 + r3); // lwz @ 0x80762AC4
    r12 = *(0x7c + r12); // lwz @ 0x80762AC8
    /* mtctr r12 */ // 0x80762ACC
    /* bctrl  */ // 0x80762AD0
    r3 = *(0xb0 + r31); // lwz @ 0x80762AD4
    r12 = *(0 + r3); // lwz @ 0x80762AD8
    r12 = *(0x80 + r12); // lwz @ 0x80762ADC
    /* mtctr r12 */ // 0x80762AE0
    /* bctrl  */ // 0x80762AE4
    /* b 0x80762c24 */ // 0x80762AE8
    r12 = *(0 + r31); // lwz @ 0x80762AEC
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x80762AF4
    /* mtctr r12 */ // 0x80762AF8
    /* bctrl  */ // 0x80762AFC
    r3 = *(0xb0 + r31); // lwz @ 0x80762B00
    r12 = *(0 + r3); // lwz @ 0x80762B04
    r12 = *(0xc + r12); // lwz @ 0x80762B08
    /* mtctr r12 */ // 0x80762B0C
    /* bctrl  */ // 0x80762B10
    r3 = *(0xb0 + r31); // lwz @ 0x80762B14
    r4 = r31 + 0x30; // 0x80762B18
    r12 = *(0 + r3); // lwz @ 0x80762B1C
    r12 = *(0x74 + r12); // lwz @ 0x80762B20
    /* mtctr r12 */ // 0x80762B24
    /* bctrl  */ // 0x80762B28
    r0 = *(0xcc + r31); // lwz @ 0x80762B2C
    if (!=) goto 0x0x80762b58;
    r3 = *(0xb0 + r31); // lwz @ 0x80762B38
    /* li r4, 1 */ // 0x80762B3C
    /* li r5, 1 */ // 0x80762B40
    r12 = *(0 + r3); // lwz @ 0x80762B44
    r12 = *(0x7c + r12); // lwz @ 0x80762B48
    /* mtctr r12 */ // 0x80762B4C
    /* bctrl  */ // 0x80762B50
    /* b 0x80762b7c */ // 0x80762B54
    if (!=) goto 0x0x80762b7c;
    r3 = *(0xb0 + r31); // lwz @ 0x80762B60
    /* li r4, 1 */ // 0x80762B64
    /* li r5, 0 */ // 0x80762B68
    r12 = *(0 + r3); // lwz @ 0x80762B6C
    r12 = *(0x7c + r12); // lwz @ 0x80762B70
    /* mtctr r12 */ // 0x80762B74
    /* bctrl  */ // 0x80762B78
    r3 = *(0xb0 + r31); // lwz @ 0x80762B7C
    r12 = *(0 + r3); // lwz @ 0x80762B80
    r12 = *(0x80 + r12); // lwz @ 0x80762B84
    /* mtctr r12 */ // 0x80762B88
    /* bctrl  */ // 0x80762B8C
    /* b 0x80762c24 */ // 0x80762B90
    if (!=) goto 0x0x80762c24;
    if (!=) goto 0x0x80762c04;
    if (==) goto 0x0x80762bc4;
    r3 = *(0xb4 + r31); // lwz @ 0x80762BAC
    /* li r4, 0 */ // 0x80762BB0
    r12 = *(0 + r3); // lwz @ 0x80762BB4
    r12 = *(0x24 + r12); // lwz @ 0x80762BB8
    /* mtctr r12 */ // 0x80762BBC
    /* bctrl  */ // 0x80762BC0
    r3 = *(0xb4 + r31); // lwz @ 0x80762BC4
    r12 = *(0 + r3); // lwz @ 0x80762BC8
    r12 = *(0xc + r12); // lwz @ 0x80762BCC
    /* mtctr r12 */ // 0x80762BD0
    /* bctrl  */ // 0x80762BD4
    r3 = *(0xb4 + r31); // lwz @ 0x80762BD8
    r4 = r31 + 0x30; // 0x80762BDC
    r12 = *(0 + r3); // lwz @ 0x80762BE0
    r12 = *(0x74 + r12); // lwz @ 0x80762BE4
    /* mtctr r12 */ // 0x80762BE8
    /* bctrl  */ // 0x80762BEC
    r3 = *(0xb4 + r31); // lwz @ 0x80762BF0
    r12 = *(0 + r3); // lwz @ 0x80762BF4
    r12 = *(0x80 + r12); // lwz @ 0x80762BF8
    /* mtctr r12 */ // 0x80762BFC
    /* bctrl  */ // 0x80762C00
    if (==) goto 0x0x80762c24;
    r3 = *(0xb4 + r31); // lwz @ 0x80762C0C
    /* li r4, 1 */ // 0x80762C10
    r12 = *(0 + r3); // lwz @ 0x80762C14
    r12 = *(0x24 + r12); // lwz @ 0x80762C18
    /* mtctr r12 */ // 0x80762C1C
    /* bctrl  */ // 0x80762C20
    r4 = *(0xc4 + r31); // lwz @ 0x80762C24
    /* lis r3, 0x1f */ // 0x80762C28
    r0 = r3 + -0x7b80; // 0x80762C2C
    r3 = r4 + 1; // 0x80762C30
    *(0xc4 + r31) = r3; // stw @ 0x80762C34
    if (<=) goto 0x0x80762c44;
    *(0xc4 + r31) = r0; // stw @ 0x80762C40
    r0 = *(0xc9 + r31); // lbz @ 0x80762C44
    /* li r27, 0 */ // 0x80762C48
    *(0xca + r31) = r0; // stb @ 0x80762C4C
    /* li r28, 0 */ // 0x80762C50
    /* lis r29, 0 */ // 0x80762C54
    /* lis r30, 0 */ // 0x80762C58
    /* b 0x80762cf0 */ // 0x80762C5C
    r3 = *(0xb8 + r31); // lwz @ 0x80762C60
    /* lwzx r3, r3, r28 */ // 0x80762C64
    r3 = r3 + 0x74; // 0x80762C68
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80762c80;
    /* li r3, 0 */ // 0x80762C78
    /* b 0x80762c84 */ // 0x80762C7C
    r3 = *(0xc + r3); // lwz @ 0x80762C80
    /* li r0, 0 */ // 0x80762C88
    if (==) goto 0x0x80762c98;
    if (!=) goto 0x0x80762c9c;
    /* li r0, 1 */ // 0x80762C98
    if (==) goto 0x0x80762ce8;
    r3 = *(0 + r29); // lwz @ 0x80762CA4
}