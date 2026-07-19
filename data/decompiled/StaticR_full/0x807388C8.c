/* Function at 0x807388C8, size=408 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_807388C8(int r3, int r4, int r5)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x98 + r1) = r30; // stw @ 0x807388D8
    r30 = r3;
    r0 = *(0x129 + r3); // lbz @ 0x807388E0
    if (==) goto 0x0x80738ad0;
    r3 = *(0x118 + r3); // lwz @ 0x807388EC
    FUN_8061E2BC(); // bl 0x8061E2BC
    FUN_80858EA8(r4); // bl 0x80858EA8
    if (==) goto 0x0x80738980;
    r4 = r30 + 0x6f4; // 0x80738908
    /* li r5, 1 */ // 0x8073890C
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x50(r1) */ // 0x80738914
    /* lfs f1, 0x54(r1) */ // 0x8073891C
    r4 = r30 + 0x6f4; // 0x80738920
    /* lfs f0, 0x58(r1) */ // 0x80738924
    /* li r5, 2 */ // 0x80738928
    /* stfs f2, 0x60(r1) */ // 0x8073892C
    /* stfs f1, 0x70(r1) */ // 0x80738930
    /* stfs f0, 0x80(r1) */ // 0x80738934
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x44(r1) */ // 0x8073893C
    /* lfs f1, 0x48(r1) */ // 0x80738944
    r4 = r30 + 0x6f4; // 0x80738948
    /* lfs f0, 0x4c(r1) */ // 0x8073894C
    /* li r5, 0 */ // 0x80738950
    /* stfs f2, 0x64(r1) */ // 0x80738954
    /* stfs f1, 0x74(r1) */ // 0x80738958
    /* stfs f0, 0x84(r1) */ // 0x8073895C
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x38(r1) */ // 0x80738964
    /* lfs f1, 0x3c(r1) */ // 0x80738968
    /* lfs f0, 0x40(r1) */ // 0x8073896C
    /* stfs f2, 0x68(r1) */ // 0x80738970
    /* stfs f1, 0x78(r1) */ // 0x80738974
    /* stfs f0, 0x88(r1) */ // 0x80738978
    /* b 0x80738a20 */ // 0x8073897C
    r4 = r30 + 0x6f4; // 0x80738984
    /* li r5, 1 */ // 0x80738988
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x2c(r1) */ // 0x80738990
    /* lfs f1, 0x30(r1) */ // 0x80738998
    r4 = r30 + 0x6f4; // 0x8073899C
    /* lfs f0, 0x34(r1) */ // 0x807389A0
    /* li r5, 2 */ // 0x807389A4
    /* stfs f2, 0x60(r1) */ // 0x807389A8
    /* stfs f1, 0x70(r1) */ // 0x807389AC
    /* stfs f0, 0x80(r1) */ // 0x807389B0
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x20(r1) */ // 0x807389B8
    /* lfs f1, 0x24(r1) */ // 0x807389C0
    r4 = r30 + 0x6f4; // 0x807389C4
    /* lfs f0, 0x28(r1) */ // 0x807389C8
    /* li r5, 0 */ // 0x807389CC
    /* stfs f2, 0x64(r1) */ // 0x807389D0
    /* stfs f1, 0x74(r1) */ // 0x807389D4
    /* stfs f0, 0x84(r1) */ // 0x807389D8
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x14(r1) */ // 0x807389E0
    /* lfs f1, 0x18(r1) */ // 0x807389E8
    r4 = r30 + 0x6f4; // 0x807389EC
    /* lfs f0, 0x1c(r1) */ // 0x807389F0
    /* li r5, 3 */ // 0x807389F4
    /* stfs f2, 0x68(r1) */ // 0x807389F8
    /* stfs f1, 0x78(r1) */ // 0x807389FC
    /* stfs f0, 0x88(r1) */ // 0x80738A00
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x80738A08
    /* lfs f1, 0xc(r1) */ // 0x80738A0C
    /* lfs f0, 0x10(r1) */ // 0x80738A10
    /* stfs f2, 0x6c(r1) */ // 0x80738A14
    /* stfs f1, 0x7c(r1) */ // 0x80738A18
    /* stfs f0, 0x8c(r1) */ // 0x80738A1C
    r31 = *(0x204 + r30); // lwz @ 0x80738A20
    if (==) goto 0x0x80738b2c;
    r3 = r31 + 0x74; // 0x80738A2C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80738a44;
    /* li r3, 0 */ // 0x80738A3C
    /* b 0x80738a48 */ // 0x80738A40
    r3 = *(0xc + r3); // lwz @ 0x80738A44
    /* li r0, 0 */ // 0x80738A4C
    if (==) goto 0x0x80738a5c;
    if (!=) goto 0x0x80738a60;
    /* li r0, 1 */ // 0x80738A5C
}